#ifndef CL_CREATE_INDEX_WORKITEM_H_
#define CL_CREATE_INDEX_WORKITEM_H_

#include "common/sys/ThreadPoolWorkItem.h"
#include "DS/DGroupKey.h"
#include <string>
#include <map>
using namespace std;
class CLcreateIndexWorkItem:public ThreadPoolWorkItem
{
	public:
		CLcreateIndexWorkItem();
		~CLcreateIndexWorkItem();
		
		int process();
		void setData(const string &data)
		{
			m_data = data;
		}
		string getData() const
		{
			return m_data;
		}
	private:
		string m_data;
		
};
#endif
