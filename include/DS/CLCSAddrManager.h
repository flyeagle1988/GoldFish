#ifndef CL_CS_ADDR_MANAGER_H_
#define CL_CS_ADDR_MANAGER_H_
#include "common/sys/Singleton.h"
#include <map>
#include <vector>
#include <string>
using namespace std;

struct CS_ADDR_INFO
{
	string csIP;
	uint32_t csMemory;
	string columnName;
};

class CLCSAddrManager:public Singleton<CLCSAddrManager>
{
	friend class Singleton<CLCSAddrManager>;
	public:
		CLCSAddrManager(){}
		~CLCSAddrManager(){}

		void setCSAddrByTaskID(const uint32_t taskID, const vector<CS_ADDR_INFO> addrVec)
		{
			m_csAddrMap.insert(make_pair(taskID, addrVec));
		}

		int getCSAddrByTaskID(const uint32_t taskID, vector<CS_ADDR_INFO> &addrVec) 	
		{
			CSAddrMap::const_iterator it = m_csAddrMap.find(taskID);
			if(it != m_csAddrMap.end())
			{
				addrVec = it->second;
				return SUCCESSFUL;
			}
			return FAILED;
		}

		void setColumnLocation(const string column, const uint32_t csAgentID)
		{
			m_columnLocMap.insert(make_pair(column, csAgentID));
		}
		uint32_t getCSAgentIDByColumn(const string column) const
		{
			ColumnLocationMap::const_iterator it = m_columnLocMap.find(column);
			if(it != m_columnLocMap.end())
			{
				return it->second;
			}
			return 0;
		}
		bool findTaskID(const unsigned taskid)
		{
			CSAddrMap::const_iterator it = m_csAddrMap.find(taskid);
			if(it != m_csAddrMap.end())
			{
				return true;
			}
			return false;
		}
		void setCSAgentMap(const string csIP, const uint32_t agentID)
		{
			m_csAgentMap.insert(make_pair(csIP, agentID));
		}

		bool findCSAgentMap(const string csIP)
		{
			CSAgentMap::const_iterator it = m_csAgentMap.find(csIP);
			if(it != m_csAgentMap.end())
				return true;
			return false;
		}
		uint32_t getCSAgent(const string csIP)
		{
			CSAgentMap::const_iterator it = m_csAgentMap.find(csIP);
			if(it != m_csAgentMap.end())
				return it->second;
			return 0;
		}
		void setCSPort(const unsigned short port)
		{
			m_csPort = port;
		}
		unsigned short getCSPort() const
		{
			return m_csPort;
		}
	private:
		typedef map<uint32_t, vector<CS_ADDR_INFO> > CSAddrMap;	//map<taskID, CSIP >
		typedef map<string, uint32_t> CSAgentMap;
		typedef map<string , uint32_t > ColumnLocationMap; 	//map< DBID+TABLENAME+COLNAME ,CSAgent >
		CSAddrMap m_csAddrMap;
		ColumnLocationMap m_columnLocMap;
		CSAgentMap m_csAgentMap;
		unsigned short m_csPort;
};

#endif
