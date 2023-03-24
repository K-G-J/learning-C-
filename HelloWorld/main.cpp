#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  const short minValue = 1;
  const short maxValue = 6;
  srand(time(nullptr));

  int die1 = (rand() % ((maxValue - minValue) + 1)) + minValue;
  int die2 = (rand() % ((maxValue - minValue) + 1)) + minValue;

  cout << die1 << endl << die2;
  return 0;
}