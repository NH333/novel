#ifndef SPLAY_H
#define SPLAY_H

#include "../../../BST/BST/header/BST.h"
template <typename T> 
class Splay : public BST<T> {
protected:
	BinNodePosi splay(BinNodePosi v); //将节点v升至树根
public:
	BinNodePosi& search(T const& e);
	BinNodePosi insert(T const& e);
	bool remove(T const& e);
};

//#include "Splay_search.h"

#endif