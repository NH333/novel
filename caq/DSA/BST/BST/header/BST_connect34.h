#ifndef BST_CONNECT34_H
#define BST_CONNECT34_H

#include "BST.h"
template <typename T>
BinNodePosi BST<T>::connect34(
	BinNodePosi a, BinNodePosi b, BinNodePosi c,
	BinNodePosi T0, BinNodePosi T1, BinNodePosi T2, BinNodePosi T3) {
	a->lc = T0; if (T0) T0->parent = a;
	a->rc = T1; if (T1) T1->parent = a; updateHeight(a);
	c->lc = T2; if (T2) T2->parent = c;
	c->rc = T3; if (T3) T3->parent = c; updateHeight(c);
	b->lc = a;
	a->parent = b;
	b->rc = c;
	c->parent = b;
	updateHeight(b);
	return b;
}

#endif