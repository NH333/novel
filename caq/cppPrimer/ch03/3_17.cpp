#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
	vector<string> m_string;
	string tmp_string;

	while (cin >> tmp_string)
	{
		m_string.push_back(tmp_string);
	}

	for (int i = 0; i != m_string.size(); i++) 
	{
		for (int j = 0; j < (m_string[i]).length(); j++) 
		{
			m_string[i][j] = toupper(m_string[i][j]);
		}
	}
	for (int i = 0; i != m_string.size(); i++) 
	{
		cout << m_string[i] << endl;
	}


	system("pause");
}