#ifndef SEARCH_H
#define SEARCH_H

#include "vector.h"
#include "vector_binSearch.h"
#include "vector_fibSearch.h"
#include "vector_binSearch_B.h"

template <typename T>
Rank Vector<T>::search(const T& value, Rank lo, Rank hi) const {
	return binSearchB(_elem, value, lo, hi);

//	return fibSearch(_elem, value, lo, hi);
	//return binSearch(_elem, value, lo, hi);

}

#endif