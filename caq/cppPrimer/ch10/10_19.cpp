<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;



void elimDups(vector<string>& m_vector) {

	std::sort(m_vector.begin(), m_vector.end());
	auto end = std::unique(m_vector.begin(), m_vector.end());
	m_vector.erase(end, m_vector.end());

}

void biggies(vector<string>& words, vector<string>::size_type sz) {
	elimDups(words);
	std::stable_sort(words.begin(), words.end(), [](const string& a, const string& b) {return a.size() < b.size(); });

	auto wc = std::stable_partition(words.begin(), words.end(), [sz](const string& a) {return a.size() < sz; });

	auto count = words.end() - wc;
	cout << count << endl;

	std::for_each(wc, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
}

int main() {
	vector<string> m_vector = { "chenanqi","anqi","chen","wutao","tao","wu","123","123","321","chen","wu" };

	biggies(m_vector, 3);

	system("pause");
=======
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;



void elimDups(vector<string>& m_vector) {

	std::sort(m_vector.begin(), m_vector.end());
	auto end = std::unique(m_vector.begin(), m_vector.end());
	m_vector.erase(end, m_vector.end());

}

void biggies(vector<string>& words, vector<string>::size_type sz) {
	elimDups(words);
	std::stable_sort(words.begin(), words.end(), [](const string& a, const string& b) {return a.size() < b.size(); });

	auto wc = std::stable_partition(words.begin(), words.end(), [sz](const string& a) {return a.size() < sz; });

	auto count = words.end() - wc;
	cout << count << endl;

	std::for_each(wc, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
}

int main() {
	vector<string> m_vector = { "chenanqi","anqi","chen","wutao","tao","wu","123","123","321","chen","wu" };

	biggies(m_vector, 3);

	system("pause");
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}