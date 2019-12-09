<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>

int main() {
	std::fstream ifs("C:/Project/CPP/CppPrimer/ch10/10_29/test.txt");
	std::istream_iterator<std::string> input(ifs), eof;

	std::vector<std::string> m_vector(input,eof);

	for (auto i : m_vector) {
		std::cout << i << std::endl;
	}

	system("pause");
=======
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>

int main() {
	std::fstream ifs("C:/Project/CPP/CppPrimer/ch10/10_29/test.txt");
	std::istream_iterator<std::string> input(ifs), eof;

	std::vector<std::string> m_vector(input,eof);

	for (auto i : m_vector) {
		std::cout << i << std::endl;
	}

	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}