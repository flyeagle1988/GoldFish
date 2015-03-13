#include "RA/CLgetMetaDataTask.h"
#include "RA/CLgetMetaWorkItem.h"
#include "RA/CLDCAgent.h"

#include "common/comm/TaskManager.h"
#include "common/comm/AgentManager.h"
#include "common/sys/ThreadPoolDispatcher.h"
#include "common/comm/BaseHeader.h"
#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
#include "protocol/DIS/MSG_DC_RA_DATABASE_INFO_GET.pb.h"
#include "protocol/protocol.h"

extern DevLog * g_pDevLog;

CLgetMetaDataTask::CLgetMetaDataTask():
					m_state(READ_METADATA)
{
	m_status.statusCode = 0;
	m_status.statusMsg = "";
}

CLgetMetaDataTask::~CLgetMetaDataTask()
{
}

int CLgetMetaDataTask::goNext()
{
	switch (m_state)
	{
		case READ_METADATA:
		{
			CLgetMetaWorkItem *pGetMetaWorkItem = new CLgetMetaWorkItem();
			pGetMetaWorkItem->setTaskID(getID());
			g_pDispatcher->postRequest(pGetMetaWorkItem);
			this->setState(WAIT_WORKITEM);
			goNext();
			break;
		}
		case WAIT_WORKITEM:
		{
			//m_state = WAIT_WORKITEM;
			//goNext();
			break;
		}
		case FINISH:
		{		
			TaskManager::getInstance()->recycle(getID());
			break;
		}
		default:
		{
			ERROR_LOG("CLgetMetaDatTask::goNext: no this state");
            return FAILED;
            break;
		}
		
	}
	return SUCCESSFUL;
}

void CLgetMetaDataTask::recvWorkItem(ThreadPoolWorkItem *pWorkItem)
{
	if(pWorkItem != NULL)
	{
		setData((dynamic_cast<CLgetMetaWorkItem *>(pWorkItem))->getData());
		delete pWorkItem;
		pWorkItem = NULL;
	}
	CLDCAgent * pAgent = dynamic_cast<CLDCAgent *>(AgentManager::getInstance()->get(getAgentID()));
	if(pAgent == NULL)
	{
		DEV_LOG_ERROR("CLgetMetaDataTask::recvWorkItem:get CLDCAgent error!");
	}
	else
	{
		string data;
		data = getData();
		MsgHeader msgHeader;
		msgHeader.cmd = RA_DC_DATABASE_INFO_GET_ACK;
		msgHeader.length = data.length();
		pAgent->sendPackage(msgHeader, data.c_str());
		data.clear();
		this->setState(FINISH);
		goNext();
	}
}

