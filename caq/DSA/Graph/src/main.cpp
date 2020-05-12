#include <iostream>
#include <string>
#include "../head/GraphMatrix.h"
using std::string;

int main() 
{
	GraphMatrix<char, string> g;
	Edge<string> e1("AB", 1);

	g.insert('A');
	g.insert('B');

	g.insert("A->B", 1, 0, 1);



	system("pause");
}