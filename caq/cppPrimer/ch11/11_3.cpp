#include <map>
#include <string>
#include <iostream>

using std::map;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {

	
	map<string, int> word_count;
	string word;
	string tmp;
	while (cin >> word) {
		tmp = word;
		for (auto iter = tmp.begin(); iter != tmp.end(); ++iter) {
			*iter = tolower(*iter);
		}
		++word_count[tmp];
	}
	for (auto w : word_count) {
		cout << w.first<<":"<<w.second << endl;
	}

	system("pause");
}