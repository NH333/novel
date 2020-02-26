#ifndef REMOVE_H
#define REMOVE_H

#include "list.h"
template <typename T>
T List<T>::remove(ListNodePosi p) {
	T e = p->data;
	p->pred->succ = p->succ;
	p->succ->pred = p->pred;
	delete p;
	--_size;
	return e;
}

#endif // !REMOVE_H

