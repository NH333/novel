<<<<<<< HEAD
#include <iostream>
#include <deque>
#include <string>


using std::deque;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	deque<string> m_deque;
	string tmp;
	while (cin>>tmp)
	{
		m_deque.push_back(tmp);
	}
	
	for (auto i : m_deque) {
		cout << i << endl;
	}
	system("pause");
}
=======
#include <iostream>
#include <deque>
#include <string>


using std::deque;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	deque<string> m_deque;
	string tmp;
	while (cin>>tmp)
	{
		m_deque.push_back(tmp);
	}
	
	for (auto i : m_deque) {
		cout << i << endl;
	}
	system("pause");
}
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
