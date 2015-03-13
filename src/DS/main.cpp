#include "common/comm/Epoll.h"
#include "common/comm/TCPListenAgent.h"
#include "common/Timer/Timer.h"
#include "common/comm/AgentManager.h"
#include "common/comm/TaskManager.h"
#include "common/log/log.h"
#include "common/util/util.h"
#include "common/DevLog/DevLog.h"
#include <stdlib.h>
#include <signal.h>
#include <cstdio>
#include "DS/CLRAConnectAgent.h"
#include "DS/CLDCConnectAgent.h"
#include "DS/DSXmlParse.h"

using util::conv::conv;

Epoll * g_pEpoll  = NULL;
//CLRAConnectAgent * g_RAConnectAgent = NULL;
TimerManager * g_pTimerManager = NULL;

CLDCConnectAgent * g_pDCConnectAgent = NULL;
const int EPOLLSIZE = 1024;
const char * filePath = "../build/Config/ds_config.xml";
DevLog *g_pDevLog = NULL;


void doExit(int signo)
{
    if (signo == SIGINT)       
    {
        INFO_LOG("DS sigint catch!");
        
        AgentManager::getInstance()->clearAllAgent();
        TaskManager::getInstance()->clearAllTask();
        
        if ( g_pEpoll != NULL)
        {
            g_pEpoll->finish();
        }     
    }
}

int main(int argc, char *argv[])
{
	//Log init
	string LogFileName = "../build/log/DS.log";
    g_pDevLog = new DevLog(LogFileName.c_str());
    if(g_pDevLog->init() < 0)
    {
        RED_MSG("main: DevLog init Error");
        return FAILED;
    }
	//Epoll init
    g_pEpoll = new Epoll();
    if ( g_pEpoll->initialize(EPOLLSIZE) == FAILED )
    {
        ERROR_LOG("\nDS::main: init epoll error!\n");
        delete g_pEpoll;
        g_pEpoll = NULL;
        return FAILED;
    }
	//Parse XML file
	DSXmlParse dsXmlParse(filePath);
	if(dsXmlParse.parse() == FAILED)
	{
		cerr << "main:parse xml error!" << endl;
		return FAILED;
	}
	
	SocketAddress dcAddr;
	string dcIP = dsXmlParse.getDCIP();	
	unsigned dcPort = dsXmlParse.getDCPort();
	dcAddr.setAddress(dcIP.c_str(), dcPort);
	dcIP = "DC Address: " + dcIP + ":" + intToStr(dcPort);
	DEV_LOG(LEVENT,OUT_BOTH,dcIP);
	//connect DC
	g_pDCConnectAgent = (AgentManager::getInstance())->createAgent<CLDCConnectAgent>(dcAddr);
	if(g_pDCConnectAgent->init() < 0)
	{
		DEV_LOG_ERROR("main: connect to DC error!");
		return FAILED;
	}

    g_pTimerManager = new TimerManager();    
	if(g_pTimerManager->init() < 0)
	{
		DEV_LOG_ERROR("main: init TimerManager error!");
		return FAILED;
	}
	g_pTimerManager->registerThread(::pthread_self());

	
    //raAddr.setAddress(argv[1],conv<unsigned short,char*>(argv[2]));
    //g_RAConnectAgent = (AgentManager::getInstance())->createAgent<CLRAConnectAgent>(raAddr);
    //g_RAConnectAgent->init();


    if ( signal(SIGINT, doExit) == SIG_ERR )
    {
        ERROR_LOG("\nDS::main: set SIGINT(catch \"ctrl+c\") signal error!\n");
        return FAILED;
    }
    
    g_pEpoll->run();

    AgentManager::destroyInstance();
    TaskManager::destroyInstance();
    
    if ( g_pEpoll != NULL )
    {
        delete g_pEpoll;
        g_pEpoll = NULL;
    }

    LoggerFactory::getInstance()->clear();
    LoggerFactory::destroyInstance();
    
    return 0;
}

