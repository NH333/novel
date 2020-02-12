#include "vector.h"
#include "vector_copyFrom.h"
#include "vector_expend.h"
#include "vector_insert.h"
#include "vector_FollwRankAccess.h"
#include "vector_size.h"
#include "vector_remove.h"
#include "vector_find.h"
#include "vector_deduplicate.h"
#include <iostream>

int main() {
	int a[7] = { 1,2,3,4,5,4,4 };
	Vector<int> c(5,3,1);
	Vector<int> b(a,7);
	c.insert(1, 2);
	c.insert(3, 0);
	c.insert(0, 1);
	for (int i = 0; i < 6; ++i) std::cout << c[i] << std::endl;
	c[1] = 100;
	for (int i = 0; i < 6; ++i) std::cout << c[i] << std::endl;
	
	//测试删除
	std::cout << "测试删除" << std::endl;
	c.remove(1, 4);
	for (int i = 0; i < c.size(); ++i) std::cout << c[i] << std::endl;
	c.remove(0);
	for (int i = 0; i < c.size(); ++i) std::cout << c[i] << std::endl;

	//测试查找
	std::cout << "测试查找" << std::endl;
	std::cout<<b.find(4)<<std::endl;
	
	std::cout<< b.find(6)<<std::endl;

	//测试唯一化
	std::cout << "测试唯一化" << std::endl;
	std::cout << b.deduplicate() << std::endl;

	system("pause");
	
	
}