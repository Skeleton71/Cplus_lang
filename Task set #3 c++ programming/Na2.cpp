#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, d;
    cout << "a b c = ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "No real roots" << endl;
        return 0;
    }
    d = b * b - 4 * a * c;
    if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    } 
    else if (d == 0)
    {
        double root = -b / (2 * a);
        cout << "Root = " << root << endl;
    } 
    else {
        cout << "No real roots";
    }

    return 0;
}
