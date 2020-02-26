#ifndef INSERT_H
#define INSERT_H

#include "list.h"
template <typename T>
ListNodePosi List<T>::insertAsFirst(const T& e) {
	++_size;
	return header->insertAsSucc(e);
}

template <typename T>
ListNodePosi List<T>::insertAsLast(const T& e) {
	++_size;
	return trailer->insertAsPred(e);
}

template <typename T>
ListNodePosi List<T>::insertSucc(ListNodePosi p, const T& e) {
	++_size;
	return p->insertAsSucc(e);
}

template <typename T>
ListNodePosi List<T>::insertPred(ListNodePosi p, const T& e) {
	++_size;
	return p->insertAsPred(e);
}

#endif // !INSERT_H

