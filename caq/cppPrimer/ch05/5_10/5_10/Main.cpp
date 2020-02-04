#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string tmp;
	
	while (cin >> tmp) {
		int count = 0;

		for (auto i : tmp) {
			switch (i){
			case 'a':
			case 'A':
				++count;
				break;

			case 'e':
			case 'E':
				++count;
				break;

			case 'i':
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

			default:
				break;
			}
		}

		cout << count << endl;
	}
}