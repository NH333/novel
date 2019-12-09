#include <string>
using std::string;

class Account {
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
private:
	string owner;
	double amount;
	static double interestRate;
	static constexpr double todayRate = 7.1;
	static double initRate() { return todayRate; }
};

void Account::rate(double newRate) {
	interestRate = newRate;
}
double Account::interestRate = initRate();
