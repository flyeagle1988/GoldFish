#ifndef SINGLETON_H_
#define SINGLETON_H_
#include <cstddef>

template <class T>
class Singleton{
	public:
		static T* getInstance()
		{
			if(m_pInstance == NULL)
			{
				m_pInstance = new T();
				return m_pInstance;
			}
			return m_pInstance;
		}
	protected:
		Singleton(){}
		virtual ~Singleton(){}
		static T* m_pInstance;
};

template <class T>
T* Singleton<T>::m_pInstance = NULL;

#endif
