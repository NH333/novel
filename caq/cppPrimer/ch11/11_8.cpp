<<<<<<< HEAD
#include<vector>
#include <string>
#include <iostream>
#include <algorithm>


using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	vector<string> words;
	vector<string> tmp_words;
	string tmp;
	string word;
	
	while (cin>>word)
	{
		//words.push_back(word);
		if (std::find(words.begin(), words.end(), word) == words.end()) {
			words.push_back(word);
		}
		else
		{
			continue;
		}
	}

	system("pause");
=======
#include<vector>
#include <string>
#include <iostream>
#include <algorithm>


using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	vector<string> words;
	vector<string> tmp_words;
	string tmp;
	string word;
	
	while (cin>>word)
	{
		//words.push_back(word);
		if (std::find(words.begin(), words.end(), word) == words.end()) {
			words.push_back(word);
		}
		else
		{
			continue;
		}
	}

	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}