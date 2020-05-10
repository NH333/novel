#ifndef BIN_NODE_SUCC_H
#define BIN_NODE_SUCC_H

#include "BinTree_header.h"
#define IsRoot(x) ( ! ( (x).parent ) )
#define IsLChild(x) ( ! IsRoot(x) && ( & (x) == (x).parent->lc ) )
#define IsRChild(x) ( ! IsRoot(x) && ( & (x) == (x).parent->rc ) )
template <typename T> BinNodePosi BinNode<T>::succ() { //定位节点v的直接后继
	BinNodePosi s = this; //记录后继的临时变量
	if (rc) { //若有右孩子，则直接后继必在右子树中，具体地就是
		s = rc; //右子树中
		while (s->lc) s = s->lc; //最靠左（最小）的节点
	}
	else { //否则，直接后继应是“将当前节点包含于其左子树中的最低祖先”，具体地就是
		while (IsRChild(*s)) s = s->parent; //逆向地沿右向分支，不断朝左上方移动
		s = s->parent; //最后再朝右上方移动一步，即抵达直接后继（如果存在）
	}
	return s;
}
#endif
