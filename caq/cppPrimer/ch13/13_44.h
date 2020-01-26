#include <memory>
#include <fstream>

class String {
public:
	String() : String("") {}
	String(const char*);
	String(const String&);
	String& operator=(const String&);
	String operator+(const String& rhs);
	~String();
	String Add(const String& rhs);
	//friend std::ofstream& operator<<(std::ofstream& out, const String& str);

	//String Add(const String& rhs) {
	//	return 
	//}

	const char* c_str() const { return elements; }
	size_t size() const { return end - elements; }
	size_t length() const { return end - elements - 1; }
	

private:
	std::pair<char*, char*> alloc_n_copy(const char*, const char*);
	//std::pair<char*, char*> _add(const char*, const char*);
	void range_initializer(const char*, const char*);
	void free();

private:
	char* elements;
	char* end;
	std::allocator<char> alloc;
};
