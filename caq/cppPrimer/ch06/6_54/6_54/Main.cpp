#include <iostream>
#include <vector>

using namespace std;

int Fun1(int param1, int param2) {
	cout << "Fun1 :"<<param1<<param2 << endl;
	return 0;
}
//int(*p)(int param1, int param2) = Fun1;
//typedef int(*p)(int param1, int param2);


vector<decltype(Fun1) *> num;



int main()
{
	Fun1(1, 2);

	system("pause");
}