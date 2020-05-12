#ifndef SPLAY_SEARCH_H
#define SPLAY_SEARCH_H

#include "Splay.h"
template<typename T>
BinNodePosi& Splay<T>::search(T const& e) {
	BinNodePosi p = searchIn(this->_root, e,this->_hot = NULL);

	this->_root = splay(p ? p : this->_hot);

	return this->_root;
}

#endif
