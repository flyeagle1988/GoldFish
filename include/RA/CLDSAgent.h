#ifndef CL_DS_AGENT_H_
#define CL_DS_AGENT_H_
#include "common/comm/TCPAgent.h"
#include "RA/CLDBManager.h"
#include <queue>
#include "RA/dbInfo.h"
class Epoll;
class SocketAddress;
class TCPSocket;
using std::queue;

class CLDSAgent:public TCPAgent
{
	public:
		CLDSAgent();
		CLDSAgent(const SocketAddress &);
		CLDSAgent(const TCPSocket &, const SocketAddress &);

		~CLDSAgent();
		/*
		void setImpTaskEnqueue(const IMPORT_INFO impInfo)
		{
			m_impTaskQueue.push(impInfo);
		}
		IMPORT_INFO getImpTaskQueueFront()
		{
			return m_impTaskQueue.front();
		}
		
		void setImpTaskDequeue()
		{
			m_impTaskQueue.pop();
		}
		*/
		void readBack(InReq & req);
		int sendPackage(MsgHeader &, const char * );
	private:
		//queue<IMPORT_INFO> m_impTaskQueue;
		
};
#endif
