#include "vector.h"
#include "vector_copyFrom.h"
#include "vector_expend.h"
#include "vector_insert.h"
#include "vector_FollwRankAccess.h"
#include <iostream>

int main() {
	int a[5] = { 1,2,3,4,5 };
	Vector<int> c(5,3,1);
	Vector<int> b(a,1,4);
	c.insert(1, 2);
	c.insert(3, 0);
	c.insert(0, 1);
	for (int i = 0; i < 6; ++i) std::cout << c[i] << std::endl;
	c[1] = 100;
	for (int i = 0; i < 6; ++i) std::cout << c[i] << std::endl;
	

	system("pause");
	
	
}