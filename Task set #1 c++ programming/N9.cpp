#include <iostream>
using namespace std;
int main()
{ 
    int a,b,c,d,g;
    cin >> a;
    b = a / 100 % 10;
    cout << b << endl;
    c = a / 10 % 10;
    cout << c << endl;
    d = a % 10;
    cout << d << endl;
    g = b+c+d;
    cout << a << "=" << g;
    return 0;
}