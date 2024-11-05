#include <cmath>
#include <iostream>
using namespace std;
int main() {
  double x, y, z;
  cin >> x >> y >> z;
  if ((max(max(x, y), z) <= ((min(min(x, y), z)) + (min(max(x, y), z)))))
  {
    cout << "True";
  }
  else 
  {
    cout << "False";
  }
}