#include <string>
#include <iostream>

struct Sales_data
{
	std::string const& isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

std::istream &read(std::istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = (price * item.units_sold);
	return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " <<item.revenue<< std::endl;
	return os;
}

Sales_data add(Sales_data &item1, Sales_data &item2)
{
	item1.combine(item2);
	return item1;
}