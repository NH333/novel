<<<<<<< HEAD
#include <iostream>
#include <forward_list>

using std::forward_list;
using std::cout;
using std::endl;

int main()
{
	forward_list<int> flst = { 0,1,2,3,4,5,6,7,8,9 };
	auto prev = flst.before_begin();
	auto curr = flst.begin();

	while (curr != flst.end())
	{
		if (*curr % 2)
			curr = flst.erase_after(prev);
		else
		{
			cout << *curr << endl;
			prev = curr;
			++curr;
		}
	}
	system("pause");
=======
#include <iostream>
#include <forward_list>

using std::forward_list;
using std::cout;
using std::endl;

int main()
{
	forward_list<int> flst = { 0,1,2,3,4,5,6,7,8,9 };
	auto prev = flst.before_begin();
	auto curr = flst.begin();

	while (curr != flst.end())
	{
		if (*curr % 2)
			curr = flst.erase_after(prev);
		else
		{
			cout << *curr << endl;
			prev = curr;
			++curr;
		}
	}
	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}