#ifndef DEL_MAX_H
#define DEL_MAX_H
#include "pq_complheap.h"

template<typename T> T PQ_ComplHeap<T>::delMax() {
	T max_num = data[0];
	data[0] = data[data.size() - 1];
	data.pop_back();
	down(0);
	return max_num;
}

#endif // !DEL_MAX_H