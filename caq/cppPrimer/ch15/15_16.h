#ifndef LIMIT_H
#define LIMIT_H

#include "15_15.h"


class Limit_quote: public Disc_quote {

public:
	Limit_quote() = default;
	Limit_quote(const string& book, double p, size_t min, size_t max, double dist) :
		Disc_quote(book, p, min, dist), max_qty(max) 
	{
	}
	double net_price(size_t cnt) const final override {
		if (cnt > max_qty) return max_qty * (1 - discount) * price + (cnt - max_qty) * price;
		else if (cnt >= quantity) return cnt * (1 - discount) * price;
		else return cnt * price;
	}

private:
	size_t max_qty = 0;
};

#endif // !LIMIT_H

