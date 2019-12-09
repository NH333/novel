<<<<<<< HEAD
#include <numeric>
#include <iostream>
#include <vector>

int main() {
	std::vector<int> m_vector = { 1,2,3,4,5 };
	std::cout << std::accumulate(m_vector.cbegin(), m_vector.cend(), 0) << std::endl;

	system("pause");


=======
#include <numeric>
#include <iostream>
#include <vector>

int main() {
	std::vector<int> m_vector = { 1,2,3,4,5 };
	std::cout << std::accumulate(m_vector.cbegin(), m_vector.cend(), 0) << std::endl;

	system("pause");


>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}