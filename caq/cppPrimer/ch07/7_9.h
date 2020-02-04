#ifndef 7_9_H
#define 7_9_H

#include <stirng>
#include <iostream>


using std::string;

struct Person
{
	const string& getName() const { return name; }
	const string& getAddress() const { return address; }

	string name;
	string address;

};

std::istream& read(std::istream is, Person& person)
{
	is >> person.name >> person.address;
	if (!is) person = Person();
	return is;
}

std::ostream& print(std::ostream& os, const Person& person)
{
	os << person.name << " " << person.address;
	return os;
}
#endif // !7_9_H




