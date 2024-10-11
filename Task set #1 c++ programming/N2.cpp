#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x, y =0;
  
  cin >> x;
  y = 1 + x + ((x*x)/ 2) + ((x *x * x) / 6) + ((x *x * x * x) / 24);
  cout << y;
  return 0;
} 