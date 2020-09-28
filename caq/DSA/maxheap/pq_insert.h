#ifndef PQ_INSERT_H
#define PQ_INSERT_H

#include "pq_complheap.h"
template <typename T> void PQ_ComplHeap<T>::insert(T e) {
	data.push_back(e);
	up(data.size() - 1);
}

#endif // !PQ_INSERT_H