#ifndef TABLEMANAGER_H_
#define TABLEMANAGER_H_
#include "DS/Singleton.h"
#include "DS/ColumnTable.h"
#include "DS/DRowTable.h"
#include <string>

class TableManager : Singleton<TableManager>
{
	public:
		TableManager();
		virtual ~TableManager();
		friend class Singleton<TableManager>;
		void createColumnTable(string tableName);
		ColumnTable* getColumnTable(string tableName);
		void createDRowTable(size_t attributeCount, string tableName, uint64_t base);
		DRowTable* getDRowTable(string tableName);
	private:
		vector<ColumnTable*> m_columnTable;
		vector<DRowTable*> m_dRowTable;
};

#endif
