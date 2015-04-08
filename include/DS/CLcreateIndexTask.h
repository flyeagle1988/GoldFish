#ifndef CL_CREATE_INDEX_TASK_H_
#define CL_CREATE_INDEX_TASK_H_
#include "common/comm/BaseTask.h"
#include <string>
#include <map>
using namespace std;

class CLcreateIndexTask:public BaseTask
{
	public:		
		CLcreateIndexTask();
		~CLcreateIndexTask();
		void setAgentID(const unsigned int agentid)
		{
			m_agentID = agentid;
		}
		unsigned int getAgentID() const
		{
			return m_agentID;
		}		
		int goNext();
		void recvWorkItem( ThreadPoolWorkItem* );
		void setData(const string &data)
		{
			m_data = data;
		}
		string getData() const 
		{
			return m_data;
		}
		void setState(const unsigned int state)
		{
			m_state = state;
		}
		void setDict(const string columnName, const string dict)
		{
			m_dictMap.insert(make_pair(columnName, dict));
		}

		string getDict(const string columnName)
		{
			return m_dictMap[columnName];
		}
		bool removeDict(const string columnName)
		{
			DictoryMap::size_type eraseCount = m_dictMap.erase(columnName);
			return ( eraseCount != 0 );
		}
		bool isDictEmpty()
		{
			return m_dictMap.empty();
		}
		void setDataInfo(const unsigned int dbID, const string tableName, const uint32_t sliceNo, const uint32_t sliceNum)
		{
			m_dbID = dbID;
			m_tableName = tableName;
			m_sliceNo = sliceNo;
			m_sliceNum = sliceNum;
		}
		unsigned int getDBID() const
		{
			return m_dbID;
		}
		string getTableName() const
		{
			return m_tableName;
		}
		void setRTable(const string protoStr)
		{
			m_rTableStr = protoStr;
		}
		string getRTable() const
		{
			return m_rTableStr;
		}
		
		void removeRTable()
		{
			m_rTableStr.clear();
		}
		void setRTableSend()
		{
			m_isRTableSend = true;
		}
		bool isRTableSend()
		{
			return m_isRTableSend;
		}
		void setRTableCSIP(const string csIP)
		{
			m_rTableCSIP = csIP;
		}
		string getRTableCSIP() const
		{
			return m_rTableCSIP;
		}
		void setRTableReceived()
		{
			m_isRTableReceived = true;
		}
		bool isRTableReceived()
		{
			return m_isRTableReceived;
		}

	private:				
		typedef map<string, string>	DictoryMap;	//map<columnName, groupkey string>
		//typedef map<uint32_t, string> RTableMap;		//map<taskid, proto string>
		unsigned int m_agentID;
		string m_data;
		unsigned int m_state;
		unsigned int m_dbID;
		string m_tableName;
		DictoryMap m_dictMap;
		string m_rTableStr;
		string m_rTableCSIP;
		bool m_isRTableSend;
		bool m_isRTableReceived;
		uint32_t m_sliceNo;
		uint32_t m_sliceNum;
};

#endif
