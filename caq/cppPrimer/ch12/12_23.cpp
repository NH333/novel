#include <iostream>
#include <cstring>
#include <string>

int main() {
	char* p1 = new char[10]{"anqi"};
	char* p2 = new char[10]{"chen"};

	int len = strlen(p1) + strlen(p2) + 1;
	char* result = new char[len](); //注意初始化，没有初始化为空，后面的strcat就无法进行拼接
	char* result2 = new char[len]();
	strcat_s(result, len, p1);
	strcat_s(result, len, p2);
	//strcat_s(result, len, p2);
	std::cout << result << std::endl;
	

	std::string s1 = "anqi";
	std::string s2 = "chen";
	strcpy_s(result, len, (s1 + s2).c_str());
	std::cout << result << std::endl;
	delete[] result;
	system("pause");
}