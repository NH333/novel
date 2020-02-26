#ifndef LIST_H
#define LIST_H

#include "listNode.h"
#include <assert.h>

template <typename T>
class List
{
private:
	int _size; ListNodePosi header; ListNodePosi trailer;

protected:
	void init();
	void copyNodes(ListNodePosi, int);

public:
	//构造函数
	//List();
	List() { init(); }
	List(const List<T>& L);
	List(const List<T>& L, Rank r, int n);
	List(ListNodePosi p, int n);
	

	//只读访问
	T& operator[](Rank n) const;
	ListNodePosi first() const { return header->succ; }
	ListNodePosi last() const { return trailer->pred; }
	
	ListNodePosi find(const T& e) const { return find(e, _size, trailer); }
	ListNodePosi find(const T& e, int n, ListNodePosi p) const;



	//可写访问
	ListNodePosi insertAsFirst(const T& e);
	ListNodePosi insertAsLast(const T& e);
	ListNodePosi insertSucc(ListNodePosi p, const T& e);
	ListNodePosi insertPred(ListNodePosi p, const T& e);
};




#endif // !LIST_H

