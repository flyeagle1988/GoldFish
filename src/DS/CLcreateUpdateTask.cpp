#include "common/comm/TaskManager.h"
#include "common/comm/AgentManager.h"
#include "common/sys/ThreadPoolDispatcher.h"
#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
#include "DS/CLcreateUpdateTask.h"
#include "DS/CLDCConnectAgent.h"
#include "DS/CLcreateUpdateWorkItem.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"

extern DevLog *g_pDevLog;
extern CLDCConnectAgent *g_pDCConnectAgent;

CLcreateUpdateTask::CLcreateUpdateTask():m_state(DS_UPDATE_STATE), m_agentID(0)
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
			impTaskAck.ParseFromString(m_data);
			CLcreateUpdateWorkItem * pWI = new CLcreateUpdateWorkItem();
			pWI->setTaskID(getID());
			pWI->setDBInfo(impTaskAck.dbid(),impTaskAck.tablename());
			for(int i = 0; i < impTaskAck.coldata_size(); i++)
			{
				const COL_DATA & colData = impTaskAck.coldata(i);
				pWI->addColData(colData);
			}
			g_pDispatcher->postRequest(pWI);
			setState(WAIT_WORKITEM);
			goNext();
			break;
		}
		case WAIT_WORKITEM:
		{
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
}