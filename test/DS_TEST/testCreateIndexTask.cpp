#include <gtest/gtest.h>
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

using namespace std;

TEST(CLcreateIndexTask,goNext)
{
	CLcreateIndexTask * pTask = TaskManager::getInstance()->create<CLcreateIndexTask>();
	pTask->setTaskRole(CREATE_INDEX);
	
}
