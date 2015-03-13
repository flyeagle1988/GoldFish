#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>
#include <syslog.h>

#include "common/comm/Error.h"
#include "common/DevLog/DevLog.h"
using namespace std;

DevLog::DevLog():
    m_fd( -1 ),
    m_errorCount( 0 ),
    m_logPath( LOGPATH ),
    m_logLevel( LEVEL_HIGH ),
    m_lineSeparator( SEPARATOR_LINE )
{
}

DevLog::DevLog( const char* logName ):
    m_fd( -1 ),
    m_errorCount( 0 ),
    m_logPath( LOGPATH ),
    m_fileNamePrefix( logName ),
    m_logLevel( LEVEL_HIGH ),
    m_lineSeparator( SEPARATOR_LINE )
{
}

DevLog::~DevLog()
{
    try
    {
        if ( m_fd > 0 )
        {
            stringstream bufStream;
            bufStream << "total error number: " << m_errorCount << endl;
            writeFile( bufStream.str() );
            insertSeparatorLine();
            GREEN_MSG( bufStream.str() );

            close( m_fd );
            closelog();
        }
    }
    catch ( ... )
    {
        RED_MSG( "~DevLog exception" );
    }
}

int DevLog::init()
{
    if ( getCurrentDate( m_currentDate ) != SUCCESSFUL )
    {
        RED_MSG( "getCurrentDate error" );
        return FAILED;
    }
    if ( m_fileNamePrefix.size() == 0 )
    {
        m_fileNamePrefix = "log";
    }

    string path = m_logPath;
    if ( checkDir( path.c_str() ) != SUCCESSFUL )
    {
        RED_MSG( "checkDir failed" );
        return FAILED;
    }

    string logfile = m_fileNamePrefix + "_" + m_currentDate;

    int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
    if ( ( m_fd = open(
                      logfile.c_str(),
                      O_WRONLY | O_CREAT | O_APPEND,
                      mode ) ) < 0 )
    {
        string errPrint = "can't create log file: " + logfile;
        RED_MSG( errPrint );
        return FAILED;
    }

    string toPrint =
        "\n\n=======================DevLog starts==========================\n";
    writeFile( toPrint );
    //writeLog(LEVENT, OUT_BOTH, toPrint);

    openlog( NULL, LOG_PID, LOG_USER );
    return SUCCESSFUL;
}

int DevLog::checkDir( const char* dir )
{
    GREEN_MSG( "check paradir" );
    struct stat buf;
    if ( stat( dir, &buf ) == 0 )
    {
        GREEN_MSG( "found it" );
        return SUCCESSFUL;
    }
    else
    {
        YELLOW_MSG( "not found! create it" );
        if ( 0 != mkdir( dir, O_RDWR ) )
        {
            string errLog( "can't mkdir " );
            errLog += dir;
            RED_MSG( errLog );
            return FAILED;
        }
    }
    return SUCCESSFUL;
}

void DevLog::writeLog( LOG_TYPE type, const string& message )
{
    string buf;
    if ( getCurrentTime( buf ) != SUCCESSFUL )
    {
        RED_MSG( "getCurrentTime error" );
    }
    pid_t pid = getpid();
    pthread_t tid = pthread_self();
    stringstream ss;
    ss << buf << " [" << hex << pid << ":" << tid << "] ";
    ss << setw( LEVEL_STR_MAX_LEN )
       << setiosflags( ios::left )
       << LEVEL_STR[type]
       << "\t" << message << endl;

    buf = ss.str();
    if ( LERROR == type )
    {
        ++ m_errorCount;
    }
    switch ( type )
    {
    case LINFO:
    case LDEBUG:
    case LFUNC:
        if ( LEVEL_HIGH >= m_logLevel )
        {
            writeFile( buf );
        }
        break;
    case LEVENT:
        if ( m_logLevel >= LEVEL_MIDDLE )
        {
            writeFile( buf );
        }
        break;
    case LWARNING:
    case LERROR:
    case LFATAL:
        if ( m_logLevel >= LEVEL_LOW )
        {
            writeFile( buf );
        }
        break;
    }
    //return SUCCESSFUL;
}
void DevLog::writeFile( const string& buf )
{
    //m_LogStream.write(buf.c_str(), buf.size());
    //m_LogStream.flush();
    if ( checkNewFile() != SUCCESSFUL )
    {
        RED_MSG( "checkNewFile failed" );
    }
    if ( write( m_fd, buf.c_str(), buf.size() ) < 0 )
    {
        string errStr( "write log file failed" );
        RED_MSG( errStr );
        //return FAILED;
    }
    //return SUCCESSFUL;
}
int DevLog::checkNewFile()
{
    string curDay;
    getCurrentDate( curDay );
    if ( curDay != m_currentDate )
    {
        string newFile = m_fileNamePrefix + "_" + curDay;
        int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
        close( m_fd );
        if ( ( m_fd = open(
                          newFile.c_str(),
                          O_WRONLY | O_CREAT | O_APPEND,
                          mode ) ) < 0 )
        {
            string errPrint = "can't create log file: " + newFile;
            RED_MSG( errPrint );
            return FAILED;
        }
    }
    return SUCCESSFUL;
}
/*
void DevLog::writeLog(
    LOG_TYPE level,
    LOG_OUT_TYPE type,
    const string& message )
{
    switch ( type )
    {
    case OUT_SCR:
        syslog( LOG_INFO, message.c_str() );
        break;
    case OUT_FILE:
        syslog( LOG_INFO, message.c_str() );
        break;
    case OUT_BOTH:
        syslog( LOG_INFO, message.c_str() );
        break;
    default:
        RED_MSG( "unkown LOG_TYPE: " + intToStr( level ) );
    }
    //return SUCCESSFUL;
}
*/
void DevLog::writeLog(LOG_TYPE level, LOG_OUT_TYPE type, const string &message)
{
	switch (type)
	{
		case OUT_SCR:
			printLog(level, message);
			break;
		case OUT_FILE:
			writeLog(level, message);
			break;
		case OUT_BOTH:
			printLog(level, message);
			writeLog(level, message);
			break;
		default:
			RED_MSG("unkown LOG_TYPE: " + intToStr(level));
	}
	//return SUCCESSFUL;
}

