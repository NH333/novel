#include<algorithm>
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<iterator>

int main() {
	std::vector<std::string> m_vector = { "chen","an","qi","chen","an" ,"123","1996" };
	std::list<std::string> m_list;

	std::sort(m_vector.begin(), m_vector.end());
	for (auto i : m_vector) {
		std::cout << i << std::endl;
	}

	std::cout << "---------------" << std::endl;
	std::unique_copy(m_vector.begin(), m_vector.end(),std::front_inserter(m_list));
	for (auto i : m_list) {
		std::cout << i << std::endl;
	}

	system("pause");

}