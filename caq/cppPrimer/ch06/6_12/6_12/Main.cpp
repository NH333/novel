#include <iostream>

using namespace std;

void ExchangeInt(int &num1, int &num2) {
	int tmp;
	tmp = num1;
	num1 = num2;
	num2 = tmp;

//	return 0;
}


int main()
{
	int num1 = 2;
	int num2 = 3;
	cout << "num1: "<< num1 << "; num2: " << num2 << endl;
	ExchangeInt(num1, num2);
	cout << "num1: "<< num1 << "; num2: " << num2 << endl;

	system("pause");
}