#ifndef REMOVE_H
#define REMOVE_H

#include "vector.h"

template <typename T>
int Vector<T>::remove(Rank lo, Rank hi) {
	if (lo >= hi) return 0;
	while (hi < _size) {
		_elem[lo++] = _elem[hi++];
	}
	_size = lo;
	return hi - lo;
}

template <typename T> 
T Vector<T>::remove(Rank n) {
	T e = _elem[n];
	remove(n, n + 1);
	return e;
}


#endif