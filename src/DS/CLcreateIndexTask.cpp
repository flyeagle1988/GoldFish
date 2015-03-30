#include "DS/CLcreateIndexTask.h"
#include "DS/CLcreateIndexWorkItem.h"
#include "DS/CLDCConnectAgent.h"
#include "DS/CLCSAddrManager.h"
#include "DS/CLCSConnectAgent.h"
#include "common/comm/TaskManager.h"
#include "common/comm/AgentManager.h"
#include "common/sys/ThreadPoolDispatcher.h"
#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "protocol/DIS/MSG_DS_DC_RESOURCE_GET.pb.h"
#include "protocol/DIS/MSG_DS_DC_RTABLE_POSITION_GET.pb.h"

extern DevLog *g_pDevLog;
extern CLDCConnectAgent *g_pDCConnectAgent;
CLcreateIndexTask::CLcreateIndexTask():m_state(DS_IMP_STATE)
{
}

CLcreateIndexTask::~CLcreateIndexTask()
{
}

int CLcreateIndexTask::goNext()
{
	switch(m_state)
	{
		case DS_IMP_STATE:
		{
			MSG_RA_DS_IMPORT_TASK_ACK impTaskAck;
			if(!impTaskAck.ParseFromString(getData()))
			{
				DEV_LOG_ERROR("CLcreateIndexWorkItem::process parse from string error!");
				return FAILED;
			}
			else
			{
				CLcreateIndexWorkItem *pCreateIndexWI = new CLcreateIndexWorkItem();
				pCreateIndexWI->setTaskID(getID());
				pCreateIndexWI->setData(impTaskAck);
				g_pDispatcher->postRequest(pCreateIndexWI);
				setState(WAIT_WORKITEM);
				setDataInfo(impTaskAck.dbid(), impTaskAck.tablename());
				goNext();
			}
			break;
		}
		case WAIT_WORKITEM:
		{
			MSG_DS_DC_RTABLE_POSITION_GET rTablePosition;
			rTablePosition.set_dbid(getDBID());
			rTablePosition.set_tablename(getTableName());
			string data;
			rTablePosition.SerializeToString(&data);
			MsgHeader msgHeader;
			msgHeader.cmd = DS_DC_RTABLE_POSITION_GET;
			msgHeader.length = data.length();
			g_pDCConnectAgent->sendPackage(msgHeader,data.c_str());
			break;
		}
		case DS_WAIT_FOR_ADDR:
		{
			bool ret = CLCSAddrManager::getInstance()->findTaskID(getID());
			if(ret)
			{
				vector<CS_ADDR_INFO> csAddrVec;
				CLCSAddrManager::getInstance()->getCSAddrByTaskID(getID(), csAddrVec);
				for(vector<CS_ADDR_INFO>::iterator it = csAddrVec.begin();
												it != csAddrVec.end();
												++it)
				{		
					MsgHeader msgHeader;
					msgHeader.cmd = DS_CS_RAW_DATA_SEND;					
					string rawData = getDict(it->columnName);
					msgHeader.length = rawData.length();
					bool rt = CLCSAddrManager::getInstance()->findCSAgentMap(it->csIP);
					if(!rt)
					{
						SocketAddress addr;
						unsigned short port = CLCSAddrManager::getInstance()->getCSPort();
						addr.setAddress(it->csIP.c_str(), port);
						CLCSConnectAgent *pCSConnectAgent = (AgentManager::getInstance())->createAgent<CLCSConnectAgent>(addr);
						CLCSAddrManager::getInstance()->setCSAgentMap(it->csIP, pCSConnectAgent->getID());
						string columnLocation = intToStr(getDBID()) + getTableName() + it->columnName;
						CLCSAddrManager::getInstance()->setColumnLocation(columnLocation, pCSConnectAgent->getID());
						pCSConnectAgent->sendPackage(msgHeader, rawData.c_str());
					}
					else
					{
						uint32_t agentID = CLCSAddrManager::getInstance()->getCSAgent(it->csIP);
						CLCSConnectAgent *pCSConnectAgent = 
							dynamic_cast<CLCSConnectAgent*>(AgentManager::getInstance()->get(agentID));
						pCSConnectAgent->sendPackage(msgHeader, rawData.c_str());
					}
				}
				setState(FINISH);
				goNext();
			}
			else
			{
				setState(DS_WAIT_FOR_ADDR);
				goNext();
			}
			break;
		}
		case FINISH:
		{
			TaskManager::getInstance()->recycle(getID());
			break;
		}
		default:
		{
			DEV_LOG_ERROR("CLcreateIndexTask::goNext: no this state!");
			return FAILED;
			break;
		}
	}
	return SUCCESSFUL;
}

void CLcreateIndexTask::recvWorkItem(ThreadPoolWorkItem *pWI)
{
	if(pWI != NULL)
	{
		delete pWI;
		pWI = NULL;
	}
	setState(DS_WAIT_FOR_ADDR);
	goNext();
}
