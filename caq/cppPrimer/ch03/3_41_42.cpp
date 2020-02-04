#include <iostream>
#include <vector>

using namespace std;

int main() {
	int m_arr[] = {0,1,2,3,10,5,6,7,8,9};
	int m_arr_copy[10];

	/*用整型数组初始化一个vector对象*/
	vector<int> m_vector(begin(m_arr), end(m_arr));
	for (auto i : m_vector) {
		cout << i << endl;
	}

	/*将vector对象拷贝给整型数组*/
	for (int i = 0; i != m_vector.size(); i++) {
		m_arr_copy[i] = m_vector[i];
	}
	for (auto i : m_arr_copy) {
		cout << i << endl;
	}


	system("pause");
}