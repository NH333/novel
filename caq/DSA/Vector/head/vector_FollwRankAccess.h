#ifndef FOLLOW_RANK_ACCESS_H
#define FOLLOW_RANK_ACCESS_H

#include"vector.h"

template <typename T>
T& Vector<T>::operator[](Rank n) {
	return _elem[n];
}

template <typename T>
const T& Vector<T>::operator[](Rank n) const {
	return _elem[n];
}

#endif // !FOLLOW_RANK_ACCESS_H

