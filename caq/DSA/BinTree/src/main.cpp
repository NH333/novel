#include "BinTree_header.h"
#include "BinNode_insert.h"
#include "BinNode_size.h"
#include "BinTree_insert.h"
#include "BinTree_updateHeight.h"

int main() {
	BinTree<int> tree;
	BinNode<int>* root = tree.insertAsRoot(1);
	tree.insertAsLC(root, 2);
	tree.insertAsRC(root, 3);

	system("pause");

	return 0;
}