#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

struct  X
{
	X() { cout << "X()" << endl; }
	X(const X&) { cout << "X(const X&)" << endl; }
	X& operator=(const X&) { 
		cout << "operator=" << endl; 
		return *this;
	}
	~X() { cout << "~X()" << endl; }
};
