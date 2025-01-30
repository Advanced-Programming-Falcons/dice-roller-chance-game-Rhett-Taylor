#include <iostream>
#ifndef DECI_HPP
#define DECI_HPP
#include <string>
int rollDice(int high);
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
class Die{
  int sides;
public:
  Die(int sides);
  int Roll();
};
#endif