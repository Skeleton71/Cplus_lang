#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    double x1,x2,y1,y2,d;
    cin>>x1>>x2;
    cin>>y1>>y2;
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout<<"D="<<d;
    return 0;
}
