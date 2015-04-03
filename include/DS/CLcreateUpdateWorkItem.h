#ifndef CL_CREATE_UPDATE_WORKITEM_H_
#define CL_CREATE_UPDATE_WORKITEM_H_
#include "common/sys/ThreadPoolWorkItem.h"
#include "protocol/DIS/MSG_DS_RA_IMPORT_TASK_SEND.pb.h"
#include "protocol/DIS/MSG_DS_RA_DELTA_GET.pb.h"
#include "DS/DGroupKey.h"
#include <string>
#include <map>
#include <vector>
using namespace std;

class CLcreateUpdateWorkItem:public ThreadPoolWorkItem
{
	public:
		CLcreateUpdateWorkItem();
		~CLcreateUpdateWorkItem();	
		int process();
		void addColData(const COL_DATA colData)
		{
			m_colDataVec.push_back(colData);
		}
		void setDBInfo(const uint32_t dbID, const string tableName, const uint32_t sliceNo, const uint32_t sliceNum)
		{
			m_dbID = dbID;
			m_tableName = tableName;
			m_sliceNo = sliceNo;
			m_sliceNum = sliceNum;
		}
	private:
		uint32_t m_dbID;
		string m_tableName;
		uint32_t m_sliceNo;
		uint32_t m_sliceNum;
		vector<COL_DATA> m_colDataVec;
};
#endif
