#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	string m_string1, m_string2;
	int len_string1, len_string2;

	cin >> m_string1 >> m_string2;

	/*
	if (m_string1 != m_string2) 
	{
		cout << (m_string1 > m_string2 ? m_string1 : m_string2) << endl;
	}
	*/

	len_string1 = m_string1.size(); //string是一个类，调用size()方法，注意strlen只适用于char*数组
	len_string2 = m_string2.size();

	if (len_string1 != len_string2)
	{
		cout << (len_string1 > len_string2 ? m_string1 : m_string2) << endl;
	}
	system("pause");
}