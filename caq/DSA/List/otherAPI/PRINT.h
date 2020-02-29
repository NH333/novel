#ifndef PRINT_H
#define PRINT_H

#include<iostream>
#include "../head/list.h"
template<typename T>
struct PRINT
{
	virtual void operator() (const T& e)  { std::cout << e<<" "; }
};


#endif // !PRINT_H

