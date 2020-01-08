#include <iostream>
#include <vector>
#include "13_13.h"

int main() {
	X a;
	X& b = a;
	X *p = new X;
	X& p1 = *p;
	std::vector<X> m_vec;
	m_vec.push_back(a);
	m_vec.push_back(b);
	m_vec.push_back(*p);
	m_vec.push_back(p1);

	delete p;
	
	system("pause");
}