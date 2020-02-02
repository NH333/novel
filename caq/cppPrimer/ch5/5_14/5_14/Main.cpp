#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string m_string;
	string pre("");
	vector<int> index;
	int count = 1; //计相同单词个数
	int flag = 0;   

	while (cin >> m_string) { //比如一次输入3个单词，用空格隔开，其实就是while循环分3次输入一样的
		
		/*先判断两个单词长度一不一样*/
		if (m_string.size() != pre.size()) {
			flag = 0;
			count = 1;
			pre = m_string;
			continue;  //跳过接下来所有的语句重新开始while循环
		}
		else {
			/*如果不一样就开始遍历每一个字符串*/
			for (int j = 0; j != m_string.size(); j++) {

				if (m_string[j] != pre[j]) {
					flag = 0;
					count = 1;
					pre = m_string;
					break;                      //跳出当前循环
				}
				else {
					flag = 1;
					continue;                 //都是只针对当前循环，break是跳出循环，continue是逃过接下的语句，直接进入当前循环的下一次循环
				}
				//++count;
				//flag = 1;
			}
			
		}

		/*flag表示当前两个字母一样*/
		if (flag) {
			++count;
		}
		cout << m_string << ":\t"<<count << endl;
	}
	system("pause");
}