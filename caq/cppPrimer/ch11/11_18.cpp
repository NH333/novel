<<<<<<< HEAD
#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, size_t> word_count;
	word_count["anqi"] = 1;
	

	std::map<std::string, size_t>::const_iterator map_it = word_count.cbegin();
	
	while (map_it != word_count.cend()) {
		
		std::cout << map_it->first << " occurs " << map_it->second << " times"
			<< std::endl;
		++map_it; 
	}

	system("pause");
=======
#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, size_t> word_count;
	word_count["anqi"] = 1;
	

	std::map<std::string, size_t>::const_iterator map_it = word_count.cbegin();
	
	while (map_it != word_count.cend()) {
		
		std::cout << map_it->first << " occurs " << map_it->second << " times"
			<< std::endl;
		++map_it; 
	}

	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}