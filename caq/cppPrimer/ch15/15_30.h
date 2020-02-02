#ifndef BASKET_H
#define BASKET_H

#include <memory>
#include <set>
#include "15_26.h"

class Basket {
public:
	Basket() = default;
	void add_item(const std::shared_ptr<Quote> &sale) { items.insert(sale); }
	void add_item(const Quote &sale) { items.insert(std::shared_ptr<Quote>(sale.clone())); }
	void add_item(Quote &&sale) { items.insert(std::shared_ptr<Quote>(std::move(sale).clone())); }
	inline double total_receipt(std::ostream&) const;
	
private:
	static bool compare(const std::shared_ptr<Quote>& lhs, const std::shared_ptr<Quote>& rhs) {
		return lhs->isbn() < rhs->isbn();
	}
	std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{ compare };


};


inline double Basket::total_receipt(std::ostream &os) const {
	auto sum = 0.0;
	for (auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter)) {
		sum += print_total(os, **iter, items.count(*iter));
	}
	os << "Total Sale: " << sum << std::endl;
	return sum;
}
#endif // !BASKET_H

