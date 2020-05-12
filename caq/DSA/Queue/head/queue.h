#ifndef QUEUE_H
#define QUEUE_H

#include "../../../list/list/head/list.h"

template<typename T> class Queue : public List<T> {
public:
	void enqueue(const T& e) { List<T>::insertAsLast(e); }
	T dequeue() { return List<T>::remove(List<T>::first()); }
	T& front() { return List<T>::first()->data(); }
};

#endif // !QUEUE_H

