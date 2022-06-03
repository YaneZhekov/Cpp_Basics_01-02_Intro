#include <iostream>
using namespace std;


int main()
{
	double P1, P2, kg1, kg2;
	double P3 = 7.50;
	double kg3;
	cin >> P1 >> P2 >> kg1 >> kg2 >> kg3;
	double Palamud, Safrid, Price;
	Palamud = P1 * 1.6;
	Safrid = P2 * 1.8;
	Price = Palamud * kg1 + Safrid * kg2 + P3 * kg3;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << Price;
}
