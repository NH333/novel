#include <iostream>
#include <string>

class Employee {
public:
	Employee();
	Employee(const std::string& name_);
	Employee(const Employee&) = delete;
	Employee& operator=(const Employee&) = delete;

	const int id_() const { return id; }

private:
	int id;
	std::string name;
	static int increase_num;
};