#include <iostream>
#include <vector>

using namespace std;

int Add(int a, int b) {
	cout << "Add: ";
	return a + b;
}
int Sub(int a, int b) {
	cout << "Sub: ";
	return a - b;
}
int Mul(int a, int b) {
	cout << "Mul: ";
	return a * b;
}
int Div(int a, int b) {
	cout << "Div: ";
	return a / b;
}

int main()
{
	int fuc(int a, int b);
	vector<decltype(fuc)*> func;
	func.push_back(Add);
	func.push_back(Sub);
	func.push_back(Mul);
	func.push_back(Div);

	for (auto f : func) {
		cout << f(8, 4) << endl;
	}
	system("pause");

}