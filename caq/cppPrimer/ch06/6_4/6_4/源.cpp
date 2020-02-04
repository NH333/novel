#include <iostream>

using namespace std;

int fact(int val);

int main() {
	int num;
	cout << "please input a num: " << endl;
	cin >> num;
	cout <<num<< "的阶乘: "<<fact(num) << endl;

	system("pause");
}

int fact(int val) {
	int sum = 1;
	while (val > 1) {
		sum = val * sum;
		--val;
	}
	return sum;
}