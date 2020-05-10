#include "../../../BinTree/BinTree/head/BinTree.h"
#include "../header/BST.h"

int main() {
	BST<int> bs_tree; PRINT<int> print;
	//书本p188页例子
	BinNode<int>* n36 =  bs_tree.insert(36);
	BinNode<int>* n27 = bs_tree.insertAsLC(n36, 27);
	BinNode<int>* n58 = bs_tree.insertAsRC(n36, 58);
	BinNode<int>* n6 = bs_tree.insertAsLC(n27, 6);
	BinNode<int>* n53 = bs_tree.insertAsLC(n58, 53);
	BinNode<int>* n69 = bs_tree.insertAsRC(n58, 69);
	BinNode<int>* n40 = bs_tree.insertAsLC(n53, 40);
	BinNode<int>* n46 = bs_tree.insertAsRC(n40, 46);
	BinNode<int>* n64 = bs_tree.insertAsLC(n69, 64);

	//bs_tree.insert(55);
	bs_tree.remove(69);
	bs_tree.inorderTravel(n36, print);
	system("pause");
}