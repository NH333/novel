#include <iostream>
#include <stdexcept>
#include <string>

using std::cout; using std::endl; using std::cin;

int main() {

	int m1_int, m2_int;
	//cin >> m1_int >> m2_int;

	while (1) {

		cout << "please input two nums: " << endl;
		cin >> m1_int >> m2_int;
		
		try
		{
			if (m2_int == 0)
				throw std::runtime_error("divisor is 0 ");    //先throw抛出异常，然后catch捕获异常并处理异常
			cout << "m1 除以 m2: " << ((float)m1_int / m2_int) << endl;
		}
		catch (std::runtime_error err)
		{
			cout << err.what()<<"\nEnter yes to re-input nums, n to break. " << endl;
			std::string c;
			cin >> c;
			if (tolower(c[0]) == 'n') {
				break;
			}
			else
			{
				continue;
			}

		}
	}
	system("pause");
}