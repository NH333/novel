#include <iostream>

using namespace std;

void ExchangePointer(int* &p1, int* &p2) {
	int* tmp;
	tmp = p1;
	p1 = p2;
	p2 = tmp;

}

void print(const int ia[10])
{
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}

int main() {

	int i = 0;
	int* p1 = NULL;
	int* p2 = &i;

	int a[10] = { 0 };
	print(a);

	cout << p1 << " ; " << p2 << endl;
	ExchangePointer(p1, p2);
	cout << p1 << " ; " << p2 << endl;
	
	system("pause");

}