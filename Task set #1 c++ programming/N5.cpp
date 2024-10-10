#include <cmath>
#include <iostream>
using namespace std;


int main() {
    double r = 30.0 * M_PI / 180.0;
    double s = sin(r);
    s = round(s*10)/10;
    if (s == 0.5)
    {
        cout << "sin = 1/2";
    }
    else
    {
        cout << "sin != 1/2";
    }
    return 0;
}