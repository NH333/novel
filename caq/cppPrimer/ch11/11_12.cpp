#include <iostream>
#include <string>
#include <vector>
#include <utility>

using std::string;
using std::vector;
using std::pair;

int main() {
	vector<pair<string, int>> m_pair;
	vector<string> m_str = { "chen","an","qi" };
	vector<int> m_int = { 1,2,3 };

	for (int i = 0; i < 3; ++i) {
		
		m_pair.push_back(pair<string,int>(m_str[i], m_int[i]));
		//m_pair.push_back(std::make_pair( m_str[i],m_int[i] ));
		//m_pair.push_back({ m_str[i],m_int[i] });
		
	}

	for (auto i : m_pair) {
		std::cout << i.first << ":" << i.second << std::endl;
	}
	system("pause");

}