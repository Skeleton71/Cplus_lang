#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
  int x, y;
  string B;
  cin >> x >> y;
  if (x == y)
  {
    B = "True";
  }
  else
  {
    B = "False";
  }
  cout << B;
  return 0;
} 