#include <iostream>
#include <string>

int main() {
	std::string s = "";
	std::cin >> s;
	
	char* p = new char[s.size()+1](); //记得初始化，并且+1 字符串字面值后面要有\0;
	strcpy_s(p, s.size() + 1, s.c_str());

	std::cout << p << std::endl;

	delete[] p;
	system("pause");
}