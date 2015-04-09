#include "common/comm/TaskManager.h"
#include "common/comm/AgentManager.h"
#include "common/sys/ThreadPoolDispatcher.h"
#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
#include "DS/CLcreateUpdateTask.h"
#include "DS/CLDCConnectAgent.h"
#include "DS/CLcreateUpdateWorkItem.h"
#include "DS/CLimpTaskManager.h"
#include "DS/CLCSAddrManager.h"
#include "DS/CLCSConnectAgent.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_DC_RESOURCE_GET.pb.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "protocol/DIS/MSG_DS_RA_DELTA_GET.pb.h"
#include "protocol/DIS/MSG_DS_DC_RTABLE_POSITION_GET.pb.h"

extern DevLog *g_pDevLog;
extern CLDCConnectAgent *g_pDCConnectAgent;

CLcreateUpdateTask::CLcreateUpdateTask()
	:m_state(DS_UPDATE_STATE)
	,m_agentID(0)
	,m_rTableIP("")
	,m_resourceAddrGet(false)
	,m_dictSend(false)
{
}
CLcreateUpdateTask::~CLcreateUpdateTask()
{
}

int CLcreateUpdateTask::goNext()
{
	switch(m_state)
	{
		case DS_UPDATE_STATE:
		{
			MSG_RA_DS_IMPORT_TASK_ACK impTaskAck;
			impTaskAck.ParseFromString(getData());
			//string tableName = intToStr(impTaskAck.dbid()) + impTaskAck.tablename();
			//CLimpTaskManager::getInstance()->setTaskNumber(tableName, impTaskAck.subtasknum());

			//set RTable addr
			string tableLocation = intToStr(impTaskAck.dbid()) + impTaskAck.tablename();
			string rTableIP = CLCSAddrManager::getInstance()->getRTableAddr(tableLocation);
			setRTableIP(rTableIP);
		
			setDBInfo(impTaskAck.dbid(),impTaskAck.tablename(), impTaskAck.subtaskno(), impTaskAck.subtasknum());
			CLcreateUpdateWorkItem * pWI = new CLcreateUpdateWorkItem();
			pWI->setTaskID(getID());
			pWI->setDBInfo(impTaskAck.dbid(),impTaskAck.tablename(), impTaskAck.subtaskno(), impTaskAck.subtasknum());
			for(int i = 0; i < impTaskAck.coldata_size(); i++)
			{
				const COL_DATA & colData = impTaskAck.coldata(i);
				setColumnSet(colData.colname());
				pWI->addColData(colData);
			}
			g_pDispatcher->postRequest(pWI);
			setState(WAIT_WORKITEM);
			goNext();
			break;
		}
		case DS_DELTA_STATE:
		{
			MSG_RA_DS_DELTA_GET_ACK deltaDataGetAck;
			deltaDataGetAck.ParseFromString(getData());
			setDBInfo(deltaDataGetAck.dbid(),deltaDataGetAck.tablename(), 1, 1);
			CLcreateUpdateWorkItem *pWI = new CLcreateUpdateWorkItem();
			pWI->setTaskID(getID());
			pWI->setDBInfo(deltaDataGetAck.dbid(),deltaDataGetAck.tablename(), 1,1);
			
			MSG_DS_DC_RESOURCE_GET resourseGet;
			resourseGet.set_taskid(getID());
			resourseGet.set_dbid(deltaDataGetAck.dbid());
			resourseGet.set_tablename(deltaDataGetAck.tablename());
			
			for(int i = 0; i < deltaDataGetAck.colvalue_size(); i++)
			{
				const COL_DATA & colData = deltaDataGetAck.colvalue(i);
				setColumnSet(colData.colname());
				pWI->addColData(colData);
				MSG_DS_DC_RESOURCE_GET_COL_SIZE * colSize = resourseGet.add_colsize();
				colSize->set_columnname(colData.colname());
				colSize->set_columnsize(colData.ByteSize());
			}			
			string resourceGetStr;
			resourseGet.SerializeToString(&resourceGetStr);
			MsgHeader msgHeader;
			msgHeader.cmd = DS_DC_RESOURCE_GET;
			msgHeader.length = resourceGetStr.length();
			g_pDCConnectAgent->sendPackage(msgHeader,resourceGetStr.c_str());
			resourceGetStr.clear();
			
			MSG_DS_DC_RTABLE_POSITION_GET rTablePositionGet;
			rTablePositionGet.set_dbid(deltaDataGetAck.dbid());
			rTablePositionGet.set_tablename(deltaDataGetAck.tablename());
			rTablePositionGet.set_taskid(getID());
			string rTablePositionGetStr;
			rTablePositionGet.SerializeToString(&rTablePositionGetStr);
			msgHeader.cmd = DS_DC_RTABLE_POSITION_GET;
			msgHeader.length = rTablePositionGetStr.length();
			g_pDCConnectAgent->sendPackage(msgHeader,rTablePositionGetStr.c_str());
			rTablePositionGetStr.clear();
			
			g_pDispatcher->postRequest(pWI);
			setState(WAIT_WORKITEM);
			goNext();
			break;
		}
		case WAIT_WORKITEM:
		{
			break;
		}
		case DS_SEND_DICT:
		{
			for(map<string, string>::iterator it = m_updateData.begin();
											it != m_updateData.end();
											++it)
			{
				string columnLocation = intToStr(m_dbID) + m_tableName + it->first;
				uint32_t agentID = CLCSAddrManager::getInstance()->getCSAgentIDByColumn(columnLocation);
				
				if(agentID != 0)
				{
					CLCSConnectAgent * pAgent = 
						dynamic_cast<CLCSConnectAgent *>(AgentManager::getInstance()->get(agentID));
					MsgHeader msgHeader;
					msgHeader.cmd = DS_CS_UPDATE_DATA_SEND;
					msgHeader.length = it->second.length();
					pAgent->sendPackage(msgHeader,it->second.c_str());
				}
				else
					DEV_LOG_ERROR("CLcreateUpdateTask::goNext DS_SEND_DICT: agentID = 0! " + columnLocation);
			}
			clearUpdateData();
			break;
		}
		case WORK_ITEM_RECEIVED:
		{
			
			break;
		}
		case DS_SEND_X_VECTOR:
		{
			for(vector<string>::iterator it = m_newRTableAndXvector.begin();
										it != m_newRTableAndXvector.end();
										++it)
			{
				uint32_t agentID = CLCSAddrManager::getInstance()->getCSAgent(getRTableIP());
				CLCSConnectAgent * pAgent = dynamic_cast<CLCSConnectAgent *>(AgentManager::getInstance()->get(agentID));
				if(pAgent != NULL)
				{
					MsgHeader msgHeader;
					msgHeader.cmd = DS_CS_RTABLE_SEND;
					msgHeader.length = it->length();
					pAgent->sendPackage(msgHeader,it->c_str());
				}
			}
			clearNewRTable();
			break;
		}
		case FINISH:
		{
			TaskManager::getInstance()->recycle(getID());
			break;
		}
		default:
		{
			DEV_LOG_ERROR("CLcreateUpdateTask::goNext: no this state!");
			return FAILED;
			break;
		}
	}
	return SUCCESSFUL;
}

void CLcreateUpdateTask::recvWorkItem(ThreadPoolWorkItem *pWI)
{
	if(pWI != NULL)
	{
		delete pWI;
		pWI = NULL;
	}
	if(getTaskRole() == CREATE_UPDATE)
	{
		setState(DS_SEND_DICT);
		goNext();
	}
	else if(getTaskRole() == CREATE_DELTA)
	{
		if(isResourceAddrGet())
		{
			setState(DS_SEND_DICT);
			goNext();
		}
		else
			setState(WORK_ITEM_RECEIVED);
	}
}
