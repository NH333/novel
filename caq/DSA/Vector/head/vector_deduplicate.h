#ifndef DEDUPLICATE_H
#define DEDUPLICATE_H

#include "vector.h"
#include "vector_find.h"
#include "vector_remove.h"
template <typename T> 
Rank Vector<T>::deduplicate() {
	Rank old_size = _size;
	Rank i = 1;
	while (i < _size) {
		(find(_elem[i], 0, i) < 0) ?
			i++ : remove(i);//
	}
	return old_size - _size;
}

#endif // !DEDUPLICATE_H

