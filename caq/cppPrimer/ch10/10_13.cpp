#include <string>
#include <algorithm>
#include <vector>
#include <iostream>

using std::vector;
using std::partition;
using std::string;

bool isShorterFive(const string& s) {
	return s.size() < 5;
}

int main() {
	vector<string> m_vector = { "chenanqi","chen","an","qi","caqcaq","abc" };
	auto iter = partition(m_vector.begin(), m_vector.end(), isShorterFive);
	for (auto i = iter; i != m_vector.end(); ++i) {
		std::cout << *i << std::endl;
	}

	system("pause");
}