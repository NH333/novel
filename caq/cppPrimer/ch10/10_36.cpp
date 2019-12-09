<<<<<<< HEAD
#include <vector>
#include <iostream>
#include <list>
#include <iterator>
#include <string>

int main() {
	std::list<int> m_list = {0,1,3,2,1,0,1,3,0,3};
	auto last_zero = std::find(m_list.crbegin(), m_list.crend(), 0);
	std::cout << *last_zero << " " << *last_zero.base() << std::endl;
	 system("pause");
=======
#include <vector>
#include <iostream>
#include <list>
#include <iterator>
#include <string>

int main() {
	std::list<int> m_list = {0,1,3,2,1,0,1,3,0,3};
	auto last_zero = std::find(m_list.crbegin(), m_list.crend(), 0);
	std::cout << *last_zero << " " << *last_zero.base() << std::endl;
	 system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}