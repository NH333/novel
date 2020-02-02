#include <iostream>

using namespace std;

int main()
{
	int tmp = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	cout << tmp << endl;
	tmp = 12 / 3 * 4 + 5 * 15 + (24 % 4) / 2;
	cout << tmp << endl;

	/*偶数还是奇数*/
	if (tmp % 2) {
		cout << "奇数：" << tmp << endl;
	}
	else {
		cout << "偶数：" << tmp << endl;
	}

	system("pause");
}