#include <string>
#include <iostream>
using std::string;

class  HasPtr
{
public:
	HasPtr(const string &s = string()) :ps(new string(s), i(0)) {}

	HasPtr(const HasPtr& hp) :ps(new string(*hp.ps)), i(hp.i) {}

	HasPtr& operator= (const HasPtr& hp) {
		ps = hp.ps;
		i = hp.i;
		return *this;
		/*
		std::string* new_ps = new std::string(*hp.ps);
		delete ps;
		ps = new_ps;
		i = hp.i;
		return *this;
		*/
	}

	~HasPtr()
	{
		delete ps;
	}

private:
	string *ps;
	int i;
};
