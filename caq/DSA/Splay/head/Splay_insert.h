#ifndef SPLAY_INSERT_H
#define SPLAY_INSERT_H

#include "Splay.h"
template <typename T>
BinNodePosi Splay<T>::insert(T const& e) {
	//原树为空
	if (!this->_root) { ++this->_size; return this->_root = new BinNode<T>(e); }
	BinNodePosi posi = this->search(e);
	if (e == posi->data) return this->_root;
	else
	{
		this->_size++;
		BinNodePosi tmp = this->_root;
		if (tmp->data < e) 
		{
			tmp->parent = this->_root = new BinNode<T>(e, NULL, tmp, tmp->rc);
			if (tmp->rc) { tmp->rc->parent = this->_root;  tmp->rc = NULL; }
		}
		else
		{
			tmp->parent = this->_root = new BinNode<T>(e, NULL, tmp->lc, tmp);
			if (tmp->lc) { tmp->lc->parent = this->_root; tmp->lc = NULL; }
		}
		this->updateHeightAbove(tmp);
		return this->_root;
	}
}

#endif // !SPLAY_INSERT_H
