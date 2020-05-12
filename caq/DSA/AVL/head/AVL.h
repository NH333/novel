#ifndef AVL_H
#define AVL_H


#include "../../../BST/BST/header/BST.h"

#define Balanced(x) (stature( (x).lc )==stature( (x).rc ))
#define BalFac(x) (stature( (x).lc ) - stature( (x).rc ))
#define AvlBalanced(x) ( (-2<BalFac(x)) && (BalFac(x)<2) )

template <typename T>
class AVL : public BST<T> {
public:
	BinNodePosi insert(T const& e);
	bool remove(T const& e);
};



#endif // !AVL_H
