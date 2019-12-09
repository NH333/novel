#include <algorithm>
#include <vector>
#include <iostream>
#include <list>
#include <string>

using std::vector;
using std::list;

int main() {
	vector<int> m_vector = { 1,2,3,3,35,6,3,2,3,7,8 };
	list<std::string> m_list = { "anqi","chen","chen","c" };

	std::cout << std::count(m_vector.begin(), m_vector.end(), 3) << std::endl;

	std::cout << std::count(m_list.begin(), m_list.end(), "chen") <<std::endl;


	system("pause");
}