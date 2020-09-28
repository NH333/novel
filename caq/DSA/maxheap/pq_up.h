#ifndef PQ_UP_H
#define PQ_UP_H
#include "pq_complheap.h"
template<typename T> int PQ_ComplHeap<T>::up(int i) {
	while (Parent(i) >= 0) {
		int j = Parent(i);
		if (data[j] > data[i]) {
			break;
		}
		int tmp = data[i];
		data[i] = data[j];
		data[j] = tmp;
		i = j;
	}
	return i;
}
#endif
