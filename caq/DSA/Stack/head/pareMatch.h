#ifndef PARE_MATCH_H
#define PARE_MATCH_H

#include "stack_list.h"
bool pareMatch(const char exp[], int lo, int hi) {
	StackList<char> S;
	while (lo != hi) {
		if (exp[lo] == '(') 
		{ 
			S.push(exp[lo]); ++lo; 
		}

		if (exp[lo] == ')') 
		{
			if (S.pop() != '(') {
				return false;
			}
			else
			{
				++lo;
			}
		}
		
	}
	if (S.size() != 0) { return false; }
	return true;
}

#endif // !PARE_MATCH_H

