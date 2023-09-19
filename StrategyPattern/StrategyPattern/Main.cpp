#include "Duck.h"
#include "DuckBehavior.h"

class RedheadDuck
  : public Duck
{
public:
  RedheadDuck()
    : Duck(new FlyWithWings, new QuackGrowl)
  {}
};

int main()
{
  RedheadDuck redheadDuck;

  redheadDuck.PerformFly();
  redheadDuck.PerformQuack();

  redheadDuck.SetFlyBehavior(new CantFly);
  redheadDuck.PerformFly();

  return 0;
}
