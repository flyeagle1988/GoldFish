/*
 * =============================================================
 *
 *    Filename:  Timer.h
 *
 * Description:  ��ʱ��ʵ��
 *
 * =============================================================
 */

#ifndef COMMON_TIMER_H
#define COMMON_TIMER_H

#include <map>
#include <set>
#include <sys/types.h>
#include <sys/epoll.h>

#include "common/comm/Agent.h"
#include "common/comm/EpollEvent.h"
#include "common/comm/Error.h"

using namespace std;

#define    TIMER_MSG_SIZE       20
#define    TIMER_SUCCESS        SUCCESSFUL
#define    TIMER_FAIL           FAILED
#define    TIMER_CMD_ADD        1
#define    TIMER_CMD_DEL        2
#define    TIMER_CMD_CHANGE     3
#define    TIMER_CMD_NULL       0
#define    TIMER_FILEPATH       "./"
#define    TIMER_1ST_POS        1
#define    TIMER_NOT_1ST_POS    0
#define    TIMER_FOUND          1
#define    TIMER_NOT_FOUND      0
#define    TIMER_MAXPIPES       100

/**
 * @brief ��ʱ��
 * ͨ���̳д��࣬����дdoAction������ʵ�ֲ�ͬ�Ķ�ʱ����
 *
 */
class Timer
{
    friend class TimerManager;
public:
    Timer( void );
    Timer( unsigned int, long pri = 1 );

    /**
     * @brief ��ʱ�����ں�Ķ���
     *
     * @return
     */
    virtual int doAction( void )
    {
        return SUCCESSFUL;
    }

    /**
     * @brief ���µ���ʱ��
     *
     * @param int ����ʱ�䣬���ʱ��
     *
     * @return
     */
    virtual int updateExpiredTime( unsigned int );

    /**
     * @brief ��ᵽTimerManager
     *
     * @param Epoll
     *
     * @return
     */
    int attachTimer();

    /**
     * @brief ��TimerManager��ɾ��
     *
     * @return
     */
    int detachTimer( void );

    /**
     * @brief ��ȡ����ʱ�䣬����ʱ��
     *
     * @return
     */
    unsigned int getExpiredTime() const;

    /**
     * @brief ���õ���ʱ�䣬���ʱ��
     *
     * @param int ����ʱ��
     *
     * @return
     */
    int setExpiredTime( unsigned int );

    /**
     * @brief ��ȡ��Timer���ȼ�
     *
     * @return
     */
    long getPriority() const;

    /**
     * @brief �������ȼ�,
     * ���ȼ�����ͬһ�߳��·���Timer����ʱ�Ĵ���˳��
     *
     * @param long ���ȼ�
     */
    void setPriority( long );

    /**
     * @brief ������Timer���߳�ID
     *
     * @return
     */
    pthread_t getTid() const;

    /**
     * @brief Timer�Ƿ��Ѿ���detach
     *
     * @return
     */
    bool detached( void ) const;

    /**
     * @brief Timer�Ƿ����ڱ��ı�
     *
     * @return
     */
    int changing( void ) const;

    /**
     * @brief m_Changeing������1��
     * Timer�����¼�������һ��
     */
    void cancelChange();

    /**
     * @brief Timer�Ƿ�����ɣ�
     * ���ѵ���
     *
     * @return
     */
    bool isDone() const;

    /**
     * @brief ����Timer״̬Ϊ�����
     */
    void setDone();

protected:
    virtual ~Timer() {}

private:
    bool m_bDetached; //whether this Timers obj has been detached
    bool m_bDone;

    // Timer���µ���ʱ��ļ���
    // ���Timer���ڱ��ı䣨m_Changing��Ϊ0����
    // ���ʱTimer�����¼�Ӧ�ñ�����
    int m_changing;

    pthread_t m_tid;  //the thread id of the thread that created this Timer obj
    long m_pri;  //the priority
    unsigned int m_timeOutLen;  //time out length, ���ʱ��
    unsigned int m_expiredTime;  //timer will be expired at this ime������ʱ��
};