void DevLog::printLog( LOG_TYPE level, const string& message )
{
	string curTime;
	getCurrentTime(curTime);

	string msg = curTime + " " + message;
    switch ( level )
    {
    case LINFO:
        BLUE_MSG( msg );
        break;
    case LDEBUG:
#ifdef DEBUG
        cout << msg << endl;
#endif
        break;
    case LFUNC:
        cout << msg << endl;
        break;
    case LEVENT:
        GREEN_MSG( msg );
        break;
    case LWARNING:
        YELLOW_MSG( msg );
        break;
    case LERROR:
    case LFATAL:
        RED_MSG( msg );
        break;
    default:
        RED_MSG( "unknown LOG_TYPE: " + intToStr( level ) );
    }
    //return SUCCESSFUL;
}

int DevLog::getCurrentTime( string& curtime )
{
    time_t t = time( NULL );
    //struct tm now = *localtime( &t );
	struct tm now = {0};
	localtime_r(&t, &now);

	const int timeLenth = 80;
    char timebuf[timeLenth];
    if ( strftime( timebuf, timeLenth, "%Y-%m-%d %H:%M:%S", &now ) != 0 )
    {
        curtime = string( timebuf );
    }
    else
    {
        string errInfo( "no enough space to save time string" );
        RED_MSG( errInfo );
        return FAILED;
    }
    return SUCCESSFUL;
}

/*根据当前时间，得到一个文件件名字，在该文件夹下面存放本次运行的所有日志文件*/
int DevLog::getLogFileName( string& fname )
{
    time_t t = time( NULL );
    //struct tm now = *localtime( &t );
	struct tm now = {0};
	localtime_r(&t, &now);

	const int timeLenth = 80;
    char timebuf[timeLenth];
    if ( strftime( timebuf, timeLenth, "%H%M%S", &now ) != 0 )
    {
        fname = "log_" + string( timebuf );
    }
    else
    {
        string errInfo( "no enough space to save time string" );
        RED_MSG( errInfo );
        return FAILED;
    }

    return SUCCESSFUL;
}

int DevLog::getCurrentDate( string& date )
{
    time_t t = time( NULL );
    //struct tm now = *localtime( &t );
	struct tm now = {0};
	localtime_r(&t, &now);

    const int timeLenth = 80;
    char timebuf[timeLenth];
    if ( strftime( timebuf, timeLenth, "%Y%m%d", &now ) != 0 )
    {
        date = string( timebuf );
    }
    else
    {
        string errInfo( "no enough space to save time string" );
        RED_MSG( errInfo );
        return FAILED;
    }

    return SUCCESSFUL;
}

int DevLog::setLogLevel( LOG_LEVEL level )
{
    m_logLevel = level;
    return SUCCESSFUL;
}

int DevLog::setLogPath( const std::string& path )
{
    m_logPath = path;
    return SUCCESSFUL;
}

int DevLog::setLineSeparator( const string& line )
{
    m_lineSeparator = line;
    return SUCCESSFUL;
}

void DevLog::insertSeparatorLine( int n )
{
    string buf;
    for ( int i = 0; i < n; ++i )
    {
        buf += m_lineSeparator;
    }
    writeFile( buf );
    //return SUCCESSFUL;
}

//int DevLog::getProcessId()
//{
//
//
//}
//
//int DevLog::getThreadId()
//{
//
//}
