#pragma once

#include "Beverage.h"

class Condiment :
    public Beverage
{
public:
  Condiment(Beverage* beverage)
    : mBeverage(beverage) {}

  virtual int GetCost() const = 0;

protected:
  Beverage* mBeverage;
};
