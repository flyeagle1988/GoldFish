#ifndef CL_GET_META_WORK_ITEM_H_
#define CL_GET_META_WORK_ITEM_H_

#include "common/sys/ThreadPoolWorkItem.h"

#include <string>
using std::string;
class CLgetMetaWorkItem:public ThreadPoolWorkItem
{
	public:
		CLgetMetaWorkItem();
		~CLgetMetaWorkItem();

		int process();
		void setData(const string data)
		{
			m_metaData = data;
		}
		string getData() const
		{
			return m_metaData;
		}
	private:
		string m_metaData;
		
};
#endif
