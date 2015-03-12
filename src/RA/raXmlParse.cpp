#include "RA/raXmlParse.h"
#include "common/comm/Error.h"

#include <iostream>
#include <string.h>
using namespace std;

RAXmlParse::RAXmlParse(const string fileName):m_fileName(fileName)
{
}

RAXmlParse::~RAXmlParse()
{
	
}

int RAXmlParse::parse()
{
	xmlNodePtr curNode;
	m_doc = xmlParseFile(m_fileName.c_str());

	if(NULL == m_doc)
	{
		cerr << "Fail to parse the XML file!" << m_fileName << endl;
		return FAILED;
	}

	curNode = xmlDocGetRootElement(m_doc);

	if(NULL == curNode)
	{
		cerr << "The XML file is empty! " << endl;
		xmlFreeDoc(m_doc);
		return FAILED;
	}

	if(xmlStrcmp(curNode->name, (const xmlChar*)"RA_CONFIG"))
	{
		cerr << "The Root name is not RA_CONFIG, check the name again!" << endl;
		xmlFreeDoc(m_doc);
		return FAILED;
	}
	
	curNode = curNode->xmlChildrenNode;
	while(curNode != NULL)
	{
		if(!xmlStrcmp(curNode->name, (const xmlChar*)"DATABASE_CONFIG"))
		{
			DB_INFO xmlDBInfo;
			xmlDBInfo.dbID = 0;
			xmlDBInfo.dbName = "";
			xmlDBInfo.dbPasswd = "";
			xmlDBInfo.dbConnectString = "";
			parseDBInfo(curNode, xmlDBInfo);
			m_dbInfoMap[xmlDBInfo.dbID] = xmlDBInfo;
			//m_dbList.push_back(xmlDBInfo);
		}
		
		else if(!xmlStrcmp(curNode->name, (const xmlChar*)"DC_PORT"))
		{
			parseInfo(curNode, "DC");
		}
		else if(!xmlStrcmp(curNode->name, (const xmlChar*)"DS_PORT"))
		{
			parseInfo(curNode, "DS");

		}
		else if(!xmlStrcmp(curNode->name, (const xmlChar*)"DELTA_CAPACITY"))
		{
			parseInfo(curNode, "DELTA_CAPACITY");
		}

		curNode = curNode->next;
	}
	xmlFreeDoc(m_doc);
    return SUCCESSFUL;
}

int RAXmlParse::parseDBInfo(xmlNodePtr cur, DB_INFO & dbInfo)
{
    xmlChar *key;

    cur = cur->xmlChildrenNode;
    while (cur != NULL) 
	{
		if (!xmlStrcmp(cur->name, (const xmlChar *)"DB_ID"))
		{
        	key = xmlNodeListGetString(m_doc, cur->xmlChildrenNode, 1);
        	dbInfo.dbID= atoi((char *)key);
	        xmlFree(key);
    	}
	    else if (!xmlStrcmp(cur->name, (const xmlChar *)"USER"))
		{
        	key = xmlNodeListGetString(m_doc, cur->xmlChildrenNode, 1);
        	dbInfo.dbName= (char *)key;
	        xmlFree(key);
    	}

	    else if (!xmlStrcmp(cur->name, (const xmlChar *)"PASSWD"))
		{
        	key = xmlNodeListGetString(m_doc, cur->xmlChildrenNode, 1);
	        dbInfo.dbPasswd = (char *)key;
    	    xmlFree(key);
    	}

    	else if (!xmlStrcmp(cur->name, (const xmlChar *)"CONNSTRING"))
		{
        	key = xmlNodeListGetString(m_doc, cur->xmlChildrenNode, 1);
			if(key != NULL)
			{
				dbInfo.dbConnectString = (char *)key;
	    	    xmlFree(key);
			}
			else
				dbInfo.dbConnectString = "";
    	}
    	cur = cur->next;
    }
    return SUCCESSFUL;

}

int RAXmlParse::parseInfo(xmlNodePtr cur,const char * module)
{
	xmlChar *key;
	int ret = SUCCESSFUL;
	key = xmlNodeListGetString(m_doc, cur->xmlChildrenNode, 1);
	if(!strcmp(module, "DC"))
	{
		setDCPort(atoi((char*)key));
		xmlFree(key);
	}
	else if(!strcmp(module, "DS"))
	{
		setDSPort(atoi((char*)key));
		xmlFree(key);
	}
	else if(!strcmp(module, "DELTA_CAPACITY"))
	{
		setDeltaCap(atoi((char*)key));
		xmlFree(key);
	}
	else
	{
		ret = FAILED;
		cout << "RAXmlParse::parseInfo error! " << endl;
	}
	return ret;
}

