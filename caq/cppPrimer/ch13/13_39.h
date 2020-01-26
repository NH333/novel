#include <string>
using std::string;

class StrVec {
public:
	StrVec() :elements(nullptr), first_free(nullptr), cap(nullptr) {}
	StrVec(const StrVec&);
	StrVec(std::initializer_list<string>);
	StrVec& operator=(const StrVec&);
	~StrVec();

	void push_back(const string&);
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	string* begin() const { return elements; }
	string* end() const { return first_free; }

private:
	static std::allocator<string> alloc;
	void chk_n_alloc() {
		if (size() == capacity())
			reallocate();
	};
	std::pair<string*, string*> alloc_n_copy(const string*, const string*);
	void free();
	void reallocate();
	void range_initialize(const std::string*, const std::string*);
	string *elements;
	string *first_free;
	string *cap;
};