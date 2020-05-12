#include "../head/Splay.h"
#include "../head/Splay_search.h"
#include "../head/Splay_splay.h"
#include "../head/Splay_insert.h"
#include "../head/Splay_remove.h"

int main() {
	Splay<int> tree;
	BinNode<int>* n1 = tree.insertAsRoot(1);
	BinNode<int>* n2 = tree.insertAsRC(n1, 2);
	BinNode<int>* n4 = tree.insertAsRC(n2, 4);
	tree.insert(3);
	tree.remove(3);

	system("pause");
}