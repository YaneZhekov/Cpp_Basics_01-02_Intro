#include<iostream>
using namespace std;

int main() 
{
	double C, F;
	cin >> C;
	double formula = (C * 9 / 5) + 32;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << formula;
}