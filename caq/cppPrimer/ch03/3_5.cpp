#include <iostream>
#include <string>

using namespace std;

int main()
{
	string tmp_string, sum_string ;

	while ( getline(cin, tmp_string) ) {
		sum_string = sum_string+" "+tmp_string;
		cout << sum_string << endl;
	}



	system("pause");
}