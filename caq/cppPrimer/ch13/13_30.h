#include <string>
#include <iostream>
using std::string;

class  HasPtr
{
public:
	friend void swap(HasPtr&, HasPtr&);
	friend bool operator<(const HasPtr& lhs, const HasPtr& rhs);

	HasPtr(const string &s = string()) :ps(new string(s), i(0)) {}

	HasPtr(const HasPtr& hp) :ps(new string(*hp.ps)), i(hp.i) {}

	//HasPtr(const HasPtr&);


	HasPtr& operator= (const HasPtr& hp) {
		auto newp = new string(*hp.ps);
		delete ps;
		ps = newp;
		i = hp.i;
		return *this;

	}

	/*
	HasPtr& operator<(const HasPtr& hp) {
		return (this->i < hp.i);
	}*/

	~HasPtr()
	{
		delete ps;
	}

	/*
public:
	void swap(HasPtr& a, HasPtr& b) {
		using std::swap;
		swap(a.ps, b.ps);
		swap(a.i, b.i);
	}*/

private:
	string *ps;
	int i;
};

void swap(HasPtr& lhs, HasPtr& rhs)
{
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
	std::cout << "call swap(HasPtr& lhs, HasPtr& rhs)" << std::endl;
}

bool operator<(const HasPtr& lhs, const HasPtr& rhs) {
	return *lhs.ps < *rhs.ps;
}

