<<<<<<< HEAD
#include <iostream>
#include <map>
#include <string>

using std::string;

int main() {
	std::map<string, size_t> word_count;
	string word;
	while (std::cin >> word) {
		auto iter = word_count.insert({word,1});
		if (!iter.second) {
			++iter.first->second;
		}
	}
	for (auto i:word_count)
	{
		std::cout << i.first << ":" << i.second << std::endl;
	}

	system("pause");
}

=======
#include <iostream>
#include <map>
#include <string>

using std::string;

int main() {
	std::map<string, size_t> word_count;
	string word;
	while (std::cin >> word) {
		auto iter = word_count.insert({word,1});
		if (!iter.second) {
			++iter.first->second;
		}
	}
	for (auto i:word_count)
	{
		std::cout << i.first << ":" << i.second << std::endl;
	}

	system("pause");
}

>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1