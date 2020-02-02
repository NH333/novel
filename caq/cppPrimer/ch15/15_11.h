#ifndef QUOTE_H
#define QUOTE_H

#include <string>
#include <iostream>

using std::string;

class Quote {
public:
	Quote() = default;
	Quote(const string& book, double sales_price) :
		bookNo(book), price(sales_price)
	{
	}
	string isbn() const { return bookNo; }

	virtual double net_price(std::size_t n) const { return n * price; }
	virtual void debug() const { std::cout << "data members: \n" << "\tbookNo: " << bookNo << "\tprice: " << price << std::endl; }

	virtual ~Quote() = default;

	//virtual double print_total(std::ostream& os, const Quote& item, size_t n) ;

private:
	string bookNo;

protected:
	double price = 0.0;
};

double print_total(std::ostream& os, Quote const& item, size_t n) {
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
	return ret;
}

#endif
