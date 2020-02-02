#include <iostream>
#include <string>

using namespace std;

int main()
{
	string m_string, pre_string;
	//string flag;
	
	while (1)
	{
		cin >> m_string;
		if (m_string == pre_string) {
			cout << "重复的单词: " << m_string << endl;
			break;
		}
		else {
			cout << "没有出现重复单词......请继续输入：" << endl;
			pre_string = m_string;
		}
		
	}

	system("pause");
}