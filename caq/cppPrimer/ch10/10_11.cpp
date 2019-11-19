#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

bool isShorter(const std::string& s1, const std::string& s2) {
	return s1.size() < s2.size();
}

void elimDups(std::vector<std::string>& m_vector) {
	std::sort(m_vector.begin(), m_vector.end());
	auto end = std::unique(m_vector.begin(), m_vector.end());
	m_vector.erase(end, m_vector.end());
}

int main() {
	std::vector<std::string> m_vec = { "ca","an","an","qi","qi","chen","aa","an"};
	elimDups(m_vec);
	std::sort(m_vec.begin(),m_vec.end(),isShorter);
	for (auto i : m_vec) {
		std::cout << i << std::endl;
	}
	std::stable_sort(m_vec.begin(), m_vec.end(), isShorter); //这个维持字典序列貌似没啥区别啊。
	for (auto i : m_vec) {
		std::cout << i << std::endl;
	}


	system("pause");
}