#ifndef CL_IMP_TASK_MANAGER_H_
#define CL_IMP_TASK_MANAGER_H_
#include "common/sys/Singleton.h"
#include<string>
#include<map>
#include <iostream>
using namespace std;

class CLimpTaskManager:public Singleton<CLimpTaskManager>
{
	friend class Singleton<CLimpTaskManager>;

	public:
		CLimpTaskManager();
		~CLimpTaskManager();
		unsigned int getRAAgentID(string raName)
		{
			return m_raMap[raName];
		}
		void setRAAgentID(const string raName, const unsigned int agentID)
		{
			m_raMap.insert(make_pair(raName, agentID));
		}
		void setImpTaskID(const unsigned int taskid, const unsigned int dcAgentID)
		{
			//m_impTaskIDDCMap[taskid] = dcAgentID;
			m_impTaskIDDCMap.insert(make_pair(taskid, dcAgentID));
		}
		unsigned int getDCAgentID(unsigned int taskid)
		{
			return m_impTaskIDDCMap[taskid];
		}
	private:
		typedef map<string, unsigned int> RAMap;	//map<raName, raAgentID>
		typedef map<unsigned int, unsigned int> TaskIdDCMap;
		RAMap m_raMap;
		TaskIdDCMap m_impTaskIDDCMap;
};

#endif
