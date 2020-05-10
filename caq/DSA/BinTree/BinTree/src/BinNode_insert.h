#ifndef BIN_NODE_INSERT_H
#define BIN_NODE_INSERT_H

#include "../head/BinNode.h"
template<typename T> BinNodePosi BinNode<T>::insertAsLC(T const& e) {
	return lc = new BinNode(e, this);
}

template<typename T> BinNodePosi BinNode<T>::insertAsRC(T const& e) {
	return rc = new BinNode(e, this);
}

#endif
