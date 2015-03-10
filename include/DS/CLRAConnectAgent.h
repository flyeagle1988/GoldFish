#ifndef CL_RA_CONNECT_AGENT_H_
#define CL_RA_CONNECT_AGENT_H_
#include "common/comm/TCPAgent.h"
#include "protocol/dbInfo.h"
#include <string>
#include <map>
#include <vector>
using std::string;
using std::map;
using std::vector;

class Epoll;
class SocketAddress;
class TCPSocket;


typedef map<string, vector<double> > NumMap;
typedef map<string, vector<string> > StrMap;

class CLRAConnectAgent:public TCPAgent
{
	public:
		CLRAConnectAgent();
		CLRAConnectAgent(const SocketAddress &);
		CLRAConnectAgent(const TCPSocket &, const SocketAddress &);
		~CLRAConnectAgent();

		int init();
		void readBack(InReq &);

		int connectAfter(bool);
		int sendPackage(MsgHeader &, const char *);

		void setImpInfo(const string impInfoStr)
		{
			m_impInfoStr= impInfoStr;
		}

		string getImpInfo() const
		{
			return m_impInfoStr;
		}
		void setDSState(const unsigned int & state)
		{
			m_state = state;
		}
	private:
		string m_impInfoStr;
		unsigned int m_state;
};

#endif

