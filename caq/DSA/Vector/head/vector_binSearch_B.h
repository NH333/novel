#ifndef  BIN_SEARCH_B_H
#define BIN_SEARCH_B_H

#include "vector.h"

template<typename T>
static Rank binSearchB(T* A, const T& value, Rank lo, Rank hi) {


	while (1 < hi-lo)
	{
		Rank mid = (lo + hi) / 2;

		(value < A[mid]) ? hi = mid : lo = mid;
	}
	return (value == A[lo] ? lo : -1);
}

#endif // ! BIN_SEARCH_B_H
