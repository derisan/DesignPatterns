#pragma once

#include "Beverage.h"

class Coffee
  : public Beverage
{
public:
  Coffee();

public:
  virtual int GetCost() const override;
};