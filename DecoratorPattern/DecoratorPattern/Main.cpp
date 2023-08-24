#include <iostream>

#include "Coffee.h"
#include "Condiments.h"

int main()
{
  Coffee c;
  Syrup syrup(&c);
  Shot shot(&syrup);

  shot.PrintInfo();
}