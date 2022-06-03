#include <iostream>
using namespace std;

int main()
{
    string word;
    string warm = "sunny";
    cin >> word;
    if (word == warm) {
        cout << "It's warm outside!";
    }
    else {
        cout << "It's cold outside!";
    }
    return 0;
}

