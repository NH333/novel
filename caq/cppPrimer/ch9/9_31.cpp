#include <iostream>
#include <list>
#include <forward_list>

using std::list;
using std::forward_list;
using std::cout;
using std::cin;
using std::advance;
using std::endl;

int main() {
	/*list*/
	
	list<int> m_list = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto i = m_list.begin();
	for (i; i != m_list.end();) {
		if (*i % 2) {
			i = m_list.insert(i, *i);
			advance(i, 2);
		}
		else 
		{
			i=m_list.erase(i);
		}
	}

	for (auto i : m_list) {
		cout << i << endl;
	}
	
	forward_list<int> m_forward_list = { 0, 2, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto curr = m_forward_list.begin();
	auto pre = m_forward_list.before_begin();
	while (curr != m_forward_list.end())
	{
		if (*curr%2)
		{
			curr = m_forward_list.insert_after(curr, *curr);
			pre = curr;
			advance(curr, 1);
		}
		else
		{
			curr = m_forward_list.erase_after(pre);
		}
	}
	for (auto m:m_forward_list)
	{
		cout << m << endl;
	}

	system("pause");
}