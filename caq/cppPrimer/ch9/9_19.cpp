<<<<<<< HEAD
#include <iostream>
#include <list>
#include <string>

//不需要任何改变。。。。一个是双端队列，一个是双向链表

using std::list;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	list<string> m_list;
	string tmp;
	while (cin >> tmp)
	{
		m_list.push_back(tmp);
	}

	for (auto i : m_list) {
		cout << i << endl;
	}
	system("pause");
}
=======
#include <iostream>
#include <list>
#include <string>

//不需要任何改变。。。。一个是双端队列，一个是双向链表

using std::list;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	list<string> m_list;
	string tmp;
	while (cin >> tmp)
	{
		m_list.push_back(tmp);
	}

	for (auto i : m_list) {
		cout << i << endl;
	}
	system("pause");
}
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
