#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string m_string;


	for (int i = 0; i != argc; ++i) {
		m_string  +=  string(argv[i]) + " ";
	}
	//cout << endl;
	cout << m_string << endl;
	cout <<"success!"<< endl;

	system("pause");
}