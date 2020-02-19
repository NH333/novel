#ifndef SORT_H
#define SORT_H

#include "vector.h"
#include "../sortingMethod/bubbleSort.h"
#include"../sortingMethod/mergeSort.h"

template <typename T>
void Vector<T>::sort(Rank lo, Rank hi) {
	//bubbleSort(lo, hi);
	mergeSort(lo, hi);
}

#endif // !SORT_H

