<<<<<<< HEAD
#include <map>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::map;

map<string, string> buildMap(ifstream& map_file){
	map<string, string> trans_map;
	string key;
	string value;
	while (map_file>>key && getline(map_file,value))
	{
		if (value.size() > 1)
			trans_map.insert({ key,value.substr(1) });
			//trans_map[key] = value.substr(1);
		else
			throw std::runtime_error("no rule for" + key);
	}
	return trans_map;
}

const string& transform(const string& s, const map<string, string>& m) {
	auto map_it = m.find(s);
	if (map_it != m.cend())
		return map_it->second;
	else
		return s;
}

void word_transform(ifstream& map_file, ifstream& input) {
	auto trans_map = buildMap(map_file);
	string text;
	while (std::getline(input, text)) {
		std::istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream >> word) {
			if (firstword)
				firstword = false;
			else
				cout << " ";

			cout << transform(word, trans_map);
		}
		cout << endl;

	}
}

int main() {
	
	
	ifstream input_file("C:/Project/CPP/CppPrimer/ch11/11_33/1.txt");
	ifstream map_file("C:/Project/CPP/CppPrimer/ch11/11_33/2.txt");
	word_transform(map_file, input_file);

	system("pause");

=======
#include <map>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::map;

map<string, string> buildMap(ifstream& map_file){
	map<string, string> trans_map;
	string key;
	string value;
	while (map_file>>key && getline(map_file,value))
	{
		if (value.size() > 1)
			trans_map.insert({ key,value.substr(1) });
			//trans_map[key] = value.substr(1);
		else
			throw std::runtime_error("no rule for" + key);
	}
	return trans_map;
}

const string& transform(const string& s, const map<string, string>& m) {
	auto map_it = m.find(s);
	if (map_it != m.cend())
		return map_it->second;
	else
		return s;
}

void word_transform(ifstream& map_file, ifstream& input) {
	auto trans_map = buildMap(map_file);
	string text;
	while (std::getline(input, text)) {
		std::istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream >> word) {
			if (firstword)
				firstword = false;
			else
				cout << " ";

			cout << transform(word, trans_map);
		}
		cout << endl;

	}
}

int main() {
	
	
	ifstream input_file("C:/Project/CPP/CppPrimer/ch11/11_33/1.txt");
	ifstream map_file("C:/Project/CPP/CppPrimer/ch11/11_33/2.txt");
	word_transform(map_file, input_file);

	system("pause");

>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}