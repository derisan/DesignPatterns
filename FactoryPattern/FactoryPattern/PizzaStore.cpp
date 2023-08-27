#include "PizzaStore.h"
#include "Pizza.h"

Pizza* PizzaStore::OrderPizza(const ePizzaType pizzaType) const
{
  Pizza* pizza = CreatePizza(pizzaType);

  if (!pizza)
  {
    return nullptr;
  }

  pizza->Prepare();
  pizza->Bake();
  pizza->Cut();
  pizza->Box();

  return pizza;
}

Pizza* NYPizzaStore::CreatePizza(ePizzaType pizzaType) const
{
  switch (pizzaType)
  {
  case ePizzaType::Cheese:
    return new CheesePizza;
    
  default:
    return nullptr;
  }
}

Pizza* CCPizzaStore::CreatePizza(ePizzaType pizzaType) const
{
  switch (pizzaType)
  {
  case ePizzaType::Hawaiian:
    return new HawaiianPizza;

  default:
    return nullptr;
  }
}
