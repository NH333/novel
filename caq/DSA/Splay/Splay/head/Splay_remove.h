#ifndef SPLAY_REMOVE_H
#define SPLAY_REMOVE_H

#include "Splay.h"

template <typename T>
bool Splay<T>::remove(T const& e) {
	BinNodePosi w = this->_root;
	BinNodePosi v = this->search(e);
	if ((!this->_root) || (e != v->data)) { return false; }
	if (!v->lc) { this->_root = v->rc; if (this->_root) { v->rc->parent = NULL; } }
	else if (!v->rc) { this->_root = v->lc; if (this->_root) { v->lc->parent = NULL; } }
	else
	{
		BinNodePosi lTree = this->_root->lc; lTree->parent=NULL; this->_root->lc = NULL;
		this->_root = this->_root->rc; this->_root->parent = NULL;
		this->search(w->data);
		this->_root->lc = lTree; lTree->parent = this->_root;
		this->_size--;
	}
	//delete v; delete w;
	if (this->_root) this->updateHeight(this->_root);
	return true;
}


#endif // !SPLAY_REMOVE_H

