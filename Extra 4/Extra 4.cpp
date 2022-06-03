#include<iostream>
using namespace std;

int main()
{
	double N, M, Nkg, Mkg;// N - vegetables per kg, M - fruits per kg
	cin >> N >> M >> Nkg >> Mkg;
	cout.setf(ios::fixed);
	cout.precision(2);
	double euro = 1.94;
	double formula = (N * Nkg + M * Mkg) / 1.94;
	cout << formula;
}