#ifndef BST_REMOVE_H
#define BST_REMOVE_H
#include "BST.h"
template<typename T>
bool BST<T>::remove(T const& e) {
	BinNodePosi& posi = search(e);
	if (!posi) return false;
	removeAt(posi, _hot);
	this->_size--;
	this->updateHeightAbove(_hot);
	return true;
}

template<typename T>
static BinNodePosi removeAt(BinNodePosi& x, BinNodePosi& hot) {
	T tmp;
	BinNodePosi w = x;
	BinNodePosi succ = NULL;
	if (x->lc == NULL) {
		succ = x = x->rc;
	}
	else if (x->rc == NULL) {
		succ = x = x->lc;
	}
	else
	{
		w = w->succ();
		tmp = x->data;
		x->data = w->data;
		w->data = tmp;
		BinNodePosi u = w->parent;
		((u == x) ? u->rc : u->lc) = succ = w->rc;//把要删除的节点的右子树移到要删除节点的父亲节点
	}

	hot = w->parent;
	if (succ) succ->parent = hot;

	delete w;
	return succ;
}

#endif // !BST_REMOVE_H

