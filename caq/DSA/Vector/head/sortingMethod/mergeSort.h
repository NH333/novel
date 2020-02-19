#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "../head/vector.h"
template <typename T>
void Vector<T>::mergeSort(Rank lo, Rank hi) {
	//Rank mid = (lo + hi) / 2;
	if (hi - lo < 2) { return; }    //递归截止条件
	Rank mid = (lo + hi) / 2;
	mergeSort(lo, mid); 
	mergeSort(mid, hi);
	merge(lo,mid,hi);
}

template <typename T>
void Vector<T>::merge(Rank lo, Rank mid, Rank hi) {
	T* A = _elem;
	int len_left = mid - lo; T* left = new T[len_left];
	int len_right = hi - mid; T* right = new T[len_right];
	for (Rank i = 0; i < len_left; ++i) { left[i] = A[lo+i]; }
	for (Rank j = 0; j < len_right; ++j) {	right[j] = A[mid+j]; }
	
	Rank i=0 , j=0 , k = lo;
	while (i < len_left && j < len_right) {
		if (left[i] < right[j]) {
			A[k] = left[i];
			++i;
			++k;
		}
		else
		{
			A[k] = right[j];
			++j;
			++k;
		}
	}

	while (i < len_left) {
		A[k] = left[i];
		++i;
		++k;
	}
	while (j < len_right) {
		A[k] = right[j];
		++j;
		++k;
	}
	

	delete[] left;
	delete[] right;
	return;

}

#endif // !MERGE_SORT_H

