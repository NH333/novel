#include <iostream>
#include <string>

using namespace std;

int main()
{
	string tmp;

	while (cin >> tmp) {
		int count = 0;
		int ff_count = 0, fl_count = 0, fi_count = 0;
		char pre =  '0' ;

		for (auto i : tmp) {
			switch (i) {
			case 'a':
			case 'A':
				++count;
				break;

			case 'e':
			case 'E':
				++count;
				break;

			case 'i':
			{
				if (pre=='f')
				{
					++fi_count;
				}
				++count;
				break;
			}
			case 'I':
				++count;
				break;

			case 'o':
			case 'O':
				++count;
				break;

			case 'u':
			case 'U':
				++count;
				break;
				
			case 'f':
				if (pre == 'f') {
					++ff_count;
				}
				break;

			case 'l':
				if (pre == 'f') {
					++fl_count;
				}
				break;

			

			default:
				break;
			}
			pre = i;
		}

		cout << "num of yunying:\t"<<count << endl;
		cout << "num of ff:\t" << ff_count << endl;
		cout << "num of fl:\t" << fl_count << endl;
		cout << "num of fi:\t" << fi_count << endl;
	}
	system("pause");
}