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
}