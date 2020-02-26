#ifndef LIST_INIT_H
#define LIST_INIT_H

#include "list.h"
#include <iostream>

template <typename T>
void List<T>::init() {
	header = new ListNode<T>;
    trailer = new ListNode<T>;
	header->pred = NULL; trailer->succ = NULL;
	header->succ = trailer; trailer->pred = header;
	//std::cout << header->succ;
	_size = 0;
}

#endif
