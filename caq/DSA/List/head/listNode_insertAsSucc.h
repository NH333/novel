#ifndef LIST_NODE_INSERT_AS_SUCC_H
#define LIST_NODE_INSERT_AS_SUCC_H

#include "listNode.h"

template <typename T>
ListNodePosi ListNode<T>::insertAsSucc(const T& e) {
	ListNodePosi x = new ListNode(e, this, succ);
	succ->pred = x;
	succ = x;
	return x;
}

#endif // !LIST_NODE_INSERT_AS_SUCC_H
