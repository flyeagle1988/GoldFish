#include "RA/CLDSAgent.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
//#include "protocol/DIS/MSG_RA_DS_DELTA_DATA_SEND_pb.h"
#include "common/comm/TaskManager.h"
#include "common/log/log.h"
#include "RA/CLimportTask.h"


CLDSAgent::CLDSAgent()
{
}

CLDSAgent::CLDSAgent(const SocketAddress &addr):TCPAgent(addr)
{
}
CLDSAgent::CLDSAgent(const TCPSocket &sock, const SocketAddress &addr):TCPAgent(sock, addr)
{
}
CLDSAgent::~CLDSAgent()
{
}

void CLDSAgent::readBack(InReq & req)
{
	switch(req.m_msgHeader.cmd)
	{
		case DS_RA_IMPORT_TASK_SEND:
		{
			SocketAddress addr;
			getOppAddr(addr);
			
			cout << "DS Import Task Accepted from " << addr.getIP() << endl;
			string data(req.ioBuf, req.m_msgHeader.length);
			MSG_DS_RA_IMPORT_TASK_SEND dsImportTask;
			if(!dsImportTask.ParseFromString(data))
			{
				cerr << "CLDSAgent::readBack ParseFromString error!" << endl;
			}
			else
			{
				//CLDataManager::getInstance()->setDSImpTaskMap(dsImportTask, getID());
				CLimportTask * pImpTask = TaskManager::getInstance()->create<CLimportTask>();
				pImpTask->setAgentID(getID());
				for(int i = 0; i < dsImportTask.dbinfo_size(); i++)
				{
					const IMP_DB_INFO & impDBInfo = dsImportTask.dbinfo(i);
					for(int j = 0; j < impDBInfo.tableinfo_size(); j++)
					{
						IMPORT_INFO impInfo;
						const IMP_TAB_INFO & impTabInfo = impDBInfo.tableinfo(j);
						impInfo.taskid = dsImportTask.taskid();
						impInfo.dbID = impDBInfo.dbid();
						impInfo.tableName = impTabInfo.tablename();
						for(int k = 0; k < impTabInfo.colname_size(); k++)
						{
							string colName = impTabInfo.colname(k);
							impInfo.colName.push_back(colName);
						}
						pImpTask->impTaskEnqueue(impInfo);
					}
				}
				pImpTask->goNext();
			}	
			break;
		}
		case DS_RA_DELTA_DATA_SEND_ACK:
		{

			break;
		}
		default:
		{
			break;
		}
	}
}

int CLDSAgent::sendPackage(MsgHeader &header, const char *str)
{
	unsigned int msgLength = header.length + sizeof(MsgHeader);
	char * sendBuf = new char[msgLength + 1];
	memset(sendBuf, 0, msgLength + 1);
	memcpy(sendBuf, &header, sizeof(MsgHeader));

	if(str != NULL)
	{
		memcpy(sendBuf + sizeof(MsgHeader), str, header.length);
	}

	if(this->writeToBuffer(sendBuf, msgLength) == FAILED)
	{
		ERROR_LOG("\nCLDCAgent::sendPackage(): write data error!\n");
		return FAILED;
	}
	return SUCCESSFUL;
}