//the rule for sorting of multiset
struct LessTimer : public std::binary_function<Timer*, Timer*, bool>
{
    bool operator()( Timer* leftVal, Timer* rightVal ) const
    {
        return ( leftVal->getExpiredTime() < rightVal->getExpiredTime() );
    }
};

struct LessPri : public std::binary_function<Timer*, Timer*, bool>
{
    bool operator()( Timer* leftVal, Timer* rightVal ) const
    {
        return ( leftVal->getPriority() < rightVal->getPriority() );
    }
};


/**
 * @brief TimerManager��һ���߳���ά������Timer��
 * Timer���ں�TimerManger����д����Ӧ���߳�
 */
class TimerManager : public Agent
{
public:
    TimerManager();
    virtual ~TimerManager();

    /**
     * @brief TimerManger��ʼ����
     * ��Ҫ����SIGALRM�źŴ�������
     *
     * @return
     */
    int init();                   //initialize the TimerThread

    /**
     * @brief ��ĳ�߳�ע�ᵽTimerManager��
     * �⽫������TimerManager�̺߳�ע���߳�֮�佨��һ���ܵ���
     * ���Ҵ˹ܵ��Ķ���ע�ᵽָ��Epoll��TimerMnager����ͨ��
     * �˹ܵ����̻߳�дTimer������Ϣ
     *
     * @param pthread_t ע���߳�
     * @param Epoll ע��Epoll
     *
     * @return
     */
    int registerThread( pthread_t );       //

    /**
     * @brief ��Timer list�Ƴ�Timer
     *
     * @param Timer
     *
     * @return
     */
    int removeTimer( const Timer* );    //remove the address of a Timer obj from m_timerList

    /**
     * @brief ����Timer��Timer list,
     * ������ʱ�䣨����ʱ�䣩����
     *
     * @param Timer
     *
     * @return
     */
    int insertTimer( Timer* );    //insert the address of a Timer obj from m_timerList

    /**
     * @brief ����Ƿ���Timer���ڣ�
     * ����н���д����Ӧ�·��߳�
     */
    void checkTimeOut( void );     //check m_timerList and remove all timed out members

    /**
     * @brief TimerManger�̶߳�ȡ�ϲ��·���Timerָ��
     *
     * @return
     */
    Timer* recvTimer();          //TimerManager reads message queue 1

    /**
     * @brief ������Timerд��ע���߳�
     *
     * @param Timer
     *
     * @return
     */
    int sendTimer( Timer* );      //TimerManager writes message queue 2

    /**
     * @brief ע���̴߳�TimerManager����һ������Timer
     *
     * @return
     */
    Timer* MTRecvTimer();        //main thread read message queue 2

    /**
     * @brief ���߳��·�Timerָ��
     *
     * @param Timer ��������Timer
     * @param int Timer����ָ��
     */
    void MTSendTimer( Timer*, int cmd = TIMER_CMD_ADD ); //main thread write message queue 1

    /**
     * @brief ��ǰTimer����
     *
     * @return
     */
    int getLength() const;              //return the length of m_timerList

    /**
     * @brief ��д�ܵ����¼����������߳̽��չ���Timer��
     * ִ��doAction
     *
     * @return
     */
    int recvData();

    /**
     * @brief not used
     *
     * @return
     */
    int sendData()
    {
        return SUCCESSFUL;
    }

private:
    int        m_msgPipe1[2];            //for TimerManager receiving Timers from main thread

    EpollEvent m_epollEvent;

    // Ϊÿ��ע���߳�ά��һ����д�ܵ�
    std::map<pthread_t, int> m_msgRPipeList;
    std::map<pthread_t, int> m_msgWPipeList;

    std::multiset<Timer*, LessTimer> m_timerList;

    void blockSIGALRM( void );

    void unblockSIGALRM( void ) const;
};

//the format of data structure that be sent and received in the tow Message Queues
typedef struct
{
    long       mpri;            //priority of Timer obj
    Timer*     ptr;
    int        cmd;
} TimerMsg_t;


extern TimerManager* g_pTimerManager;

#endif  // COMMON_TIMER_H

