#include <iostream>

using std::cout;
using std::endl;

int main()
{
	
	int local_val = 7;
	auto decrement_to_zero = [&local_val]() {
		if (local_val == 0)
			return true;
		else {
			--local_val;
			return false;
		}
	};

	while (!decrement_to_zero()) cout << local_val << endl;
	system("pause");
}