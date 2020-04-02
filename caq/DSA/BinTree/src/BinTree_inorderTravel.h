#ifndef BIN_TREE_INORDER_TRAVEL_H
#define BIN_TREE_INORDER_TRAVEL_H
#include "BinTree_header.h"

template <typename T>
static void goAlongLeftBranch(BinNodePosi x, StackList<BinNode<T>*>& S) {
	while (x) {
		S.push(x);
		x = x->lc;
	}
}

template <typename T> template<typename VST>
void BinTree<T>::inorderTravel(BinNodePosi x, VST& visit) {
	StackList<BinNode<T>*> S;
	while (true)
	{
		goAlongLeftBranch(x, S);
		if (S.size() == 0) break;
		x = S.pop(); visit(x->data);
		x = x->rc;
	}
}


#endif // !BIN_TREE_INORDER_TRAVEL_H

