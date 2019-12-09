<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<string> m_vector;
	string word;
	auto iter = m_vector.begin();
	while (cin >> word) {
		iter = m_vector.insert(iter, word);
	}
	
	for (auto i = m_vector.cbegin(); i != m_vector.cend(); ++i) {
		cout << *i << endl;
	}

	system("pause");
=======
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<string> m_vector;
	string word;
	auto iter = m_vector.begin();
	while (cin >> word) {
		iter = m_vector.insert(iter, word);
	}
	
	for (auto i = m_vector.cbegin(); i != m_vector.cend(); ++i) {
		cout << *i << endl;
	}

	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}