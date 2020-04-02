#ifndef BIN_TREE_POSTORDER_TRAVEL_H
#define BIN_TREE_POSTORDER_TRAVEL_H

#include "BinTree_header.h"
template <typename T>
static void goAlongLRightBranch(BinNodePosi x, StackList<BinNode<T>*>& S1, StackList<BinNode<T>*>& S2) {
	while (x) {
		S2.push(x);
		//visit(x->data);
		S1.push(x->lc);
		x = x->rc;
	}
}

template <typename T> template<typename VST>
void BinTree<T>::postorderTravel(BinNodePosi x, VST& visit) {
	StackList<BinNode<T>*> S1;
	StackList<BinNode<T>*> S2;
	BinNodePosi tmp;

	while (true)
	{
		goAlongLRightBranch(x, S1, S2);
		if (S1.size() == 0) break;
		x = S1.pop();
		//goAlongLRightBranch(x, S1, S2);
	}

	while (S2.size()!=0)
	{
		tmp = S2.pop();
		visit(tmp->data);
	}
}

#endif // !BIN_TREE_POSTORDER_TRAVEL_H

