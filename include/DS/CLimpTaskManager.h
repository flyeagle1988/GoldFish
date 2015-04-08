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
		void setImpTaskID(const string tableName, const unsigned int impTaskID)
		{
			//m_impTaskIDDCMap[taskid] = dcAgentID;
			m_impTaskIDDCMap.insert(make_pair(tableName, impTaskID));
		}
		unsigned int getImpTaskID(const string tableName)
		{
			return m_impTaskIDDCMap[tableName];
		}
		void setTaskNumber(const string tableName, const unsigned int sliceNumber)
		{
			m_taskNumberMap.insert(make_pair(tableName,sliceNumber));
		}
		unsigned int getTaskNumber(const string tableName)
		{
			return m_taskNumberMap[tableName];
		}
		void taskNumberDecrease(const string tableName)
		{
			m_taskNumberMap[tableName]--;
		}
		bool isTaskNumberZero(const string tableName)
		{
			return (m_taskNumberMap[tableName] == 0);
		}
	private:
		typedef map<string, unsigned int> RAMap;	//map<raName, raAgentID>
		typedef map<string, unsigned int> TaskIdDCMap;	//map<DBID+TableName, dcImpTaskID>
		typedef map<string, unsigned int>	TaskNumberMap;	//map<DBID+TableName, sliceNumber>
		RAMap m_raMap;
		TaskIdDCMap m_impTaskIDDCMap;
		TaskNumberMap m_taskNumberMap;
};

#endif
