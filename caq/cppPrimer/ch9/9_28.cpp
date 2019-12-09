<<<<<<< HEAD
#include <iostream>
#include <forward_list>
#include <string>

using std::forward_list;
using std::string;
using std::cout;
using std::endl;

void func(forward_list<string>& flst, string str1, string str2) {
	//forward_list<string> result_flst;
	auto pre = flst.before_begin();
	auto curr = flst.begin();
	while (curr != flst.end())
	{
		if (*curr == str1) {
			flst.insert_after(curr, str2);
			return;
		}
		else
		{
			pre = curr;
			++curr;
		}
	}
	
	flst.insert_after(pre, str2);
	return;
}

int main()
{
	string str1 = "anqi";
	string str2 = "handsome";
	forward_list<string> flst = { "chen","anqi","!" };
	func(flst, str1, str2);

	for (auto i = flst.begin(); i != flst.end(); ++i) {
		cout << *i<<" " ;
	}
	cout << endl;

	system("pause");

=======
#include <iostream>
#include <forward_list>
#include <string>

using std::forward_list;
using std::string;
using std::cout;
using std::endl;

void func(forward_list<string>& flst, string str1, string str2) {
	//forward_list<string> result_flst;
	auto pre = flst.before_begin();
	auto curr = flst.begin();
	while (curr != flst.end())
	{
		if (*curr == str1) {
			flst.insert_after(curr, str2);
			return;
		}
		else
		{
			pre = curr;
			++curr;
		}
	}
	
	flst.insert_after(pre, str2);
	return;
}

int main()
{
	string str1 = "anqi";
	string str2 = "handsome";
	forward_list<string> flst = { "chen","anqi","!" };
	func(flst, str1, str2);

	for (auto i = flst.begin(); i != flst.end(); ++i) {
		cout << *i<<" " ;
	}
	cout << endl;

	system("pause");

>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}