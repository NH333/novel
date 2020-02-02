#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> level{ "F","D","C","B","A","A++" };
	int grade;
	while (cin >> grade) {
		/*if-else*/
		if (grade<60){
			cout << "grade: " << grade << "\t Level: " << level[0] << endl;
		}
		else {
			cout << "grade: " << grade << "\t Level: " << level[(grade - 50) / 10] << endl;
		}
		
		/*条件运算符*/
		cout << (grade == 100 ? "A++" :
			grade < 60 ? "F" :
			grade >= 90 ? "A" :
			grade < 70 ? "D" :
			grade >= 80?"B" : "C") << endl;


	}

	

	system("pause");
}