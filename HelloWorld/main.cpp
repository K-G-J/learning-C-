#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double radius;
  cout << "What is the radius of the circle?  ";
  cin >> radius;
  const double pi = 3.14;
  cout << "The area of the circle is " << pi * pow(radius, 2);
  return 0;
}