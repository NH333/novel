#ifndef FIND_H
#define FIND_H

#include "vector.h"

template <typename T>
Rank Vector<T>::find(const T& value) {
	for (int i = 0; i < _size; ++i) {
		if (_elem[i] == value) return i;
	}
	std::cout << "No such element." << std::endl;
	return -1;
}

template <typename T> //无序向量的顺序查找：返回最后一个元素e的位置；失败时，返回lo - 1
Rank Vector<T>::find(const T& e, Rank lo, Rank hi) const { //assert: 0 <= lo < hi <= _size
	while ((lo < hi--) && (e != _elem[hi])); //从后向前，顺序查找
	return hi; //若hi < lo，则意味着失败；否则hi即命中元素的秩
}

#endif // !FIND_H

