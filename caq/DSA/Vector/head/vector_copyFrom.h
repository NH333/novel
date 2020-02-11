#ifndef COPY_FROM_H
#define COPY_FROM_H

#include "vector.h"

template <typename T>
void Vector<T>::copyFrom(const T* A, Rank lo, Rank hi) {
	_capacity = 2*(hi - lo);
	_elem = new T[_capacity];

	//while (lo < hi) {
	//	_elem[_size++] = A[lo++];
	//}
	for (_size = 0; _size < (_capacity/2); ++_size) {
		_elem[_size] = A[lo++];
	}
}

#endif // !COPY_FROM_H
