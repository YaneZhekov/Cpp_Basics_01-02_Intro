#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	cout.setf(ios::fixed);
	cout.precision(2);
	double finalprice = size * 7.61 - (0.18 * (size * 7.61));
	cout << "The final price is: " << finalprice << " lv." << endl;
	double discount = 0.18 * (size * 7.61);
	cout << "The discount is: " << discount << " lv." << endl;
	return 0;

}
