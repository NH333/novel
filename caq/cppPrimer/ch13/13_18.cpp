#include "13_18.h"

Employee::Employee() {
	id = increase_num++;
}

Employee::Employee(const std::string& name_) {
	name = name_;
	id = increase_num++;
}