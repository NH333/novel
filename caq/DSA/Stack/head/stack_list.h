#ifndef STACK_LISH_H
#define STACK_LISH_H

#include "../../../list/list/head/list.h"

template <typename T>
class StackList :public List<T> {
public:
	void push(const T& e) { this->insertAsLast(e); }
	T pop() { return this->remove(List<T>::last()); }
	T& top() { return List<T>::last()->data; }
private:

};


#endif // !STACK_LISH_H
