#ifndef FIND_H
#define FIND_H

#include "list.h"
template <typename T>
//在p的n个前驱中查询，不包含p
ListNodePosi List<T>::find(const T& e, int n, ListNodePosi p) const {
	//assert(n <= _size && 0 <= n);
	while (n--)
	{
		p = p->pred;
		if (p->data == e) {
			return p;
		}
		//p = p->pred;
	}
	return NULL;
}

#endif
