#include <iostream>
//#include <vector>
//#include <math.h>
#include<cmath>

int main()
{
	using namespace std;
	//vector<int> m_vector;
	
	//int num;
	//int iter = 0;
	/*1,2*/
	int a[5] = { 0 };
	int length = 0;
	length = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < length; ++i) {
		cin >> a[i] ;
	}
	cout << "\n------输入的数组------" << endl;
	for (auto i : a) {
		cout << i << endl;
	}
	/*3,4*/
	int v1[3] = { 1,2,3 };
	int v2[3] = { 4,5,6 };
	int result_dot = 0;
	float result_euc = 0;
	for (int i = 0; i < 3; ++i) {
		result_dot += v1[i] * v2[i];
		result_euc += (v1[i])*(v1[i]);
	}
	cout << "dot: " << result_dot << endl;
	cout << "euc_norm: " << sqrt(result_euc) << endl;

	/*5*/
	int v[3] = { -5,1,2 };
	int max = 0;
	int tmp = 0;
	for (int i = 0; i < 3; ++i) {
		if (abs(v[i])>max)
		{
			max = abs(v[i]);	
		}
	}
	cout << "max_norm: " << max << endl;
	



	
	//cout << length << endl;

	/*
	while (cin >> num) {
		m_vector.push_back(num);
		//cout <<"lenght: " <<m_vector.size()<<"; finale num: "<<m_vector[iter] << endl;
		iter++;
	}
	for (auto i : m_vector) {
		cout << i << endl;
	}
	system("pause");
	*/
	system("pause");

	
}