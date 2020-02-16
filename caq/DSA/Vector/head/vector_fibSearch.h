#ifndef FIB_SEARCH_H
#define FIB_SEARCH_H

#include "vector.h"
#include "../fibonacci/fib.h"

template <typename T>
static Rank fibSearch(T* A, const T& value, Rank lo, Rank hi) {
	
	Rank mid;
	while (lo < hi) {
		Fib fib(hi - lo);
		fib.get() > (hi - lo) ? mid =lo + fib.prev() - 1 : mid = lo + fib.get() - 1;
		

		if (A[mid] < value) lo = mid + 1;

		else if (value < A[mid]) hi = mid;

		else return mid;
	}

	return -1;
	
}


#endif // !FIB_SEARCH_H
