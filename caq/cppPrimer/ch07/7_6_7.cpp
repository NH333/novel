#include "7_6.h"
#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
	Sales_data total;
	if (read(cin,total))
	{
		Sales_data trans;
		while (read(cin,trans))
		{
			if (total.isbn() == trans.isbn())
				add(total,trans);
			else
			{
				print(cout, total);
				total = trans;
			}
		}
		print(cout,total);
	}
	else
	{
		std::cerr << "No data?!" << std::endl;
		return -1;
	}

	system("pause");
}