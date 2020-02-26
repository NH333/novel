#ifndef COPY_NODES_H
#define COPY_NODES_H

#include "list.h"
template <typename T>
void List<T>::copyNodes(ListNodePosi p, int n) {
	init();
	while (n--)
	{
		insertAsLast(p->data);
		p = p->succ;
	}
}

#endif // !COPY_NODES_H

