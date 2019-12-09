<<<<<<< HEAD
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

void elimDups(std::vector<std::string>& m_vector) {
	std::sort(m_vector.begin(), m_vector.end());
	auto end = std::unique(m_vector.begin(), m_vector.end());
	m_vector.erase(end, m_vector.end());
}

int main() {
	std::vector<std::string> m_vec = { "an","an","qi","qi","chen" };
	elimDups(m_vec);
	for (auto i : m_vec) {
		std::cout << i << std::endl;
	}

	system("pause");
=======
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

void elimDups(std::vector<std::string>& m_vector) {
	std::sort(m_vector.begin(), m_vector.end());
	auto end = std::unique(m_vector.begin(), m_vector.end());
	m_vector.erase(end, m_vector.end());
}

int main() {
	std::vector<std::string> m_vec = { "an","an","qi","qi","chen" };
	elimDups(m_vec);
	for (auto i : m_vec) {
		std::cout << i << std::endl;
	}

	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}