<<<<<<< HEAD
#include <fstream>
#include <iterator>
#include <algorithm>
#include <iostream>

int main(int argc, const char** argv) {
	std::cout << "---" << std::endl;
	if (argc!=4)
	{
		return -1;
	}
	

	std::ifstream ifs(argv[1]);
	std::ofstream ofs_odd(argv[2]), ofs_even(argv[3]);

	std::istream_iterator<int> num(ifs), eof;
	std::ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

	while (num!=eof)
	{
		if ((*num) % 2 == 0) {
			out_even = *num;
			++out_even;
		}
		else
		{
			out_odd = *num;
			++out_odd;
		}
		++num;
	}

	return 0;



=======
#include <fstream>
#include <iterator>
#include <algorithm>
#include <iostream>

int main(int argc, const char** argv) {
	std::cout << "---" << std::endl;
	if (argc!=4)
	{
		return -1;
	}
	

	std::ifstream ifs(argv[1]);
	std::ofstream ofs_odd(argv[2]), ofs_even(argv[3]);

	std::istream_iterator<int> num(ifs), eof;
	std::ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

	while (num!=eof)
	{
		if ((*num) % 2 == 0) {
			out_even = *num;
			++out_even;
		}
		else
		{
			out_odd = *num;
			++out_odd;
		}
		++num;
	}

	return 0;



>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}