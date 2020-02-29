#ifndef SORT_H
#define SORT_H

#include "list.h"

template <typename T>
void List<T>::sort(ListNodePosi p, int n) {
	//selectionSort(p, n);
	//insertionSort(p, n);
	switch (rand()%3)
	{
		case 1: insertionSort(p, n); break;
		case 2 : selectionSort(p, n); break;
		default: {std::cout << "归并排序" << std::endl; mergeSort(p, n); break; }
	}
}

template <typename T>
void List<T>::insertionSort(ListNodePosi p, int n) {
	std::cout << "插入排序" << std::endl;
	int size = 0;
	while (0<n)
	{
		ListNodePosi max = search(p->data, size, p);
		insertSucc(max, p->data);
		p = p->succ;
		remove(p->pred);
		++size;
		--n;
	}
}


template<typename T>
void List<T>::selectionSort(ListNodePosi p, int n) {
	std::cout << "选择排序" << std::endl;
	ListNodePosi head = p->pred;
	ListNodePosi trail = p;
	for (int i = 0; i < n; ++i) { trail = trail->succ; }
	while (1 < n)
	{
		ListNodePosi max = selectMax(p, n);

		//单纯的列表数据交换，没有用插入和删除操作
		T tmp = trail->pred->data;
		trail->pred->data = max->data;
		max->data = tmp;

		trail = trail->pred;
		n--;
	}
} 


template <typename T>
void List<T>::mergeSort(ListNodePosi p, int n) {
	
	if (n < 2) return;//平凡情况
	int mid = n >> 1;
	ListNodePosi q = p;
	ListNodePosi trail = p;
	for (int i = 0; i < mid;++i) { q = q->succ; }     //p~q
	for (int i = 0; i < n;++i) { trail = trail->succ; } //q~trail
	mergeSort(p, mid);
	mergeSort(q, n - mid);
	merge(p, mid, *this, q, n - mid);
}



template <typename T>
ListNodePosi selectMax(ListNodePosi p, int n) {
	ListNodePosi maxPosi = p;
	
	for (int i = 0; i < n; ++i) {
		//T maxValue = maxPosi->data;
		//ListNodePosi maxPosi = p;
		if ((maxPosi->data) <= (p->data)) 
		{
			maxPosi = p; 
			//p = p->succ;
		}
		p = p->succ;
		
	}
	return maxPosi;
}

template <typename T>
void List<T>::merge(ListNodePosi& p,int n, List<T>& L, ListNodePosi q, int m) { 
	//p为引用的作用，每次merge完p的位置会往后移。
	//把merge完的列表返回跟上一层的列表继续merge，需要把p重新移动到哨兵头节点的下一位
	
	//与Vector相同思想的实现
	ListNodePosi pp = p->pred;
	while ((0 < n) && (0 < m)) {
		if (p->data > q->data) {
			insertPred(p, q->data);
			q = q->succ;
			L.remove(q->pred);
			--m;
		}
		else
		{
			p = p->succ;
			--n;
		}
	}
	p = pp->succ;

	//官方实现
	//ListNodePosi pp = p->pred; //存下前驱，以便更新列表的首节点
	//while (0<m)
	//{
	//	if ((0 < n) && (p->data <= q->data)) {
	//		if (q == (p = p->succ)) {
	//			break;
	//		}
	//		n--;
	//	}
	//	else
	//	{
	//		insertPred(p, L.remove((q = q->succ)->pred));
	//		m--;
	//	}
	//}
	//p = pp->succ;
}

#endif // !SORT_H

