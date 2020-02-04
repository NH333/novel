#include <iostream>
#include <string>

using namespace std;
int main()
{
	string m1_string, m2_string;
	string again;
	do
	{
		cout << "please input two strings: " << endl;
		cin >> m1_string >> m2_string;
		cout << (m1_string.size() >= m2_string.size() ? m2_string : m1_string) << endl;
		cout << "More? Enter yes or no: " << endl;
		cin >> again;
	} while (tolower(again[0])=='y');

	system("pause");
}