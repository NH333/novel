#include <iostream>

using namespace std;

int fact(int val);

int main() {
	cout<<fact(5)<<endl;

	system("pause");
}

int fact(int val) {
	int sum = 1;
	while (val> 1) {
		sum = val * sum;
		--val;
	}
	return sum;
}