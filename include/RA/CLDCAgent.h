#ifndef CL_DC_AGENT_H_
#define CL_DC_AGENT_H_

#include "common/comm/TCPAgent.h"
#include <queue>
class Epoll;
class SocketAddress;
class TCPSocket;

using std::queue;
class CLDCAgent:public TCPAgent
{
	public:
		CLDCAgent();
		CLDCAgent(const SocketAddress &);
		CLDCAgent(const TCPSocket &, const SocketAddress &);
		~CLDCAgent();
		void readBack(InReq & req);
		int sendPackage(MsgHeader &, const char * );

	private:
		
};


#endif

