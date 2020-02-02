#include <iostream>
#include <string>
#include <vector>

template <typename Iter ,typename T> 
Iter myfind(Iter begin, Iter end, const T& obj) {
	for (; begin != end; ++begin) {
		if (*begin == obj) { return begin; }
	}
	return end;
}

int main() {
	std::vector<int> a = { 2,3,4,5,7 };
	auto p = myfind(a.begin(), a.end(), 4);
	std::cout << *p << std::endl;

	system("pause");

}