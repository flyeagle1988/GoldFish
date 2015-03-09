#ifndef CL_GET_METADATA_TASK_H_
#define CL_GET_METADATA_TASK_H_

#include "common/comm/BaseTask.h"
#include "RA/CLDBManager.h"


#include <string>
using std::string;

struct STATUS
{
	int statusCode;
	string statusMsg;
};

class CLgetMetaDataTask:public BaseTask
{
	public:
		CLgetMetaDataTask();
		~CLgetMetaDataTask();
		int goNext();
		void recvWorkItem( ThreadPoolWorkItem* );
		void setState(const unsigned int state)
		{
			m_state = state;
		}

		unsigned int getState() const
		{
			return m_state;
		}
		void setAgentID(const unsigned int agentID)
		{
			m_agentID = agentID;
		}
		unsigned int getAgentID() const
		{
			return m_agentID;
		}
		void setData(const string data)
		{
			m_data = data;
		}
		string getData() const
		{
			return m_data;
		}
	private:
		
		unsigned int m_state;
		STATUS m_status;
		unsigned int m_agentID;
		string m_data;
};

#endif
