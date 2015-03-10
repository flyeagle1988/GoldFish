#ifndef CL_IMPORT_TASK_H_
#define CL_IMPORT_TASK_H_
#include "common/comm/BaseTask.h"
#include "protocol/dbInfo.h"
#include <string>
#include <map>
#include <queue>
using std::string;
using std::map;
using std::queue;

class CLimportTask:public BaseTask
{
		public:		
			CLimportTask();		
			~CLimportTask();	
			void setAgentID(const unsigned int agentid)
			{
				m_agentID = agentid;
			}
			unsigned int getAgentID() const
			{
				return m_agentID;
			}

			void impTaskEnqueue(const IMPORT_INFO impInfo)
			{
				m_impTaskQueue.push(impInfo);
			}
			IMPORT_INFO getImpTaskFront()
			{
				return m_impTaskQueue.front();
			}
			void impTaskDequeue() 
			{
				m_impTaskQueue.pop();
			}
			unsigned int getImpTaskQueueSize()
			{
				return m_impTaskQueue.size();
			}
			int goNext();
			void recvWorkItem( ThreadPoolWorkItem* );
		private:
			queue<IMPORT_INFO> m_impTaskQueue;
			unsigned int m_agentID;
			unsigned int m_state;
};
#endif
