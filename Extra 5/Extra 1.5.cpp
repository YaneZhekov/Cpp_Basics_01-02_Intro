#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double w, h;
    cin >> w >> h;
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double rows = floor((w * 100) / 120);
    double columns = floor(((h * 100)-100)/70);
    
    double totalDesks = (rows * columns) - 3;
    cout << totalDesks;
    return 0;

}


   
