#include "DS/CLRAConnectAgent.h"
#include "common/comm/Epoll.h"
#include "common/comm/SocketAddress.h"
#include "common/log/log.h"
#include "protocol/protocol.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include <iostream>
using namespace std;
CLRAConnectAgent::CLRAConnectAgent()
{
}

CLRAConnectAgent::CLRAConnectAgent(const SocketAddress &addr):
	TCPAgent(addr)
{
}

CLRAConnectAgent::CLRAConnectAgent(const TCPSocket &sock, const SocketAddress &addr):
	TCPAgent(sock, addr)
{
}

CLRAConnectAgent::~CLRAConnectAgent()
{
}

int CLRAConnectAgent::init()
{
	if(this->connect() != SUCCESSFUL)
	{
		ERROR_LOG("CLRAConnectAgent::init connect error!");
		return FAILED;
	}
	return SUCCESSFUL;
}

int CLRAConnectAgent::connectAfter(bool bConnect)
{
	if(bConnect)
	{

		MsgHeader msgHeader;
		msgHeader.cmd = DS_RA_IMPORT_TASK_SEND;
		
		MSG_DS_RA_IMPORT_TASK_SEND impTask;
		unsigned int taskid = 1;
		impTask.set_taskid(taskid);
		IMP_DB_INFO * impDBInfo = impTask.add_dbinfo();
		impDBInfo->set_dbid(1);

		IMP_TAB_INFO * impTabInfo = impDBInfo->add_tableinfo();
		impTabInfo->set_tablename("TEST");
		impTabInfo->add_colname("ID");
		impTabInfo->add_colname("NAME");
		impTabInfo->add_colname("JOB");
		string data;
		
		impTask.SerializeToString(&data);
		msgHeader.length = data.length();
		sendPackage(msgHeader, data.c_str());

		return SUCCESSFUL;
	}
	else
	{
		return FAILED;
	}
}

void CLRAConnectAgent::readBack(InReq &req)
{
	switch(req.m_msgHeader.cmd)
	{
		case RA_DS_IMPORT_ERROR_INFO_ACK:
		{

			break;
		}
		case RA_DS_IMPORT_TASK_ACK:
		{
			string data(req.ioBuf, req.m_msgHeader.length);
			MSG_RA_DS_IMPORT_TASK_ACK impTask;
			if(!impTask.ParseFromString(data))
			{
				cerr << "CLRAConnectAgent::readBack parse from string error!" << endl;
			}
			else
			{
				NumMap numMap;
				StrMap strMap;

				unsigned int subTaskNo = impTask.subtaskno();
				unsigned int subTaskNum = impTask.subtasknum();

				cout << "subTaskNo: " << subTaskNo << '\t' << "subTaskNum: " << subTaskNum << endl;
				for(int i = 0; i < impTask.colvalue_size(); i++)
				{
					const COL_DATA & colData = impTask.colvalue(i);
					string colName = colData.colname();
					if(colData.coltype() == COL_DATA_COLUMN_TYPE_STRING)
					{
						for(int j = 0; j < colData.colvalue_size(); j++)
						{
							const COL_VALUE & colValue = colData.colvalue(j);
							string strData = colValue.strvalue();
							strMap[colName].push_back(strData);
						}
					}
					else if(colData.coltype() == COL_DATA_COLUMN_TYPE_NUM)
					{
						for(int j = 0; j < colData.colvalue_size(); j++)
						{
							const COL_VALUE & colValue = colData.colvalue(j);
							double numData = colValue.dvalue();
							numMap[colName].push_back(numData);
						}
					}
					
				}
				for(StrMap::iterator it = strMap.begin();
									it != strMap.end();
									++it)
				{
					cout << it->first.c_str() << '\t' << it->second.size() << endl;
				}
									
				for(NumMap::iterator it = numMap.begin();
									it != numMap.end();
									++it)
				{
					cout << it->first.c_str() << '\t' << it->second.size() << endl;
				}
				
			}
			break;
		}
		
	}
}

int CLRAConnectAgent::sendPackage(MsgHeader &header, const char *dataStr)
{
    uint32_t msgLength = header.length + sizeof(MsgHeader);
    char *sendBuf = new char[msgLength + 1];
    memset(sendBuf, 0, msgLength + 1);
    memcpy(sendBuf, &header, sizeof(MsgHeader));
    if (dataStr != NULL)
    {
        memcpy(sendBuf + sizeof(MsgHeader), dataStr, header.length);
    }

    if (this->writeToBuffer(sendBuf, msgLength) == FAILED)
    {
        DEBUG_LOG("\nIn CLRAConnectAgent:: sendPackage(): write data error!\n");
        return FAILED;
    }

    return SUCCESSFUL;
}
