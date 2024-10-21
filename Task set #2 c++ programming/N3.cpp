#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;
    if (x < 0)
    {
        x = x * -1;
    }
    if (y < 0)
    {
        y = y * -1;
    }
    if ((x + y >= 1) and ((sqrt(x * x + y * y)) <= 1))
    {
        cout << "t";
    }
    else
    {
        cout << "f";
    }
    return 0;
}
