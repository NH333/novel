<<<<<<< HEAD
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using std::string;

int main()
{
	std::multimap<string, string> datas{
		{"anqi","KFC"},{"anqi","BuggerKing"},{"tao","jujube"}, {"anqi","Subway"},{"tao","Seafood"}
	};
	string author = "anqi";
	string food = "Subway";

	for (auto iter = datas.find(author); iter != datas.end() && iter->first == author;) {
		if (iter->second == food) {
			iter = datas.erase(iter);
		}
		else
			++iter;
 	}

	for (auto i : datas) {
		std::cout << i.first << ":" << i.second << std::endl;
	}
	system("pause");
=======
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using std::string;

int main()
{
	std::multimap<string, string> datas{
		{"anqi","KFC"},{"anqi","BuggerKing"},{"tao","jujube"}, {"anqi","Subway"},{"tao","Seafood"}
	};
	string author = "anqi";
	string food = "Subway";

	for (auto iter = datas.find(author); iter != datas.end() && iter->first == author;) {
		if (iter->second == food) {
			iter = datas.erase(iter);
		}
		else
			++iter;
 	}

	for (auto i : datas) {
		std::cout << i.first << ":" << i.second << std::endl;
	}
	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}