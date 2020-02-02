#ifndef QUOTE_BULK_H
#define QUOTE_BULK_H

#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Quote {
public:
	Quote() {
		cout << "Quote 构造函数 无参数" << endl;
	}
	Quote(const string& book, double sales_price) :
		bookNo(book), price(sales_price)
	{
		cout << "Quote 构造函数 两个参数" << endl;
	}

	Quote(const Quote& rhs) {
		bookNo = rhs.bookNo;
		price = rhs.price;
		cout << "Quote 拷贝构造函数 " << endl;
	}

	Quote(Quote&& rhs)  noexcept {
		bookNo = std::move(rhs.bookNo);
		price = std::move(rhs.price);
		cout << "Quote 移动拷贝构造函数" << endl;
	}

	Quote& operator=(const Quote& rhs) {
		cout << "Quote 赋值运算符" << endl;
		bookNo = rhs.bookNo;
		price = rhs.price;
		return *this;
	}

	Quote& operator=(Quote&& rhs) noexcept {
		cout << "Qoute 移动赋值运算符"<<endl;
		price = std::move(rhs.price);
		bookNo = std::move(rhs.bookNo);
		return *this;
	}

	inline string isbn() const { return bookNo; }

	inline virtual double net_price(std::size_t n) const { return n * price; }
	virtual ~Quote() {
		cout << "Quote 析构函数 " << endl;
	}

	virtual Quote* clone() const & { return new Quote(*this); }
	virtual Quote* clone() && { return new Quote(std::move(*this)); }

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


class Bulk_quote : public Quote {
public:
	Bulk_quote() {
		cout << "Bulk_quote 构造函数 无参数" << endl;
	}
	Bulk_quote(string const& book, double p, size_t qty, double disc) :
		Quote(book, p), min_qty(qty), discount(disc)
	{
		cout << "Bulk_quote 构造函数 四个参数" << endl;
	}

	Bulk_quote(const Bulk_quote& rhs) : Quote(rhs), min_qty(rhs.min_qty), discount(rhs.discount) {
		cout << "Bulk_quote 拷贝构造函数" << endl;
	}

	Bulk_quote& operator=(const Bulk_quote& rhs) {
		cout << "Bulk_quote  赋值运算符" << endl;
		Quote::operator=(rhs);
		min_qty = rhs.min_qty;
		discount = rhs.discount;
		return *this;
	}

	Bulk_quote(Bulk_quote &&rhs) noexcept : Quote(rhs), min_qty(std::move(rhs.min_qty)),
		discount(std::move(rhs.discount)) {
		cout << "Bulk_quote 移动拷贝构造函数" << endl;
	}

	Bulk_quote& operator=(Bulk_quote &&rhs) noexcept {
		cout << "Bulk_quote 移动赋值运算符 " << endl;
		Quote::operator=(rhs);
		min_qty = std::move(rhs.min_qty);
		discount = std::move(rhs.discount);
		return *this;
	}

	virtual ~Bulk_quote() {
		cout << "Bulk_quote 析构函数" << endl;
	}

	inline virtual double net_price(size_t cnt) const override {
		if (cnt >= min_qty) {
			return cnt * (1 - discount)*price;
		}
		else
		{
			return cnt * price;
		}
	}

	virtual Bulk_quote* clone() const & { return new Bulk_quote(*this); }
	virtual Bulk_quote* clone() && { return new Bulk_quote(std::move(*this)); }

private:
	size_t min_qty = 0;
	double discount = 0.0;
};


#endif // !QUOTE_BULK_H

