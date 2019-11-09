#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> m_vector = { 2,4,5,6 };
	cout << "at(0): " << m_vector.at(0) << endl;
	cout << "[0]: " << m_vector[0] << endl;
	cout << "front: " << m_vector.front() << endl;
	cout << "begin: " << *(m_vector.begin()) << endl;

	system("pause");
}