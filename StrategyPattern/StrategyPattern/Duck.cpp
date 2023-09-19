#include "Duck.h"
#include "DuckBehavior.h"

Duck::Duck()
{

}

Duck::Duck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior)
  : mFlyBehavior{ flyBehavior }
  , mQuackBehavior{ quackBehavior }
{

}

void Duck::PerformFly() const
{
  mFlyBehavior->Fly();
}

void Duck::PerformQuack() const
{
  mQuackBehavior->Quack();
}
