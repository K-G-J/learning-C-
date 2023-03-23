#include <iostream>

using namespace std;

int main()
{
  double sales = 95000;
  double stateTax = 0.04;
  double countyTax = 0.02;
  cout << "Sales: $" << sales << endl
       << "State Tax: $" << stateTax * sales << endl
       << "County Tax: $" << countyTax * sales << endl
       << "Total Tax: $" << (sales * stateTax) + (sales * countyTax);
  return 0;
}