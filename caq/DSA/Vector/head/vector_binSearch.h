#ifndef  BIN_SEARCH_H
#define BIN_SEARCH_H

#include "vector.h"

template<typename T>
static Rank binSearch(T* A, const T& value, Rank lo, Rank hi) {
	

	while (lo<hi)
	{
		Rank mid = (lo + hi) / 2;

		if (A[mid] < value) lo = mid + 1;

		else if (value < A[mid]) hi = mid;

		else return mid;
	}
	return -1;
}

#endif // ! BIN_SEARCH_H

