#include "15_5.h"
#include "15_3.h"

int main() {
	Quote quote("0-201-78345-X", 23.8);
	print_total(std::cout, quote, 3);
	Bulk_quote bulk_quote("0-201-78345-X", 23.8, 3, 0.5);
	print_total(std::cout, bulk_quote, 4);

	system("pause");
}