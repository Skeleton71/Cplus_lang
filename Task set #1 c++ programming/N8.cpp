#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double pi,e,a,b;
    pi = 3.14159;
    e = 2.71828;
    a = pow(pi, e);
    cout << a << endl;
    b = pow(e, pi);
    cout << b << endl;
    if(a>b)
    {
        cout << "Pi>e";
    }
    else
    {
        cout << "E>pi";
    }
    return 0;
}