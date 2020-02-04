#include<iostream>
#include<string>

using namespace std;

istream& func(istream &is) {
	string input;
	while (is >> input) {
		cout << input << endl;
	}
	
	is.clear();
	return is;
}

int main() {
	istream& is = func(cin);
	cout << is.rdstate() << endl;
	
	//return 0;
	system("pause");
}