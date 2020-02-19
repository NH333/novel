#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include"../head/vector.h"


template <typename T>
void Vector<T>::bubbleSort(Rank lo, Rank hi) {
	Rank hi_;
	bool sorted = false;
	while (!sorted) {
		sorted = true;
		for (int i = lo + 1; i < hi; ++i) {
			if (_elem[i] < _elem[i - 1]) {
				sorted = false;
				hi_ = i + 1;
				std::swap(_elem[i],_elem[i-1]);
			}
		}
		hi = hi_;
	}
	return;
}



#endif
