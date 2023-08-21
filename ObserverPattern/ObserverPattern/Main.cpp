#include "Duck.h"
#include "Observer.h"
#include <string>

int main()
{
  Duck duck;
  DuckObserver observer(&duck);

  while (true)
  {
    int ch = getchar();
    ch = std::toupper(ch);

    if (ch == 'A' || ch == 'D')
    {
      const auto curHP = duck.GetHealthPoint();
      if (ch == 'A')
        duck.SetHealthPoint(curHP - 1);
      else
        duck.SetHealthPoint(curHP + 1);
    }
    else if (ch == 'Q')
      break;
  }
}