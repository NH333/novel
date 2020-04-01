#ifndef BIN_TREE_H
#define BIN_TREE_H

#include "BinNode.h"
template <typename T> class BinTree {
protected:
	int _size;
	BinNodePosi _root;
	virtual int updateHeight(BinNodePosi x); //更新节点的高度
	void updateHeightAbove(BinNodePosi x); //更新x祖先的高度

public:
	int size();

	BinNodePosi insertAsRoot(const T& e); //插入根节点
	BinNodePosi insertAsLC(BinNodePosi x, const T& e); //e作为x的左孩子（原无）插入
	BinNodePosi insertAsRC(BinNodePosi x, const T& e); //e作为x的右孩子（原无）插入

};

#endif
