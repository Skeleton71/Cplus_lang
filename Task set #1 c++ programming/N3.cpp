#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int m1, m2, R;
  float F;
  
  cin >> m1 >> m2 >> R;
  F = 6.673 * pow(10, -8) * m1 * m2 / (R * R);
  cout << F;
  return 0;
} 