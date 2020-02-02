#include <iostream>

using namespace std;

void reset(int &num) {
	num = 0;

	//return num;
}


int main() {
	int num = 3;
	reset(num);
	cout << num << endl;

	system("pause");
}