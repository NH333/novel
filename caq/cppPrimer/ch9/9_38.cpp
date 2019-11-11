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
}