#include <iostream>
#include <string>

using namespace std;

bool IsUper(const string str) {
	int i = 0;
	while (i != str.size())
	{
		if (isupper(str[i]))
		{
			return true;
		}
		else
		{
			++i;
		}
	}
	return false;	
}

string ToLower(const string str) {
	string tmp = str;
	for (int i = 0; i != str.size(); ++i) {
		tmp[i] = tolower(str[i]);
	}
	return tmp;
}

int main()
{
	const string m_string = "Moulei is Shabi!";
	cout << IsUper(m_string) << endl;
	cout << ToLower(m_string) << endl;

	system("pause");
}