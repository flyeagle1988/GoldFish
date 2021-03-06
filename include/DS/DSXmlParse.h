#ifndef DS_XML_PARSE_H_
#define DS_XML_PARSE_H_
#include<iostream>
#include<libxml/xmlmemory.h>
#include<libxml/parser.h>
#include<string>
#include<map>
using std::string;
using std::map;

class DSXmlParse
{
	typedef map<string, unsigned short> DCAddrMap;

	public:
		DSXmlParse(const string fileName);
		~DSXmlParse();
		int parse();
		int parseDSConfig(xmlNodePtr cur);
		void setDCIP(const string ip)
		{
			m_dcIP = ip;
		}
		void setDCPort(const unsigned short port)
		{
			m_dcPort = port;
		}

		string getDCIP() const
		{
			return m_dcIP;
		}
		unsigned short getDCPort() const
		{
			return m_dcPort;
		}
	private:
		
		string m_fileName;
		xmlDocPtr m_doc;
		string m_dcIP;
		unsigned short m_dcPort;
};
#endif
