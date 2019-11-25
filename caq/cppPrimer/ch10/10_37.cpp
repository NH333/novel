#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <algorithm>

int main() {
	std::vector<int> m_vetor = {1,2,3,4,5,6,7,8,9,10};
	std::list<int> m_list(5);
	std::reverse_copy(m_vetor.begin()+3, m_vetor.begin()+8,m_list.begin());
	for (auto i : m_list) {
		std::cout << i << std::endl;
	}

	system("pause");
}