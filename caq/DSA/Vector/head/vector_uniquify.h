#ifndef UNIQUIFY_H
#define UNIQUIFY_H

#include "vector.h"

template <typename T>
int Vector<T>::uniquify() {
	int i = 0, j = 1;
	while (j < _size) {
		if (_elem[j] != _elem[i]) {
			_elem[++i] = _elem[j];
		}
		++j;
	}
	_size = i + 1;
	return j - _size;
}

#endif