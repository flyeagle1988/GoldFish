#ifndef CL_CS_CONNECT_AGENT_H_
#define CL_CS_CONNECT_AGENT_H_

#include "common/comm/TCPAgent.h"

class CLCSConnectAgent:public TCPAgent
{
	public:
		CLCSConnectAgent();
		CLCSConnectAgent(const SocketAddress &);
		~CLCSConnectAgent();

		int init();
		void readBack(InReq &);

		int connectAfter(bool);
		int sendPackage(MsgHeader &, const char *);
	private:
		
};

#endif
