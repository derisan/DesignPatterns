#include <iostream>
#include <string>
#include "Duck.h"
#include "Observer.h"

int main()
{
  Duck duck;
  DuckObserver observer(&duck);

  while (true)
  {
    std::cout << "\nPress A or D to manipulate Duck' HP(Q to quit)\n";

    char input = 0;
    std::cin >> input;
    input = static_cast<char>(std::toupper(input));

    if (input == 'A' || input == 'D')
    {
      const auto curHP = duck.GetHealthPoint();
      if (input == 'A')
        duck.SetHealthPoint(curHP - 1);
      else
        duck.SetHealthPoint(curHP + 1);
    }
    else if (input == 'Q')
      break;
  }
}