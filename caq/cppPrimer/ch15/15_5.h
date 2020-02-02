#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <iostream>
#include "15_3.h"

class Bulk_quote : public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(string const& book, double p, size_t qty, double disc) :
		Quote(book, p), min_qty(qty), discount(disc) 
	{
	}

	virtual double net_price(size_t cnt) const override {
		if (cnt >= min_qty) {
			return cnt * (1 - discount)*price;
		}
		else
		{
			return cnt * price;
		}
	}

private:
	size_t min_qty = 0;
	double discount = 0.0;
};

#endif // !BULK_QUOTE_H