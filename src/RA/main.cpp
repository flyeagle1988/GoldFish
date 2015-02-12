#include<iostream>

#include "common/comm/Epoll.h"
#include "common/comm/TCPListenAgent.h"
#include "common/comm/AgentManager.h"
#include "common/comm/TaskManager.h"
#include "common/sys/ThreadPool.h"
#include "common/util/util.h"

#include "RA/CLDBManager.h"
#include "RA/CLDCAgent.h"
#include "RA/CLDSAgent.h"
#include "RA/raXmlParse.h"
#include <signal.h>

using util::conv::conv;


Epoll  *g_pEpoll  = NULL;
TCPListenAgent<CLDCAgent> *g_pListenDCAgent = NULL;
TCPListenAgent<CLDSAgent> *g_pListenDSAgent = NULL;
ThreadPool *g_pThreadPool = NULL;
ThreadPoolDispatcher *g_pDispatcher = NULL;
SocketAddress dcAddr;
SocketAddress dsAddr;


const int EPOLLSIZE = 1024;
void doExit(int signo)
{
    if (signo == SIGINT)       
    {
        INFO_LOG("server sigint catch!");
        
        if ( g_pEpoll != NULL)
        {
            g_pEpoll->finish();
        }
    }
}

int main(int argc,char * argv [])
{
	if(argc != 2)
	{
		cout << "usage:" << argv[0] << "xml file " << endl;
		return FAILED;
	}

	g_pEpoll = new Epoll();

	if(g_pEpoll->initialize(EPOLLSIZE) == FAILED)
	{
		ERROR_LOG("\n Main Epool initialize error!\n");
		delete g_pEpoll;
		g_pEpoll = NULL;
		return FAILED;
	}
	
    g_pThreadPool = new ThreadPool();
    g_pThreadPool->start();

	
    g_pDispatcher = (AgentManager::getInstance())->createAgent<ThreadPoolDispatcher>();
    g_pDispatcher->init();

	RAXmlParse xmlParse(argv[1]);
	xmlParse.parse();

	CLDBManager::getInstance()->setDBInfo(xmlParse.getDBInfoMap());
	dcAddr.setPort(xmlParse.getDCPort());
	dsAddr.setPort(xmlParse.getDSPort());
	
	g_pListenDCAgent = (AgentManager::getInstance())->createAgent< TCPListenAgent<CLDCAgent> >(dcAddr);
	g_pListenDCAgent->init();
	g_pListenDSAgent = (AgentManager::getInstance())->createAgent< TCPListenAgent<CLDSAgent> >(dsAddr);
	g_pListenDSAgent->init();

	if (signal(SIGINT, doExit) == SIG_ERR)
    {
        ERROR_LOG("\nMain: set SIGINT(catch \"ctrl+c\") signal error!\n");
        return FAILED;
    }
	
    g_pEpoll->run();

    AgentManager::destroyInstance();
    TaskManager::destroyInstance();    

    g_pThreadPool->stop();
    if ( g_pThreadPool != NULL)
    {
        delete g_pThreadPool;
        g_pThreadPool = NULL;
    }
    
    if ( g_pEpoll != NULL)
    {
        delete g_pEpoll;
        g_pEpoll = NULL;
    }

    LoggerFactory::getInstance()->clear();
    LoggerFactory::destroyInstance();
    
    return 0;
	
}



