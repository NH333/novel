<<<<<<< HEAD
#include <iostream>
#include <list>
#include <vector>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> m_vector;
	list<int> m_list;

	int len = sizeof(ia) / sizeof(int);
	for (int i = 0; i < len; ++i) {
		m_vector.push_back(ia[i]);
		m_list.push_back(ia[i]);
	}
	/*
	赋值方法
	vector<int> vec(ia, end(ia));
    list<int> lst(vec.begin(), vec.end());
	*/

	vector<int>::iterator v;
	list<int>::iterator l;
	for (v = m_vector.begin(); v != m_vector.end(); ) {
		if (*v % 2 == 0) {
			v = m_vector.erase(v);
		}
		else
		{
			cout << *v << endl;
			++v;
		}
	}
	for (l = m_list.begin(); l!= m_list.end(); ) {
		if (*l % 2 ) {
			l = m_list.erase(l);
		}
		else
		{
			cout << *l << endl;
			++l;
		}
	}


	system("pause");
=======
#include <iostream>
#include <list>
#include <vector>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> m_vector;
	list<int> m_list;

	int len = sizeof(ia) / sizeof(int);
	for (int i = 0; i < len; ++i) {
		m_vector.push_back(ia[i]);
		m_list.push_back(ia[i]);
	}
	/*
	赋值方法
	vector<int> vec(ia, end(ia));
    list<int> lst(vec.begin(), vec.end());
	*/

	vector<int>::iterator v;
	list<int>::iterator l;
	for (v = m_vector.begin(); v != m_vector.end(); ) {
		if (*v % 2 == 0) {
			v = m_vector.erase(v);
		}
		else
		{
			cout << *v << endl;
			++v;
		}
	}
	for (l = m_list.begin(); l!= m_list.end(); ) {
		if (*l % 2 ) {
			l = m_list.erase(l);
		}
		else
		{
			cout << *l << endl;
			++l;
		}
	}


	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}