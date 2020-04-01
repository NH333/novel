#ifndef BIN_NODE_H
#define BIN_NODE_H

#define BinNodePosi BinNode<T>*

#include <iostream>

template <typename T> struct BinNode
{
	//基本数据成员
	T data;
	BinNodePosi parent;
	BinNodePosi lc;
	BinNodePosi rc;
	int height;

	//构造函数
	BinNode() : parent(NULL), lc(NULL), rc(NULL), height(0)
	{
	}

	BinNode(T e, BinNodePosi p = NULL, BinNodePosi lc = NULL, BinNodePosi rc = NULL, int h = 0) :
		data(e), parent(p), lc(lc), rc(rc), height(h) 
	{
	}
	//基本操作接口
	int size();
	BinNodePosi insertAsLC(T const&);
	BinNodePosi insertAsRC(T const&);
	int getHeight(const BinNodePosi x);
};

#endif // !BIN_NODE_H

