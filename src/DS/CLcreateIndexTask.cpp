#include "DS/CLcreateIndexTask.h"
#include "DS/CLcreateIndexWorkItem.h"
#include "common/comm/TaskManager.h"
#include "common/comm/AgentManager.h"
#include "common/sys/ThreadPoolDispatcher.h"
#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
#include "protocol/protocol.h"
extern DevLog *g_pDevLog;

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
			CLcreateIndexWorkItem * pCreateIndexWI = new CLcreateIndexWorkItem();
			pCreateIndexWI->setData(getData());
			g_pDispatcher->postRequest(pCreateIndexWI);
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

}