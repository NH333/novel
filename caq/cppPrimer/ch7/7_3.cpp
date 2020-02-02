#include "7_2.h"
#include <iostream>

using namespace std;
int main()
{
	Sales_data total;
	if (cin >> total.bookNo >> total.revenue >> total.units_sold) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.revenue >> trans.units_sold) {
			if (trans.isbn() == total.isbn()) {
				total.combine(trans);
			}
			else {
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				total = trans;
			}
		}
	}
	else {
		std::cerr << "No data?!" << std::endl;
	}
	
	system("pause");
}