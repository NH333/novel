#include <iostream>

using namespace std;

int my_abs(int num) {
	return(num < 0 ? -num : num);
}

int main() 
{
	int num;
	cout << "please input a number: ";
	cin >> num;
	cout << "The abs of the num " << num << " : " << my_abs(num) << endl;

	system("pause");
}