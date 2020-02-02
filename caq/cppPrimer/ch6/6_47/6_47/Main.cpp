#include <iostream>
#include <vector>
//#define NDEBUG

using namespace std;

typedef vector<int>::iterator IT;

//void ReadVector(IT iter1, IT iter2);

void ReadVector(IT iter1, IT iter2) {
		if (iter1 == iter2) {
			cout << "over" << endl;
			return;
		}
		cout << "Size: " << (iter2 - iter1) << endl;
		cout << *iter1 << endl;
		ReadVector(++iter1, iter2);	
}

int main()
{
	vector<int> num = { 1,2,3,4,5,6,7,8,9 };

	#ifndef NDEBUG
		ReadVector(num.begin(), num.end());
	#endif // !NDEBUG


	system("pause");
}