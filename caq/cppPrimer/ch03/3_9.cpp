#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
	smatch result;
	
	regex pattern("([A-Za-z0-9])*");
	string m_string = "cdsi4325#@ao";

	
	/*
	const char* first = "cdsi4325#@ao";
	const char* last = first + strlen(first);
	std::regex_constants::match_flag_type fl = std::regex_constants::match_default;
    regex_search(first, first+1, pattern,fl);
	regex_search(first, last,result,pattern);

	cout << result.str() << endl;
	*/
	string mystring("cdsi4325#@ao");
	int num = mystring.size();
	for (int i = 0; i < num; i++)
	{
		if (!ispunct(mystring[i]))  //spunct 判断字符是否为标点符号
			cout << mystring[i];
	}
	cout << '\n';


	system("pause");
}