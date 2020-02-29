#ifndef LIST_H
#define LIST_H

#include "listNode.h"
#include <assert.h>
#include <ctime>
#include <cstdlib>

template <typename T>
class List
{
private:
	int _size; ListNodePosi header; ListNodePosi trailer;

protected:
	void init();
	void copyNodes(ListNodePosi, int);
	int clear();  //用于析构

	void insertionSort(ListNodePosi p, int n);
	void selectionSort(ListNodePosi p, int n);
	void mergeSort(ListNodePosi p, int n);


public:
	//构造函数
	//List();
	List() { init(); }
	List(const List<T>& L);
	List(const List<T>& L, Rank r, int n);
	List(ListNodePosi p, int n);

	//析构
	~List() { clear(); delete header; delete trailer; }
	

	//只读访问
	T& operator[](Rank n) const;
	ListNodePosi first() const { return header->succ; }
	ListNodePosi last() const { return trailer->pred; }
	
	ListNodePosi find(const T& e) const { return find(e, _size, trailer); }
	ListNodePosi find(const T& e, int n, ListNodePosi p) const;

	ListNodePosi search(const T& e, int n, ListNodePosi p) const;

	int size() { return _size; }



	//可写访问
	ListNodePosi insertAsFirst(const T& e);
	ListNodePosi insertAsLast(const T& e);
	ListNodePosi insertSucc(ListNodePosi p, const T& e);
	ListNodePosi insertPred(ListNodePosi p, const T& e);

	T remove(ListNodePosi p);
	int deduplicate();

	template <typename VST>
	void traverse(VST&);

	void sort(ListNodePosi p, int n); //排序接口
	void merge(ListNodePosi& p, int n, List<T>& L, ListNodePosi q, int m);
};




#endif // !LIST_H

