#ifndef PRINT_H
#define PRINT_H

#include <iostream>
template <typename T> 
struct PRINT
{
	virtual void operator() (const T& e) { std::cout << e << " "; }
}; 

#endif // !PRINT_H

