
#include "../head/stack_list.h"
#include "../head/convert.h"
#include "../../../list/list/otherAPI/PRINT.h"
#include "../head/pareMatch.h"
#include "../head/stackPermuJudge.h"
//template <typename T>
//void randomList(List<T>& list, int n) {
//	ListNodePosi p = (rand() % 2) ?
//		list.insertAsFirst(rand() % n * 2) : list.insertAsLast(rand() % n * 2);
//	for (int i = 1; i < n; i++)
//	{
//		p = rand() % 2 ?
//			list.insertPred(p, rand() % n * 2) : list.insertSucc(p, rand() % n * 2);
//	}
//}

int main() {
	StackList<int> z;
	while()
	char pare[] = "(()((())))";
	bool c = pareMatch(pare,0,10);
	StackList<char> a;
	PRINT<char> print;
	convert(a, 7, 2);
	a.traverse(print); //反向输出
	system("pause");
}