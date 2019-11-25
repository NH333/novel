#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;

int main()
{
	vector<string> m_vector = { "chen","an","qi" };
	for (auto iter = m_vector.cend(); iter !=m_vector.cbegin(); ) {
		std::cout << *(--iter) << std::endl;
	}

	system("pause");
}