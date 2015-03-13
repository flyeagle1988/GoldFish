/*
 * =====================================================================================
 *
 *     FileName:  FunctionTrace.cpp
 *  Description:  implementation of FunctionTrace class
 *      Version:  1.0
 *      Created:  Sun Jul  4 16:49:54 2010

 *     Revision:  none
 *     Compiler:  g++
 *
 *       Author:  ptz, ptz@uestc.edu.cn
 *      Company:  NDSL UESTC
 * =====================================================================================
 */

#include "common/DevLog/FunctionTrace.h"
#include "common/DevLog/DevLog.h"
#include "common/comm/Error.h"

using std::string;

FunctionTrace::FunctionTrace(
    DevLog* devLog,
    const string& func,
    const string& fileName
):
    m_pDevLog( devLog ),
    m_funcName( func ),
    m_fileName( fileName )
{
    if ( m_pDevLog != NULL )
    {
        string logStr(
            "Function \"" + m_funcName + "\" entered in " + m_fileName );
        m_pDevLog->writeLog( LFUNC, OUT_FILE, logStr );
    }

}

FunctionTrace::FunctionTrace(
    DevLog* devLog,
    const string& func,
    const string& fileName,
    const std::string& msg
):
    m_pDevLog( devLog ),
    m_funcName( func ),
    m_fileName( fileName ),
    m_msg( msg )
{
    if ( m_pDevLog != NULL )
    {
        string logStr(
            "Function \""
            + m_funcName
            + "\" entered in "
            + m_fileName + ": "
            + m_msg );
        m_pDevLog->writeLog( LFUNC, OUT_FILE, logStr );
    }

}

FunctionTrace::~FunctionTrace()
{
    try
    {
        if ( m_pDevLog != NULL )
        {
            string logStr(
                "Function \""
                + m_funcName
                + "\" exited in "
                + m_fileName
                + ": "
                + m_msg );
            m_pDevLog->writeLog( LFUNC, OUT_FILE, logStr );
        }
        m_pDevLog = NULL;
    }
    catch ( ... )
    {
        RED_MSG( "~FunctionTrace exception" );
    }
}

