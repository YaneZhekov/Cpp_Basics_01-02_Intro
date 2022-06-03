#include <iostream>
#define _USE_MATH_DEFINES
constexpr auto M_PI = 3.14159265358979323846;
using namespace std;

int main()
{
	double r;
	cin >> r;
	cout.setf(ios::fixed);
	cout.precision(2);


	double area = M_PI * (r * r);
	double lenght = 2 * r * M_PI;
	
	cout << area << endl << lenght;
}

