#ifndef TRAVERSE_H
#define TRAVERSE_H

#include "list.h"

template<typename T> template<typename VST>
void List<T>::traverse(VST& vist) {
	for (ListNodePosi p = header->succ; p != trailer; p = p->succ) {
		vist(p->data);
	}
}


#endif // !TRAVERSE_H

