<<<<<<< HEAD
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main() {
	vector<string> m_vector = { "chenanqi","anqichen","anqi","chen","12345678","1234" };
	int sz = 6;
	auto count = std::count_if(m_vector.begin(), m_vector.end(), [sz](const string& a) {return a.size() >= sz; });
	cout << count << endl;
	system("pause");
=======
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main() {
	vector<string> m_vector = { "chenanqi","anqichen","anqi","chen","12345678","1234" };
	int sz = 6;
	auto count = std::count_if(m_vector.begin(), m_vector.end(), [sz](const string& a) {return a.size() >= sz; });
	cout << count << endl;
	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}