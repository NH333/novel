#ifndef PQ_HEAPIFY_H
#define PQ_HEAPIFY_H

#include "pq_complheap.h"

template<typename T> void PQ_ComplHeap<T>::heapify(int n) {
	for (int i = 1; i < n; ++i) {
		up(i);
	}
}

#endif // !PQ_HEAPIFY_H
