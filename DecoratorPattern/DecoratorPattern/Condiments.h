#pragma once

#include "Condiment.h"

class Syrup 
  : public Condiment
{
public:
  Syrup(Beverage* beverage);

  virtual int GetCost() const override;
  virtual std::wstring GetDesc() const override;
};

class Shot
  : public Condiment
{
public:
  Shot(Beverage* beverage);

  virtual int GetCost() const override;
  virtual std::wstring GetDesc() const override;
};
  