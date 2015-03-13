#include<iostream>

#include "common/comm/Epoll.h"
#include "common/comm/TCPListenAgent.h"
#include "common/comm/AgentManager.h"
#include "common/comm/TaskManager.h"
#include "common/sys/ThreadPool.h"
#include "common/util/util.h"
#include "common/DevLog/DevLog.h"
#include "RA/CLDBManager.h"
#include "RA/CLDCAgent.h"
#include "RA/CLDSAgent.h"
#include "RA/raXmlParse.h"
#include <signal.h>

using util::conv::conv;
DevLog *g_pDevLog = NULL;
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
	string LogFileName = "../build/log/RA.log";
	g_pEpoll = new Epoll();
	
    g_pDevLog = new DevLog(LogFileName.c_str());
    if(g_pDevLog->init() < 0)
    {
        RED_MSG("main: DevLog init Error");
        return FAILED;
    }
	//LogLevel LogLevel(LEVEL_HIGH);
    //g_pDevLog->setLogLevel(LEVEL_HIGH);

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
	if(xmlParse.parse() < 0)
	{
		cerr << "main::xml parse error!" << endl;
		return FAILED;
	}
	else
	{
		cout << "The XML file is parsed!" << endl;
	}
	CLDBManager::getInstance()->setDBInfo(xmlParse.getDBInfoMap());
	CLDBManager::getInstance()->initDB();
	dcAddr.setPort((unsigned short)xmlParse.getDCPort());
	dsAddr.setPort((unsigned short)xmlParse.getDSPort());
	
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

	CLDBManager::destroyInstance();
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



