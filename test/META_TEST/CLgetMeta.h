#include <string>
using std::string;

class CLgetMeta
{
	public:
		CLgetMeta();
		~CLgetMeta();

		int process();
		void setData(const string data)
		{
			m_metaData = data;
		}
		string getData() const
		{
			return m_metaData;
		}
	private:
		string m_metaData;
		
};
