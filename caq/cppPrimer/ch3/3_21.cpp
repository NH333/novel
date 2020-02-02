#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string m_string = "some string";
	auto it = m_string.begin();
	auto ti = m_string.end();
	cout << *it <<":"<<&it<< endl;
	cout << *(ti-1) << ":" << &(ti-1) << endl; //这个迭代器返回的类型到底是啥？

	system("pause");
}