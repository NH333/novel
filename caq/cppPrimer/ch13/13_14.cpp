#include <iostream>

class numbered {
public:
	numbered()
	{
		static int unique = 10;
		mysn = unique++;
	}

	numbered(const numbered& n) {
		mysn = n.mysn + 1; 
	}

	int mysn;
};

void f(numbered s)
{
	std::cout << s.mysn << std::endl;
}

int main()
{
	numbered a;
	numbered b = a;
	numbered c = b;
	f(a);
	f(b);
	f(c);
	system("pause");
}