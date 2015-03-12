#ifndef RA_XML_PARSE_H_
#define RA_XML_PARSE_H_
#include<iostream>
#include<libxml/xmlmemory.h>
#include<libxml/parser.h>
#include<string>
#include<list>

#include "protocol/dbInfo.h"
typedef std::map<unsigned, DB_INFO> DBInfoMap;

class RAXmlParse
{
    public:
        RAXmlParse(const std::string fileName);
        ~RAXmlParse();
		DBInfoMap getDBInfoMap()
		{
			return m_dbInfoMap;
		}
        int parse();
		//int parseDBConfig(xmlNodePtr cur, DB_INFO & dbInfo);
		int parseDBInfo(xmlNodePtr cur, DB_INFO & dbInfo);
		int parseInfo(xmlNodePtr cur, const char * module);
		void setDCPort(const unsigned int port)
		{
			m_dcPort = port;
		}
		
		unsigned int getDCPort() const
		{
			return m_dcPort;
		}

		void setDSPort(const unsigned int port)
		{
			m_dsPort = port;
		}
		unsigned int getDSPort() const
		{
			return m_dsPort;
		}

		void setDeltaCap(const unsigned int cap)
		{
			m_deltaCapacity = cap;
		}

		unsigned int getDeltaCap() const
		{
			return m_deltaCapacity;
		}
    private:
        //typedef std::list<struct DB_INFO> DBInfoList;
        
        //DBInfoList m_dbList;
        
		DBInfoMap m_dbInfoMap;
		std::string m_fileName;
		
    	unsigned int m_dcPort;
	    unsigned int m_dsPort;
		unsigned int m_deltaCapacity;
		xmlDocPtr m_doc;

};
#endif
