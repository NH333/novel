#ifndef LIST_NODE_H
#define LIST_NODE_H

typedef int Rank;

#define ListNodePosi ListNode<T>*
#include <stdio.h>

template <typename T>
struct  ListNode
{
	//数据，前驱，后继
	T data; ListNodePosi pred; ListNodePosi succ;

	//构造函数
	ListNode() {}
	ListNode(T e, ListNodePosi phead = NULL, ListNodePosi ptrailer = NULL)
		: data(e), pred(phead), succ(ptrailer)
	{
	}

	//操作接口
	ListNodePosi insertAsPred(const T& e);
	ListNodePosi insertAsSucc(const T& e);
};


#endif
