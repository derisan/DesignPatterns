#include "Coffee.h"

constexpr int kCoffeeCost = 1500;

Coffee::Coffee()
{
  SetDesc(L"Coffee");
}

int Coffee::GetCost() const
{
  return kCoffeeCost;
}
