
#include <iostream>
template <typename T> int compare(const T& v1, const T& v2) {
	if (v1 < v2) {
		return -1;
	}
	if (v2 < v1) {
		return 1;
	}
	return 0;
}

int main() {
	int a = 1;
	int b = 0;
	std::cout<<compare(a, b)<<std::endl;

	system("pause");
}