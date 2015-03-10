#include "common/comm/TaskManager.h"
#include "common/comm/AgentManager.h"
#include "common/sys/ThreadPoolDispatcher.h"
#include "common/log/log.h"
#include "RA/CLDBManager.h"
#include "RA/CLimportTask.h"
#include "RA/CLreadDBWorkItem.h"
#include "protocol/dbInfo.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "protocol/protocol.h"
#include <iostream>
#include <sys/sysinfo.h> 

CLimportTask::CLimportTask():m_state(CREATE_TASK)
{
}
CLimportTask::~CLimportTask()
{
}

int CLimportTask::goNext()
{
	switch(m_state)
	{
		case CREATE_TASK:
		{
			unsigned int queueNum = getImpTaskQueueSize();
			if(queueNum != 0)
			{
				CLreadDBWorkItem *pReadWI = new CLreadDBWorkItem();
				IMPORT_INFO impInfo;
				impInfo = getImpTaskFront();
				//pReadWI->setDCImpTaskID(impInfo.taskid);
				pReadWI->setImpTask(impInfo);
				pReadWI->setTaskID(getID());
				pReadWI->setAgentID(getAgentID());
				g_pDispatcher->postRequest(pReadWI);	
				m_state = WAIT_WORKITEM;
			}
			else
			{
				m_state = FINISH;
			}
			goNext();
			break;
		}
		case WAIT_WORKITEM:
		{
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
            ERROR_LOG("CLimportTask::goNext no this state");
            return FAILED;
            break;
		}
	}
	return SUCCESSFUL;
}

void CLimportTask::recvWorkItem(ThreadPoolWorkItem *pWI)
{
	if(pWI != NULL)
	{
		delete pWI;
		pWI = NULL;
	}
	impTaskDequeue();
	m_state = CREATE_TASK;
	goNext();
}