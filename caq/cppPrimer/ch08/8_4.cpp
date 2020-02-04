#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

void ReadFileToVector(const string& file_name, vector<string>& vec) {
	ifstream ifs(file_name);
	if (ifs)
	{
		string buf;
		while (getline(ifs,buf))
		{
			vec.push_back(buf);
		}
	}
}

void ReadFileToVector_(const string& file_name, vector<string>& vec) {
	ifstream ifs(file_name);
	if (ifs)
	{
		string buf;
		while (ifs >> buf)
		{
			vec.push_back(buf);
		}
	}
}

int main() {
	vector<string> vec;
	const string& file_name = "C:/Project/CPP/CppPrimer/ch8/8_4/data/test.txt";
	//ReadFileToVector(file_name, vec);
	ReadFileToVector_(file_name, vec);
	for (auto& str : vec) 
	{
		cout << str << endl;
		
	}
	cout << vec.size() << endl;

	system("pause");
}