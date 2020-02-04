<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int word;
	vector<int> m_vector;

	while (cin >> word) {
		m_vector.push_back(word);
		cout << m_vector.capacity() << endl;
	}

	return 0;
=======
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int word;
	vector<int> m_vector;

	while (cin >> word) {
		m_vector.push_back(word);
		cout << m_vector.capacity() << endl;
	}

	return 0;
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}