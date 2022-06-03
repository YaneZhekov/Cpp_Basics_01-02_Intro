#include<iostream>
using namespace std;

int main() 
{
	double a, h;
	cin >> a >> h;
	double formula = a * h / 2;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << formula;

}