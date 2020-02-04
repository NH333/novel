#include <iostream>

using namespace std;

int Sum(initializer_list<int> const &num) {
	int sum = 0;
	for (auto i : num) {
		sum += i;
	}
	return sum;
}

int main()
{
	cout << Sum({ 1,2,3,4,5 }) << endl;
	system("pause");

}