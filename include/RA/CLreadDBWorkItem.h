#ifndef CL_READ_DB_WORK_ITEM_H_
#define CL_READ_DB_WORK_ITEM_H_

#include "common/sys/ThreadPoolWorkItem.h"
#include "common/comm/BaseHeader.h"
#include "RA/dbInfo.h"
#include <vector>
#include <string>
using std::vector;
using std::string;

class CLreadDBWorkItem:public ThreadPoolWorkItem
{
	public:
		CLreadDBWorkItem();
		~CLreadDBWorkItem();
		void setImpTask(const IMPORT_INFO impTask)
		{
			m_impTask = impTask;
		}
		/*
		void setDCImpTaskID(const unsigned int dcImpTaskID)
		{
			m_dcImpTaskID = dcImpTaskID;
		}
		unsigned int getDCImpTaskID() const
		{
			return m_dcImpTaskID;
		}

		void setImpTaskID(const unsigned int impTaskid)
		{
			m_impTaskID = impTaskid;
		}
		unsigned int getImpTaskID() const
		{
			return m_impTaskID;
		}
		*/
		void setAgentID(const unsigned int agentID)
		{
			m_agentID = agentID;
		}
		unsigned int getAgentID() const
		{
			return m_agentID;
		}
		int process();
	private:
		//unsigned int m_dcImpTaskID;	//DC import task id
		//unsigned int m_impTaskID; //local RA CLimportTask ID
		string m_readResult;
		unsigned int m_agentID;
		IMPORT_INFO m_impTask;
		
};
#endif
