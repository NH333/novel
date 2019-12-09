#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <functional>

using std::vector;
using std::string;
using std::bind;

bool check_size(const string& s, string::size_type sz) {
	return s.size() >= sz;
}


//这题没看懂。。。。
int main() {
	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7 };
	string str("1234");
	auto result = find_if(vec.begin(), vec.end(), bind(check_size, str, std::placeholders::_1));
	if (result != vec.end())
		std::cout << *result << std::endl;
	else
		std::cout << "Not found" << std::endl;
	system("pause");
}