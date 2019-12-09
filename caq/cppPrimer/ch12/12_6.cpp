#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;



vector<int>* ReadVector(vector<int>* p) {
	int num;

	while (cin>>num) {
		p->push_back(num);
	}

	return p;
}

void CoutVector(vector<int> m_vector) {
	for (auto i : m_vector) {
		cout << i << std::endl;
	}
}

vector<int>* GeneratorVector() {
	vector<int>* p_vector = new vector<int>();
	return p_vector;
}

int main() {
	vector<int>* p_vector = GeneratorVector();
	ReadVector(p_vector);
	CoutVector(*p_vector);
	delete p_vector;
	system("pause");
}