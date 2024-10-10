#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, y, z;
    cin >> x >> y;
    z = x;
    x = y;
    y = z;
    cout <<  x << " " << y << endl;


    cin >> x >> y;
    x = x + y;
    y = x - y;
    x = x - y;

    cout <<  x << " " << y;

    return 0;
}