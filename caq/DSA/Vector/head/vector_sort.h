#ifndef SORT_H
#define SORT_H

#include "vector.h"
#include "../sortingMethod/bubbleSort.h"

template <typename T>
void Vector<T>::sort(Rank lo, Rank hi) {
	bubbleSort(lo, hi);
}

#endif // !SORT_H

