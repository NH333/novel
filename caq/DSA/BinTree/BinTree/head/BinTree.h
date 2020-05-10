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

#include "../src/BinNode_insert.h"
#include "../src/BinNode_size.h"
#include "../src/BinTree_inorderTravel.h"
#include "../src/BinTree_insert.h"
#include "../src/BinTree_postorderTravel.h"
#include "../src/BinTree_preorderTravel.h"
#include "../src/BinTree_traver.h"
#include "../src/BinTree_updateHeight.h"
#include "../src/PRINT.h"
#include "../src/BinNode_succ.h"

#endif
