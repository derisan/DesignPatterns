#include "DuckBehavior.h"

#include <iostream>

void FlyWithWings::Fly()
{
  std::cout << "I'm flying with steel wings!" << std::endl;
}

void QuackGrowl::Quack()
{
  std::cout << "Quack, quack!" << std::endl;
}

void CantFly::Fly()
{
  std::cout << "I can't fly!" << std::endl;
}
