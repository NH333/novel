#include <map>
#include <vector>
#include <string>
#include <iostream>

int main() {
	
	std::vector<std::string> family_name = { "chen","wu","li" };
	std::vector<std::string> kids_name = { "long","tao","zhu" };

	std::map<std::string, std::vector<std::string>> family;
	for (int i = 0; i < 3; ++i) {
		family[family_name[i]].push_back(kids_name[i]);
	}

	for (auto i : family) {
		std::cout << i.first <<" : "<< i.second[0] <<std::endl;
	}
	system("pause");

}