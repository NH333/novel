#ifndef CLEAR_H
#define CLEAR_H

#include "list.h"
template <typename T>
int List<T>::clear() {
	int oldSize = _size;
	while (0<_size)
	{
		remove(header->succ);
	}
	return oldSize;
}

#endif // !CLEAR_H

