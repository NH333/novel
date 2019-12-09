<<<<<<< HEAD
#include <iostream>
#include <list>
#include <string>

using std::list;
using std::string;

int main() {
	list<string> m_list = {"anqi","chen","anqi","an","qi","chen","anqi","an"};
	m_list.sort();
	m_list.unique();
	for (auto i : m_list) {
		std::cout << i << std::endl;
	}

	system("pause");
=======
#include <iostream>
#include <list>
#include <string>

using std::list;
using std::string;

int main() {
	list<string> m_list = {"anqi","chen","anqi","an","qi","chen","anqi","an"};
	m_list.sort();
	m_list.unique();
	for (auto i : m_list) {
		std::cout << i << std::endl;
	}

	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}