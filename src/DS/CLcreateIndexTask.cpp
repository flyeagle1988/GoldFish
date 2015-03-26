#include "DS/CLcreateIndexTask.h"
#include "DS/CLcreateIndexWorkItem.h"
#include "common/comm/TaskManager.h"
#include "common/comm/AgentManager.h"
#include "common/sys/ThreadPoolDispatcher.h"
#include "common/log/log.h"
#include "common/DevLog/DevLog.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "protocol/DIS/MSG_DS_DC_RESOURCE_GET.pb.h"
extern DevLog *g_pDevLog;
extern CLDCConnectAgent * g_pDCConnectAgent;
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
				MSG_DS_DC_RESOURCE_GET resourceGet;
				resourceGet.set_taskid(getID());
				for(int i = 0; i < impTaskAck.colvalue_size(); i++)
				{
					const COL_DATA & colData = impTaskAck.colvalue(i);
					resourceGet.add_columnsize(colData.ByteSize());
				}
				string data;
				resourceGet.SerializeToString(&data);
				MsgHeader msgHeader;
				msgHeader.cmd = DS_DC_RESOURCE_GET;
				msgHeader.length = data.length();
				g_pDCConnectAgent->sendPackage(msgHeader,data.c_str());
				data.clear();
				// Get the location of Row Table
				MSG_DS_DC_RTABLE_POSITION_GET rTablePositionGet;
				rTablePositionGet.set_dbid(impTaskAck.dbid());
				rTablePositionGet.set_tablename(impTaskAck.tablename());
				rTablePositionGet.SerializeToString(&data);				
				msgHeader.cmd = DS_DC_RTABLE_POSITION_GET;
				msgHeader.length = data.length();
				g_pDCConnectAgent->sendPackage(msgHeader, data.c_str());
				data.clear();
					
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
