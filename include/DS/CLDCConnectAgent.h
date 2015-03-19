#ifndef CL_DC_CONNECT_AGENT_H_
#define CL_DC_CONNECT_AGENT_H_
#include "common/comm/TCPAgent.h"
#include "DS/CLHeartBeatTimer.h"
#include "protocol/dbInfo.h"
#include <string>
#include <map>
#include <vector>
using std::string;
using std::map;
using std::vector;
const unsigned int HEART_OVERTIME = 10;
class CLDCConnectAgent:public TCPAgent
{
	public:
		CLDCConnectAgent();
		CLDCConnectAgent(const SocketAddress &);
		CLDCConnectAgent(const TCPSocket &, const SocketAddress &);
		~CLDCConnectAgent();

		int init();
		void readBack(InReq &);

		int connectAfter(bool);
		int sendPackage(MsgHeader &, const char *);
		
	private:
		CLHeartBeatTimer * m_pHeartBeatTimer;
};
#endif
