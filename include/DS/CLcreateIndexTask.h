#ifndef CL_CREATE_INDEX_TASK_H_
#define CL_CREATE_INDEX_TASK_H_
#include "common/comm/BaseTask.h"


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
	private:
		unsigned int m_agentID;
};

#endif
