<<<<<<< HEAD
#include <map>
#include <string>
#include <iostream>

using std::string;

int main()
{
	std::multimap<string, string> families;
	for (string lastName, childName; std::cin >> childName >> lastName;
		families.emplace(lastName, childName));
	for (const auto& s : families)
		std::cout << s.second << " " << s.first << std::endl;

	system("pause");
=======
#include <map>
#include <string>
#include <iostream>

using std::string;

int main()
{
	std::multimap<string, string> families;
	for (string lastName, childName; std::cin >> childName >> lastName;
		families.emplace(lastName, childName));
	for (const auto& s : families)
		std::cout << s.second << " " << s.first << std::endl;

	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}