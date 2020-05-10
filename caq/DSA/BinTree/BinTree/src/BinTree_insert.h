#ifndef BIN_TREE_INSERT_H
#define BIN_TREE_INSERT_H

#include "BinTree_header.h"

template <typename T> BinNodePosi BinTree<T>::insertAsRoot(const T& e) {
	_size = 1; _root = new BinNode<T>(e); return _root;
}

template <typename T> BinNodePosi BinTree<T>::insertAsLC(BinNodePosi x, const T& e) {
	_size++;
	x->insertAsLC(e); updateHeightAbove(x); return x->lc;
}

template <typename T> BinNodePosi BinTree<T>::insertAsRC(BinNodePosi x, const T& e) {
	_size++;
	x->insertAsRC(e); updateHeightAbove(x); return x->rc;
}

#endif // !BIN_TREE_INSERT_H

