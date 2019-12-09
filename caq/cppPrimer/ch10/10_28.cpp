#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>

using std::vector;
using std::list;
using std::copy;

int main() {
	vector<int> m_vector = { 1,2,3,4,5,6,7,8,9 };
	list<int> m_list1, m_list2, m_list3;
	copy(m_vector.begin(), m_vector.end(),std::inserter(m_list1,m_list1.end()) );
	copy(m_vector.begin(), m_vector.end(), std::front_inserter(m_list2));
	copy(m_vector.begin(), m_vector.end(), std::back_inserter(m_list3));

	system("pause");

}