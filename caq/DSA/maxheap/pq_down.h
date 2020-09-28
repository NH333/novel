#ifndef PQ_DOWN_H
#define PQ_DOWN_H

#include "pq_complheap.h"
#include <cmath>

template <typename T> int PQ_ComplHeap<T>::down(int i) {
	int n = data.size();
	while (InHeap(n, LChild(i)) && InHeap(n, RChild(i))) {
		int left = data[LChild(i)];
		int right = data[RChild(i)];
		if (std::max(left, right) <= data[i]) {
			return i;
		}
		else {
			if (left < right) {
				int tmp = data[i];
				data[i] = right;
				data[RChild(i)] = tmp;
				i = RChild(i);
			}
			else {
				int tmp = data[i];
				data[i] = left;
				data[LChild(i)] = tmp;
				i = LChild(i);
			}
		}
	}

	if (!InHeap(n, LChild(i)) && !InHeap(n, RChild(i))) {
		return i;
	}
	else {
		int left = data[LChild(i)];
		if (left <= data[i]) return i;
		else {
			int tmp = data[i];
			data[i] = left;
			data[LChild(i)] = tmp;
			i = LChild(i);
		}
	}
	return i;
}
#endif // !PQ_DOWN_H
