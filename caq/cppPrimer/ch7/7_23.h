

#include  <string>
#include <iostream>

class Screen
{
public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht*wd, ' ') {}
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}

	char get() const { return contents[cursor]; }
	char get(pos r, pos c) const { return contents[r*width + c]; }
	Screen& move(pos r, pos c);
	Screen& set(char);
	Screen& set(pos, pos, char);

	const Screen& display(std::ostream& os) const {
		do_display(os);
		return *this;
	}
	Screen& display(std::ostream& os) {
		do_display(os);
		return *this;
	}

private:
	pos height = 0;
	pos width = 0;
	pos cursor = 0;
	std::string contents;

	void do_display(std::ostream& os) const { os << contents; }
	//double avg_screen() const;
};

/*
inline double Screen::avg_screen() const {
	return;
}
*/

inline Screen& Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline Screen& Screen::set(pos r, pos col, char ch) {
	contents[r*width + col] = ch;
	return *this;
}

inline Screen& Screen::move(pos r, pos c) {
	cursor = r * width + c;
	return *this;
}