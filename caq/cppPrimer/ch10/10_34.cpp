<<<<<<< HEAD
#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;

int main()
{
	vector<string> m_vector = { "chen","an","qi" };
	for (auto iter = m_vector.crbegin(); iter < m_vector.crend(); ++iter) {
		std::cout << *iter << std::endl;
	}

	system("pause");
=======
#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;

int main()
{
	vector<string> m_vector = { "chen","an","qi" };
	for (auto iter = m_vector.crbegin(); iter < m_vector.crend(); ++iter) {
		std::cout << *iter << std::endl;
	}

	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}