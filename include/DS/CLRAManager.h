#ifndef CL_RA_MANAGER_H_
#define CL_RA_MANAGER_H_
#include "common/sys/Singleton.h"
#include<string>
#include<map>
#include <iostream>
using std::string;
using std::map;

class CLRAManager:public Singleton<CLRAManager>
{
	friend class Singleton<CLRAManager>;

	public:
		CLRAManager();
		~CLRAManager();
		unsigned int getRAAgentID(string raName)
		{
			return m_raMap[raName];
		}
		void setRAAgentID(const string raName, const unsigned int agentID)
		{
			m_raMap.insert(make_pair(raName, agentID));
		}
	private:
		typedef map<string, unsigned int> RAMap;
		RAMap m_raMap;
};

#endif
