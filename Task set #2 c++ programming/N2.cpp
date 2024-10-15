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
    if ((x <= 1) and (y <= 1))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
