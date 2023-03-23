#include <iostream>

using namespace std;

int main()
{
  int x = 10;
  // int y = x++; // x = 11, y = 10
  int z = ++x;
  std::cout << x;
  return 0;
}