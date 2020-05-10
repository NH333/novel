#ifndef BIN_TREE_PREORDER_TRAVEL_H
#define BIN_TREE_PREORDER_TRAVEL_H
#include "BinTree_header.h"

//对于当前节点为根的树，进行一次访问，把右子树存到栈中
template <typename T, typename VST>
static void visitAlongLeftBranch(BinNodePosi x, VST& visit, StackList<BinNode<T>*>& S) {
	while (x) {
		visit(x->data);
		S.push(x->rc);
		x = x->lc;
	}
}

template <typename T> template <typename VST> 
void BinTree<T>::preorderTravel(BinNodePosi x,VST& visit) {
	StackList<BinNode<T>*> S;
	while (true)
	{
		visitAlongLeftBranch(x, visit, S);
		if (S.size() == 0) break;
		x = S.pop(); //把右子树的根弹出
	}
	
}

#endif // !BIN_TREE_PREORDER_TRAVEL_H

