#include "../head/list.h"
#include "../head/list_init.h"
#include "../head/list_clear.h"
#include "../head/list_constructor.h"
#include "../head/list_copyNodes.h"
#include "../head/list_find.h"
#include "../head/list_followRank.h"
#include "../head/list_insert.h"
#include "../head/list_remove.h"
#include "../head/listNode.h"
#include "../head/listNode_insertAsPred.h"
#include "../head/listNode_insertAsSucc.h"
#include "../head/list_deduplicate.h"
#include "../otherAPI/INSEARSE.h"
#include "../head/list_traverse.h"
#include "../otherAPI/PRINT.h"
#include "../head/list_search.h"
#include "../head/list_sort.h"


#include <iostream>


template <typename T>
void randomList(List<T>& list, int n) {
	ListNodePosi p = (rand() % 2) ?
		list.insertAsFirst(rand() % n * 2) : list.insertAsLast(rand() % n * 2);
	for (int i = 1; i < n; i++)
	{
		p = rand() % 2 ?
			list.insertPred(p, rand() % n * 2) : list.insertSucc(p, rand() % n * 2);
	}
}

int main() {
	
	int b = 5;
	//int &c = b;
	//int d = c;
	//b = 4;

	INSCREASE<int> insearse;
	PRINT<int> print;

	srand(time(NULL));
	List<int> a;
	randomList(a, 20);
	
	a.traverse(print);
	std::cout << std::endl;

	while (b--)
	{
		std::cout << std::endl;
		a.sort(a.first(), a.size());
		a.traverse(print);
	}
	

	//a.deduplicate();
	std::cout << std::endl;
	
	a.traverse(insearse);
	a.traverse(print);
	
	
	system("pause");

}