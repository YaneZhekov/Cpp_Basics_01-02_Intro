#include <iostream>
using namespace std;

int main()
{
    double temperature;
    cin >> temperature;
    if (temperature >= 26.00 && temperature <= 35.00) {
        cout << "Hot";
    }
    else if (temperature >= 20.10 && temperature <= 25.90) {
        cout << "Warm";
    }
    else if (temperature >= 15.00 && temperature <= 20.00) {
        cout << "Mild";
    }
    else if (temperature >= 12.00 && temperature <= 14.90) {
        cout << "Cool";
    }
    else if (temperature >= 5.00 && temperature <= 11.90) {
        cout << "Cold";
    }
    else {
        cout << "unknown";
    }
}

