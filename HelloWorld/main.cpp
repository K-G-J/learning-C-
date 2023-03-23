#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double radius;
  cout << "What is the radius of the circle?  ";
  cin >> radius;
  cout << "The area of the circle is " << pow(radius, 2) * 3.14;
  return 0;
}