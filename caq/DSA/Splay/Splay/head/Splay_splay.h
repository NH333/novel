#ifndef SPLAY_SPALY_H
#define SPLAY_SPLAY_H

#include "Splay.h"
template <typename T> inline
void attachAsLChild(BinNodePosi p, BinNodePosi lc) {
	p->lc = lc;
	if (lc) lc->parent = p;
}
template <typename T> inline
void attachAsRChild(BinNodePosi p, BinNodePosi rc) {
	p->rc = rc;
	if (rc) rc->parent = p;
}


template <typename T>
BinNodePosi Splay<T>::splay(BinNodePosi v) {
	if (!v) return NULL;
	BinNodePosi p; BinNodePosi g;
	while ((p = v->parent) && (g = p->parent)) {
		BinNodePosi gg = g->parent;
		if (IsLChild(*v)) {
			//gzig-pzig
			if (IsLChild(*p)) 
			{
				attachAsLChild(g, p->rc); attachAsRChild(p, g);
				attachAsLChild(p, v->rc); attachAsRChild(v, p);
			}
			//pzig-gzag
			else
			{
				attachAsLChild(p, v->rc); attachAsRChild(v, p);
				attachAsRChild(g, v->lc); attachAsLChild(v, g);
			}
		}
		else
		{
			//gzag-pzag
			if (IsRChild(*p)) 
			{
				attachAsRChild(g, p->lc); attachAsLChild(p, g);
				attachAsRChild(p, v->lc); attachAsLChild(v, p);
 				
			}
			//pzag-gzig
			else
			{
				attachAsRChild(p, v->lc); attachAsLChild(v, p);
				attachAsLChild(g, v->rc); attachAsRChild(v, g);
			}
		}
		if (!gg) v->parent = NULL;
		else
		{
			(gg->lc == g) ? attachAsLChild(gg, v) : attachAsRChild(gg, v);
		}
		
		this->updateHeight(g);
		this->updateHeight(p);
		this->updateHeight(v);
	}

	//奇数时
	if (p = v->parent) {
		if (IsLChild(*v)) { attachAsLChild(p, v->rc); attachAsRChild(v, p); }
		else
		{
			attachAsRChild(p, v->lc); attachAsLChild(v, p);
		}
		this->updateHeight(p); this->updateHeight(v);
	}
	v->parent = NULL; return v;
	
}

#endif
