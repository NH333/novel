#include "15_26.h"
#include "15_30.h"
#include <vector>
#include <memory>
using std::vector;

int main() {

	Basket test;
	test.add_item(std::make_shared<Quote>("0-201-82470-1", 50));
	test.add_item(std::make_shared<Bulk_quote>("0-201-82470-1", 50, 10, .25));
	test.total_receipt(std::cout);
	system("pause");

	//vector<Quote> basket;
	//basket.push_back(Quote("0-201-82470-1", 50));
	//basket.push_back(Bulk_quote("0-201-54848-8", 50, 10, .25));
	//cout << basket[0].net_price(15) << endl;
	//cout << basket.back().net_price(15) << endl;
	//vector<std::shared_ptr<Quote>> pbasket;
	//pbasket.push_back(std::make_shared<Quote>("0-201-82470-1", 50));
	//pbasket.push_back(std::make_shared<Bulk_quote>("0-201-82470-1", 50,10,.25));
	//cout << pbasket[0]->net_price(15) << endl;
	//cout << pbasket.back()->net_price(15) << endl;


	system("pause");
}