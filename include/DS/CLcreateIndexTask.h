#ifndef CL_CREATE_INDEX_TASK_H_
#define CL_CREATE_INDEX_TASK_H_
#include "common/comm/BaseTask.h"
#include <string>
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
		
	private:
		unsigned int m_agentID;
		string m_data;
		unsigned int m_state;
		unsigned int m_dbID;
		string m_tableName;
		
};

#endif
