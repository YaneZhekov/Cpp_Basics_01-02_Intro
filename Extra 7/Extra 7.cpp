#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    double GreenPaint, RedPaint;
    GreenPaint = 3.4; // Per L
    RedPaint = 4.3; // Per L
    double x, y, h;
    cin >> x >> y >> h;
    double X1 = h * x;
    double X2 = 2 * (x * y);
    double X3 = 2 * ((x * y) - (1.5*1.5));
    double X4 = (x * x) - (1.2 * 2);
    double X5 = x * x;
    double A1 = (X1 + X2) / 4.3;
    double A2 = (X3 + X4 + X5) / 3.4;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << A2 << endl;
    cout << A1;
    return 0;


}

