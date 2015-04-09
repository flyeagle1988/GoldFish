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
CLcreateIndexTask::CLcreateIndexTask()
	:m_state(DS_IMP_STATE)
	,m_rTableCSIP("")
	,m_isRTableSend(false)
	,m_isRTableReceived(false)
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
				//string tableName = intToStr(impTaskAck.dbid()) + impTaskAck.tablename();
				//CLimpTaskManager::getInstance()->setTaskNumber(tableName, impTaskAck.subtasknum());
				setDataInfo(impTaskAck.dbid(), impTaskAck.tablename(), impTaskAck.subtaskno(), impTaskAck.subtasknum());
				CLcreateIndexWorkItem *pCreateIndexWI = new CLcreateIndexWorkItem();
				pCreateIndexWI->setTaskID(getID());
				pCreateIndexWI->setData(impTaskAck);
				g_pDispatcher->postRequest(pCreateIndexWI);
				setState(WAIT_WORKITEM);
				goNext();
			}
			break;
		}
		case WAIT_WORKITEM:
		{
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
						addr.setAddress(it->csIP.c_str(), it->csPort);
						CLCSAddrManager::getInstance()->setCSPort(it->csPort);
						CLCSConnectAgent *pCSConnectAgent = (AgentManager::getInstance())->createAgent<CLCSConnectAgent>(addr);
						pCSConnectAgent->setSendData(rawData);
						pCSConnectAgent->init();
						CLCSAddrManager::getInstance()->setCSAgentMap(it->csIP, pCSConnectAgent->getID());
						string columnLocation = intToStr(getDBID()) + getTableName() + it->columnName;
						CLCSAddrManager::getInstance()->setColumnLocation(columnLocation, pCSConnectAgent->getID());
						//pCSConnectAgent->sendPackage(msgHeader, rawData.c_str());
					}
					else
					{
						uint32_t agentID = CLCSAddrManager::getInstance()->getCSAgent(it->csIP);
						CLCSConnectAgent *pCSConnectAgent = 
							dynamic_cast<CLCSConnectAgent*>(AgentManager::getInstance()->get(agentID));
						if(pCSConnectAgent == NULL)
						{
							pCSConnectAgent->sendPackage(msgHeader, rawData.c_str());
						}
						else
						{
							DEV_LOG_ERROR("CLcreateIndexTask::goNext get CSAgent error!");
						}
					}
				}
			}
			break;
		}
		case DS_SEND_RTABLE:
		{
			string csIP = getRTableCSIP();			
			//string rTableStr = getRTable();
			MsgHeader msgHeader;
			msgHeader.cmd = DS_CS_RTABLE_CREATE;
			msgHeader.length = m_rTableStr.length();

			if(!csIP.empty())
			{
				bool ret = CLCSAddrManager::getInstance()->findCSAgentMap(csIP);
				if(ret)
				{
					uint32_t agentID = CLCSAddrManager::getInstance()->getCSAgent(csIP);
					CLCSConnectAgent *pCSConnectAgent = 
						dynamic_cast<CLCSConnectAgent*>(AgentManager::getInstance()->get(agentID));
					pCSConnectAgent->sendPackage(msgHeader,m_rTableStr.c_str());
				}
				else
				{
					SocketAddress addr;
					unsigned short csPort = CLCSAddrManager::getInstance()->getCSPort();
					addr.setAddress(csIP.c_str(),csPort);
					CLCSConnectAgent *pCSConnectAgent = (AgentManager::getInstance())->createAgent<CLCSConnectAgent>(addr);
					pCSConnectAgent->init();
					pCSConnectAgent->sendPackage(msgHeader,m_rTableStr.c_str());
				}
				string tableLocation = intToStr(m_dbID) + m_tableName;
				CLCSAddrManager::getInstance()->setRTableAddr(tableLocation, csIP);
				setRTableSend();
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
	//goNext();
}
