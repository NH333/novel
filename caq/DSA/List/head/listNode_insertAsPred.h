#ifndef LIST_NODE_INSERT_AS_PRED_H
#define LIST_NODE_INSERT_AS_PRED_H

#include "listNode.h"

template <typename T>
ListNodePosi ListNode<T>::insertAsPred(const T& e) {
	ListNodePosi x = new ListNode(e, pred, this);
	pred->succ = x;
	pred = x;
	return x;	
}

#endif // !LIST_NODE_INSERT_AS_PRED_H

