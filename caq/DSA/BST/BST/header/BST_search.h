#ifndef BST_SEARCH_H
#define BST_SEARCH_H

#include "BST.h"

template<typename T>
BinNodePosi& BST<T>::search(T const& e) {//search 接口
	return searchIn(this->_root, e, _hot = NULL);
}

template<typename T>
static BinNodePosi& searchIn(BinNodePosi& v, T const& e, BinNodePosi& hot) {//searchIn 算法
	if (!v || v->data == e) return v;  //如果未找到则指向可以插入的那个位置
	hot = v;
	return searchIn(((e < v->data) ? v->lc : v->rc), e, hot);
}

#endif


