#include <iostream>
#include <vector>

using namespace std;

void ReadVector(vector<int>::const_iterator iter1, vector<int>::const_iterator iter2) {
	if (iter1 == iter2) {
		cout << "over" << endl;
		return;
	}
	cout << *iter1 << endl;
	ReadVector(++iter1, iter2);
}

int main() {
	vector<int> num = { 1,2,3,4,5,6,7,8 };
	ReadVector(num.cbegin(), num.cend());

	system("pause");
}