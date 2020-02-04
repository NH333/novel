#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char ch1[] = "Hello";
	char ch2[] = "World!";
    char ch3[20];

	strcpy_s(ch3, ch1);
	strcat_s(ch3, " ");
	strcat_s(ch3, ch2);
	//strcat(ch3, ' ');

	cout << ch3 << endl;
	system("pause");


}