#ifndef STACK_PREMUTATION_JUDGE
#define STACK_PREMUTATION_JUDGE

#include "stack_list.h"
template <typename T>
bool stackPermuJudge(StackList<T> simulateB, StackList<T> inputA) {
	StackList<T> S;
	StackList<T> tmpB;
	while (simulateB.size()) {
		tmpB.push(simulateB.pop());
	}
	while (tmpB.size())
	{
		if (inputA.size()) {
			S.push(inputA.pop());
			if (S.top() == tmpB.top()) { tmpB.pop(); S.pop(); }
		}
		else
		{
			std::cout << "不是栈混洗" << std::endl;
			return false;
		}	
	}
	std::cout << "是栈混洗" << std::endl;
	return true;

}

#endif // !STACK_PREMUTATION_JUDGE

