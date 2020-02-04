#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

struct PeopleInfo
{
	string name;
	vector<string> phone_num;
};

bool valid(string num) {
	bool flag = 0;
	if (num == "10086"){
		flag = 0;
	}
	else
	{
		flag = 1;
	}
	return flag;
}
string format(string num) {
	return ("(+86) " + num);
}

void ReadFile(string path, vector<PeopleInfo>& people) {
	string line, word;
	ifstream ifs(path);
	if (ifs) {
		while (getline(ifs,line))
		{
			PeopleInfo info;
			istringstream record(line);
			record >> info.name;
			while (record >> word) {
				info.phone_num.push_back(word);
			}
			people.push_back(info);
		}
	}
	else {
		cout << "error! " << endl;
	}
}

void ProcessPeoInfo(vector<PeopleInfo> people) {
	for (const auto& entry : people) {
		ostringstream formatted, badNums;
		for (const auto& nums : entry.phone_num) {
			if (!valid(nums)) {
				badNums << " " << nums;
			}
			else
			{
				formatted << " " << format(nums);
			}
			if (badNums.str().empty())
			{
				cout << entry.name << " " << formatted.str() << endl;
			}
			else
			{
				cerr << "input error: " << entry.name << " invalid numbers " << badNums.str() << endl;
			}
		}
	}
}


int main()
{
	const string path = "C:/Project/CPP/CppPrimer/ch8/8_13/phonenum.txt";
	vector<PeopleInfo> people;
	ReadFile(path, people);
	cout << people.size() << endl;
	ProcessPeoInfo(people);

	system("pause");
}