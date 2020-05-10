#ifndef BIN_TREE_UPDATE_HEIGHT_H
#define BIN_TREE_UPDATE_HEIGHT_H

#include "BinTree_header.h"

template<typename T> int BinTree<T>::updateHeight(BinNodePosi x) {
	return x->height = 1 + __max(x->getHeight(x->lc), x->getHeight(x->rc));
}

template<typename T> void BinTree<T>::updateHeightAbove(BinNodePosi x) {
	while (x) {
		updateHeight(x);
		x = x->parent;
	}
}

template <typename T> int BinNode<T>::getHeight(const BinNodePosi x) {
	height = (x ? x->height : -1);
	return height;
}

#endif // !BIN_TREE_UPDATE_HEIGHT_H

