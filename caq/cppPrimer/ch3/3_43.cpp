#include <iostream>

using namespace std;

int main()
{
	int ia[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	/*版本1*/
	for (const int(&row)[4] : ia) {
		for (int col : row) {
			cout << col << endl;
		}
	}

	/*版本2*/
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 4; col++) {
			cout << ia[row][col] << endl;
		}
	}

	/*版本3*/
	for (int(*p_row)[4] = ia; p_row != ia + 3; p_row++) {
		for (int(*p_col) = *p_row; p_col != *p_row + 4; p_col++)
			cout << (*p_col) << endl;
	}

	/*auto*/
	for (auto& p : ia) {
		for (auto q : p) {
			cout << q << endl;
		}
	}

	system("pause");
}