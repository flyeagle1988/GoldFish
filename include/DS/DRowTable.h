#ifndef ROWTABLE_H_
#define ROWTABLE_H_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "BitCompressedVector.h"
using namespace std;

class DRowTable{
	public:
		DRowTable(size_t attributeCount, string tableName, uint64_t base);
		virtual ~DRowTable(){}
		void fillOneColumn(string columnName, const uint64_t& itemCount, const vector<uint64_t>& value);
		//TODO ѹ���б�֮���ٴ����ṩcompressed vector�Ŀ���

		//SQLִ�к���
		//PROJECT
		vector<uint64_t> getValue(string columnName, const vector<uint64_t> rowID);
		vector<vector<uint64_t> > getMultiValue(const vector<string>& columnName, const vector<uint64_t> rowID);
	 	//TODO �������������Ӱ���AGG�ۺϺ�����ʵ��
		//ENDSQLִ�к���

		void updateOneColumn(string columnName, const uint64_t& itemCount, const vector<uint64_t>& value);
		void refresh(string columnName, const vector<uint64_t>& xVector);
		uint64_t getColumnRows(string columnName);
		string getTableName();
		void print();

	private:
		inline int64_t caculatePos(string columnName)
		{
			vector<string>::iterator itr = find(m_columnVector.begin(), m_columnVector.end(), columnName);
			if(itr == m_columnVector.end())
				return -1;
			else
				return distance(m_columnVector.begin(), itr);
		}
	private:
		uint64_t m_attributeCount;
		string m_tableName;
		uint64_t m_base;
		vector<BitCompressedVector> m_attributeVector;
		vector<string> m_columnVector;
};
#endif
