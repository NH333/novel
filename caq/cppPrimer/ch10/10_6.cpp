#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	std::vector<int> m_vector { 1,2,3,4,5 };
	std::fill_n(m_vector.begin(), m_vector.size(), 0);

	system("pause");
}
