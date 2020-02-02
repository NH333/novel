#include <iostream>
#include <vector>

using namespace std;
int main() {
	int m_arr[10];
	
	for (int i = 0; i < 10; i++) {
		m_arr[i] = i;
		cout << "m_arr[" << i << "]: " << m_arr[i] << endl;
	}

	/*改写vector 并实现拷贝*/
	vector<int> arr;
	for (int i = 0; i < 10; i++) {
		arr.push_back(i);
		cout << "arr[" << i << "]: " << arr[i] << endl;
	}
	vector<int> copy_arr = arr;
	for (int i = 0; i < 10; i++) {
		cout << "copy_arr[" << i << "]: " << copy_arr[i] << endl;
	}

	system("pause");
}