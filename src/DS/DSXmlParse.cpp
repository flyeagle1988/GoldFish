#include "DS/DSXmlParse.h"
#include "common/comm/Error.h"

#include <iostream>
#include <string.h>
using namespace std;
DSXmlParse::DSXmlParse(const string fileName):m_fileName(fileName)
{
}

DSXmlParse::~DSXmlParse()
{
}

int DSXmlParse::parse()
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

	if(xmlStrcmp(curNode->name, (const xmlChar*)"CONFIG"))
	{
		cerr << "The Root name is not CONFIG, check the name again!" << endl;
		xmlFreeDoc(m_doc);
		return FAILED;
	}
	
	curNode = curNode->xmlChildrenNode;
	while(curNode != NULL)
	{
		if(!xmlStrcmp(curNode->name, (const xmlChar*)"RAS_CONFIG"))
		{
			parseDSConfig(curNode);
		}
		/*
		else
		{
			cerr << "DSXmlParse::parse no this item: " << (char *)curNode->name << endl;
			return FAILED;
		}
		*/
		curNode = curNode->next;
	}
	xmlFreeDoc(m_doc);
    return SUCCESSFUL;
}

int DSXmlParse::parseDSConfig(xmlNodePtr cur)
{
	xmlChar *key;

    cur = cur->xmlChildrenNode;
    while (cur != NULL) 
    {
		if(!xmlStrcmp(cur->name, (const xmlChar*)"FWM_IP"))
		{
			key = xmlNodeListGetString(m_doc, cur->xmlChildrenNode, 1);
			string dcIP = (char *)key;
			setDCIP(dcIP);
			xmlFree(key);
		}
		else if(!xmlStrcmp(cur->name, (const xmlChar*)"FWM_PORT"))
		{
			key = xmlNodeListGetString(m_doc, cur->xmlChildrenNode, 1);
			setDCPort((unsigned short)atoi((char*)key));
		}
		cur = cur->next;
	}
	return SUCCESSFUL;
}