#ifndef EXPEND_H
#define EXPEND_H

#include "vector.h"
template <typename T>
void Vector<T>::expend() {
	if (_size < _capacity) return;
	T* old_elem = _elem;
	_elem = new T[_capacity <<= 1];
	for (int i = 0; i < _size; ++i) {
		_elem[i] = old_elem[i];
	}
	delete [] old_elem;
}

#endif // !EXPEND_H



