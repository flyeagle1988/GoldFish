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
		void setDataInfo(const unsigned int dbID, const string tableName)
		{
			m_dbID = dbID;
			m_tableName = tableName;
		}
		unsigned int getDBID() const
		{
			return m_dbID;
		}
		string getTableName() const
		{
			return m_tableName;
		}
	private:				
		typedef map<string, string>	DictoryMap;	//map<columnName, groupkey string>
		unsigned int m_agentID;
		string m_data;
		unsigned int m_state;
		unsigned int m_dbID;
		string m_tableName;
		DictoryMap m_dictMap;
};

#endif
