#include "BinTree_header.h"
#include "BinNode_insert.h"
#include "BinNode_size.h"
#include "BinTree_insert.h"
#include "BinTree_updateHeight.h"
#include "BinTree_preorderTravel.h"
#include "BinTree_inorderTravel.h"
#include "BinTree_postorderTravel.h"
#include "PRINT.h"

int main() {
	BinTree<char> tree;  PRINT<char> print;
	BinNode<char>* root = tree.insertAsRoot('b');
	BinNode<char>* a = tree.insertAsLC(root, 'a');
	BinNode<char>* f = tree.insertAsRC(root, 'f');
	BinNode<char>* d = tree.insertAsLC(f, 'd');
	BinNode<char>* g = tree.insertAsRC(f, 'g');
	BinNode<char>* c = tree.insertAsLC(d, 'c');
	BinNode<char>* e = tree.insertAsRC(d, 'e');

	tree.inorderTravel(root, print);
	std::cout << std::endl;
	tree.preorderTravel(root, print);
	std::cout << std::endl;
	tree.postorderTravel(root, print);
	system("pause");

	return 0;
}                                           