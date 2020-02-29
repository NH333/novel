#ifndef DEDUPLICATE_H
#define DEDUPLICATE_H

#include "list.h"
template <typename T>
int List<T>::deduplicate() {
	int oldSize = _size;
	ListNodePosi p = header->succ;
	ListNodePosi tmp = NULL;
	Rank n = 0;
	while (p != trailer)
	{
		tmp = find(p->data, n, p);
		if (tmp) { 
			remove(tmp);
			//--_size; 妈的
		}
		else { 
			++n;
		}
		p = p->succ;
	}
	return oldSize - _size;
}

#endif // !DEDUPLICATE_H

