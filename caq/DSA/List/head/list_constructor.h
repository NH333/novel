#ifndef CONSTRUCTOR_H
#define CONSTRUCTOR_H

#include "list.h"

template <typename T>
List<T>::List(const List<T>& L) {
	copyNodes(L.first(), L._size);
}

template <typename T>
List<T>::List(ListNodePosi p, int n) {
	copyNodes(p, n);
}

template <typename T>
List<T>::List(const List<T>& L, Rank r, int n) {
	ListNodePosi p = L.first();
	while (0<r--)
	{
		p = p->succ;
	}
	copyNodes(p, n);
}

#endif