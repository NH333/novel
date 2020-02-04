#include<iostream>
#include<vector>
#include<sstream>
#include<fstream>
#include<string>


using namespace std;

int main() {
	//istringstream str;
	//ifstream ifs;
	//vector<string> line;
	const string& file_name = "C:/Project/CPP/CppPrimer/ch8/8_4/data/test.txt";
	ifstream ifs(file_name);
	if (ifs)
	{
		string line;
		string word;
		while (getline(ifs, line))
		{
			
			istringstream str(line);
			
			while (str >> word) {
				cout << word << endl;
			}
		}
	}
	system("pause");
}