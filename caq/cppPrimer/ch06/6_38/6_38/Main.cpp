#include <iostream>

using namespace std;

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };

//返回的是一个指向长度为5的数组 指针，解引用后就是一个长度为5的数组类似一个数组的名字，所以在此解引用才能访问
decltype(odd) *arrPtr(int i) {
	return (i % 2) ? &odd : &even;
}

int main()
{
	
	cout << **arrPtr(3) << endl; 
	
	system("pause");

}