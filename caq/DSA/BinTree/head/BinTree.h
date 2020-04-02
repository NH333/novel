#ifndef BIN_TREE_H
#define BIN_TREE_H

#include "BinNode.h"
#include "BinTree_stack.h"
template <typename T> class BinTree {
protected:
	int _size;
	BinNodePosi _root;
	virtual int updateHeight(BinNodePosi x); //更新节点的高度
	void updateHeightAbove(BinNodePosi x); //更新x祖先的高度

public:
	int size();
	BinNodePosi getRoot() { return _root; }
	BinNodePosi insertAsRoot(const T& e); //插入根节点
	BinNodePosi insertAsLC(BinNodePosi x, const T& e); //e作为x的左孩子（原无）插入
	BinNodePosi insertAsRC(BinNodePosi x, const T& e); //e作为x的右孩子（原无）插入
	template <typename VST> void preorderTravel(BinNodePosi x,VST& visit);
	template <typename VST> void inorderTravel(BinNodePosi x, VST& visit);
	template <typename VST> void postorderTravel(BinNodePosi x, VST& visit);

};

#endif
