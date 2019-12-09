#include <iostream>
#include <list>
#include <deque>

using std::list;
using std::deque;
using std::cout;
using std::endl;

int main()
{
	list<int> m_list = { 1,3,5,7,9,2,4,6,8,10 };
	deque<int> m_deque1; 
	deque<int> m_deque2;

	for (auto iter=m_list.begin(); iter!=m_list.end(); ++iter)
	{
		if (*iter % 2 == 0) {
			m_deque1.push_back(*iter);
			cout << "deque1 insert " << *iter << endl;
		}
		else
		{
			m_deque2.push_back(*iter);
			cout << "deque2 insert " << *iter << endl;
		}
	}

	system("pause");
}