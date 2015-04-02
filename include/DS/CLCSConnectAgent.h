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
		void setSendData(const string data)
		{
			m_sendData = data;
		}
		void clearSendData()
		{
			m_sendData.clear();
		}
	private:
		string m_sendData;
};

#endif
