<<<<<<< HEAD
#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int CountWords(const vector<string> m_vec, int sz) {
	int count = 0;
	for (const auto& i : m_vec) {
		if (i.size()<=sz)
		{
			++count;
		}
	}
	return count;
}

int main() {
	vector<string> m_vector = { "chenanqi","anqi","aa","1234567","12" };
	int sum = CountWords(m_vector, 6);
	cout << sum << endl;
	system("pause");
=======
#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int CountWords(const vector<string> m_vec, int sz) {
	int count = 0;
	for (const auto& i : m_vec) {
		if (i.size()<=sz)
		{
			++count;
		}
	}
	return count;
}

int main() {
	vector<string> m_vector = { "chenanqi","anqi","aa","1234567","12" };
	int sum = CountWords(m_vector, 6);
	cout << sum << endl;
	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}