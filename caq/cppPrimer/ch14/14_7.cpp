#include "13_44.h"
#include <algorithm>
#include <iostream>
#include <string.h>

std::pair<char*, char*> String::alloc_n_copy(const char* b, const char* e) {
	auto str = alloc.allocate(e - b);
	return { str, std::uninitialized_copy(b,e,str) };
}

void String::range_initializer(const char* first, const char* last) {
	auto newstr = alloc_n_copy(first, last);
	elements = newstr.first;
	end = newstr.second;
}

String::String(const char* s) {
	char* sl = const_cast<char*>(s);
	while (*sl) ++sl;
	range_initializer(s, ++sl);
}

String::String(const String& rhs) {
	range_initializer(rhs.elements, rhs.end);
	std::cout << "kaobei gouzao" << std::endl;
}

void String::free() {
	char* p = elements;
	if (p!=end) {
		alloc.destroy(p);
		++p;
	}
	alloc.deallocate(elements, end - elements);
}

String::~String() {
	free();
}

String& String::operator=(const String& rhs) {
	//赋值必须是返回左值的引用，必须释放掉原来指向的内存内容。
	//而拷贝则不同。
	auto newstr = alloc_n_copy(rhs.elements, rhs.end);
	free();         
	elements = newstr.first;
	end = newstr.second;
	std::cout << "kaobei fuzhi" << std::endl;
	return *this;
}

String String::Add(const String& rhs) {
	String newstr;
	auto str = alloc.allocate(length() + rhs.size());
	auto tmp = std::uninitialized_copy(elements, end, str);
	newstr.elements = str;
	newstr.end = std::uninitialized_copy(rhs.elements, rhs.end, --tmp);
	//tmp = rhs.elements;
	//newstr.end = tmp+ rhs.size();
	//str = end;
	//std::uninitialized_copy(rhs.elements, rhs.end, str);
	//newstr.end = str;

	return newstr;
}

String String::operator+(const String& rhs) {
	return String::Add(rhs);
}

/**/

std::ostream& operator<<(std::ostream& os, const String& s)
{
	auto c = s.c_str();
	while (*c) os << *c++;
	return os;
}