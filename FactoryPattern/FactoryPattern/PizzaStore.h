#pragma once

#include "Defines.h"

class Pizza;

class PizzaStore
{
public:
  virtual ~PizzaStore() = default;

  Pizza* OrderPizza(ePizzaType pizzaType) const;

protected:
  virtual Pizza* CreatePizza(ePizzaType pizzaType) const = 0;
};

class NYPizzaStore
  : public PizzaStore
{
protected:
  Pizza* CreatePizza(ePizzaType pizzaType) const override;
};

class CCPizzaStore
  : public PizzaStore
{
protected:
  Pizza* CreatePizza(ePizzaType pizzaType) const override;
};
