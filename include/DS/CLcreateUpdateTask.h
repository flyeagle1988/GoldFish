#ifndef CL_CREATE_UPDATE_TASK_H_
#define CL_CREATE_UPDATE_TASK_H_
#include "common/comm/BaseTask.h"
#include <string>
#include <map>
using namespace std;

class CLcreateUpdateTask:public BaseTask
{
	public:
		CLcreateUpdateTask();
		~CLcreateUpdateTask();
		int goNext();
		void setState(const uint32_t state)
		{
			m_state = state;
		}
		void setAgentID(const uint32_t agentID)
		{
			m_agentID = agentID;
		}
		uint32_t getAgentID() const
		{
			return m_agentID;
		}
		void setData(const string &data)
		{
			m_data = data;
		}
		void recvWorkItem( ThreadPoolWorkItem* );
	private:
		uint32_t m_state;
		uint32_t m_agentID;
		string m_data;
};

#endif