#pragma once
#include "vector.h"

template <typename T>
void Vector<T>::swap(Rank a, Rank b) {
	T tmp;
	tmp = _elem[a];
	_elem[a] = _elem[b];
	_elem[b] = tmp;
	return;
}