#ifndef CL_CS_ADDR_MANAGER_H_
#define CL_CS_ADDR_MANAGER_H_
#include "common/sys/Singleton.h"
#include <map>
#include <vector>
#include <string>
using namespace std;

class CLCSAddrManager:public Singleton<AgentManager>
{
	friend class Singleton<AgentManager>;
	public:

	private:
		typedef map<unsigned int, vector<string> >  CSAddrMap;
		typedef map<unsigned int , vector<unsigned int> > CSAgentMap;
		typedef map<>
};

#endif
