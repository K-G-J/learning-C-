#include <iostream>

using namespace std;

int main()
{
  cout << "Enter temperature in Fahrenheit: ";
  double fTemp;
  cin >> fTemp;
  cout << "Temperature in Celsius: " << (fTemp - 32) * 5 / 9;
  return 0;
}