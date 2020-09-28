#ifndef PQ_GET_MAX_H
#define PQ_GET_MAX_H

#include "pq_complheap.h"
template<typename T> T PQ_ComplHeap<T>::getMax() {
	return data[0];
}

#endif // !PQ_GET_MAX_H
