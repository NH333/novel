#include <iostream>
#include <string>

using namespace std;

int main()
{
	string tmp;
	while (cin >> tmp) {
		int count = 0;
		for (auto i : tmp) {
			if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
				++count;
			}
			else {
				;
			}
		}
		cout << tmp << " have: \t" << count << "yuanyin." << endl;
	}
	system("pause");
}