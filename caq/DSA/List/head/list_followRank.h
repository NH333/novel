#ifndef FOLLOW_RANK_H
#define FOLLOW_RANK_H

#include "list.h"
template <typename T>
T& List<T>::operator[] (Rank n) const {
	ListNodePosi p;
	p = header->succ;
	while (0<n--) {
		p = p->succ;
	}
	return p->data;
}


#endif // !FOLLOW_RANK_H

