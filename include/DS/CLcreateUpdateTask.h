#ifndef CL_CREATE_UPDATE_TASK_H_
#define CL_CREATE_UPDATE_TASK_H_
#include "common/comm/BaseTask.h"
#include <string>
#include <map>
#include <vector>
#include <set>
#include "protocol/DIS/MSG_DS_CS_UPDATE_DATA_SEND.pb.h"
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
		void setStringMap(const string colName, vector<string> sData)
		{
			m_strMap.insert(make_pair(colName, sData));
		}
		void setIntMap(const string colName, vector<int> iData)
		{
			m_intMap.insert(make_pair(colName, iData));
		}
		void setDoubleMap(const string colName, vector<double> dData)
		{
			m_doubleMap.insert(make_pair(colName, dData));
		}
		vector<string> const& getStringVec(const string colName) 
		{
			return m_strMap[colName];
		}
		bool removeStringMap(const string colName)
		{
			StringMap::size_type eraseCount = m_strMap.erase(colName);
			return ( eraseCount != 0 );
		}
		bool removeIntMap(const string colName)
		{
			IntMap::size_type eraseCount = m_intMap.erase(colName);
			return (eraseCount != 0);
		}
		bool removeDoubleMap(const string colName)
		{
			DoubleMap::size_type eraseCount = m_doubleMap.erase(colName);
			return (eraseCount != 0);
		}
		vector<int> const& getIntVec(const string colName) 
		{
			return m_intMap[colName];
		}
		vector<double> const& getDoubleVec(const string colName) 
		{
			return m_doubleMap[colName];
		}
		void setUpdateData(const string column, const string updateData)
		{
			m_updateData.insert(make_pair(column, updateData));
		}
		string getUpdateData(const string column)
		{
			return m_updateData[column];
		}
		bool isUpdateDataEmpty()
		{
			return m_updateData.empty();
		}
		void setRTableIP(const string rTableIP)
		{
			m_rTableIP = rTableIP;
		}
		string getRTableIP() const
		{
			return m_rTableIP;
		}
		void setDBInfo(const uint32_t dbID, const string tableName, const uint32_t sliceNo, const uint32_t sliceNum)
		{
			m_dbID = dbID;
			m_tableName = tableName;
			m_sliceNo = sliceNo;
			m_sliceNum = sliceNum;
		}
		uint32_t getDBID() const
		{
			return m_dbID;
		}
		string getTableName() const
		{
			return m_tableName;
		}
		void setColumnSet(const string column)
		{
			m_columnSet.insert(column);
		}
		void removeColumnSet(const string column)
		{
			m_columnSet.erase(column);
		}
		bool isColumnEmpty()
		{
			return m_columnSet.empty();
		}
	private:
		typedef map<string, vector<string> > StringMap;
		typedef map<string, vector<int> > IntMap;
		typedef map<string, vector<double> > DoubleMap;
		typedef set<string>	ColumnSet;
		uint32_t m_state;
		uint32_t m_agentID;
		string m_data;
		StringMap m_strMap;
		IntMap m_intMap;
		DoubleMap m_doubleMap;
		map<string, string> m_updateData;	//map<column, dictprotoStr>
		string m_rTableIP;
		uint32_t m_dbID;
		string m_tableName;
		uint32_t m_sliceNo;
		uint32_t m_sliceNum;
		ColumnSet m_columnSet;
};

#endif
