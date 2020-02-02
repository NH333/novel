#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	const char* str = "abcdsahjk";
	cout << str << endl;
	vector<int> m_vector;
	int tmp;
	int sum;
	int len;

	while (cin >> tmp) {
		m_vector.push_back(tmp);
	}

	/*
	//第一小问
	for (auto iter = m_vector.begin(); (iter+1) != m_vector.end(); iter++) {
		sum = *iter + *(iter + 1);
		cout << sum << endl;
	}
	*/

	//第二小问
	len = m_vector.size();
	int num = 1;
	auto another_iter=m_vector.end();
	for (auto iter = m_vector.begin(); iter != (m_vector.end()-len/2); iter++) {
		another_iter = m_vector.end()-num;
		
		if (another_iter == iter) {
			cout << *iter << endl;
		}
		else
		{
			cout << *iter + *another_iter << endl;
		}
		num += 1;
	}
	



	system("pause");
}

