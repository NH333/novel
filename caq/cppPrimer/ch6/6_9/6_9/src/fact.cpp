#include "Chapter6.h"
#include <iostream>

using namespace std;

int my_fact(int num) {
	int result=1;
	while (num > 1) {
		result = num * result;
		--num;
	}
	return result;
}

int my_abs(int num) {
	return(num > 0 ? num : -num);
}

void log_fact() {
	int num, tmp;
	cout << "please input a number: ";
	cin >> num ;
	int result = 1;
	tmp = num;
	while (tmp > 1) {
		result = tmp * result;
		--tmp;
	}
	cout << "The " << num << "'s fact is: " << result << endl;
	//return 0;

}