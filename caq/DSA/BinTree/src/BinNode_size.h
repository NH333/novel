#ifndef BIN_NODE_SIZE
#define BIN_NODE_SIZE
#include"../head/BinNode.h"
template<typename T> int BinNode<T>::size() {
	int s = 1;
	if (lc) s += lc->size();
	if (rc) s += rc->size();
	return s;
}

#endif

