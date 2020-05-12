#ifndef BST_INSERT_H
#define BST_INSERT_H
#include "BST.h"

template<typename T>
BinNodePosi BST<T>::insert(T const& e) {
	BinNodePosi& posi = search(e);
	if (posi) return posi;
	posi = new BinNode<T>(e, _hot);
	++this->_size;
	this->updateHeightAbove(posi);
	return posi;
}


#endif