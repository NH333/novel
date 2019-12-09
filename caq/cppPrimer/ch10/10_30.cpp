#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
	std::istream_iterator<int> input(std::cin), eof;
	std::vector<int> m_vector;
	while (input!=eof) {
		//std::copy(input, eof, m_vector);
		m_vector.push_back(*input++);
	}
	std::sort(m_vector.begin(), m_vector.end());

	std::copy(m_vector.cbegin(), m_vector.cend(), std::ostream_iterator<int>(std::cout, " "));

	std::unique_copy(m_vector.begin(), m_vector.end(), std::ostream_iterator<int>(std::cout, "--"));
	/*
	for (auto i : m_vector) {
		std::cout << i << std::endl;
	}*/

	system("pause");
}