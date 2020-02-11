#ifndef INSERT_H
#define INSERT_H

#include "vector.h"
template <typename T>
Rank Vector<T>::insert(Rank index, const T& value) {
	expend();
	for (int i = _size; i > index; --i) {
		_elem[i] = _elem[i - 1];
	}
	_elem[index] = value;
	_size += 1;

	return index;
}

#endif // !INSERT_H
