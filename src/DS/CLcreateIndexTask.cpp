#include "DS/CLcreateIndexTask.h"
#include "common/comm/TaskManager.h"
#include "common/comm/AgentManager.h"
#include "common/sys/ThreadPoolDispatcher.h"
#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
extern DevLog *g_pDevLog;

CLcreateIndexTask::CLcreateIndexTask()
{
}

CLcreateIndexTask::~CLcreateIndexTask()
{
}

int CLcreateIndexTask::goNext()
{
	return SUCCESSFUL;
}

void CLcreateIndexTask::recvWorkItem(ThreadPoolWorkItem *pWI)
{

}