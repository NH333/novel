#ifndef SEARCH_H
#define SEARCH_H

#include "list.h"
template <typename T>
ListNodePosi List<T>::search(const T& e, int n, ListNodePosi p) const {
	//p->pred != header;
	while (0 <= n--)
	{
		p = p->pred;
		if (p->data <= e) { break; }
	}
	return p;
}

#endif