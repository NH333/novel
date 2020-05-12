#ifndef BST_H
#define BST_H

#include "../../../BinTree/BinTree/head/BinTree.h"


template <typename T> class BST : public BinTree<T> {
protected:
	BinNodePosi _hot;
	BinNodePosi connect34(
		BinNodePosi , BinNodePosi , BinNodePosi ,
		BinNodePosi , BinNodePosi , BinNodePosi , BinNodePosi );
public:
	virtual BinNodePosi& search(T const& e); //&?
	virtual BinNodePosi insert(T const& e);//
	virtual bool remove(T const& e);
};

#include "../header/BST_search.h"
#include "../header/BST_insert.h"
#include "../header/BST_remove.h"

#endif // !BST_H


