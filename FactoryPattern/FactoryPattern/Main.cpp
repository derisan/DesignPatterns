#include "PizzaStore.h"
#include "Pizza.h"

#include <memory>
#include <iostream>

int main()
{
  {
    auto pizzaStore = std::make_unique<NYPizzaStore>();
    auto pizza = std::shared_ptr<Pizza>(pizzaStore->OrderPizza(ePizzaType::Cheese));
    pizza->PrintInfo();
  }

  std::wcout << std::endl;

  {
    auto pizzaStore = std::make_unique<CCPizzaStore>();
    auto pizza = std::shared_ptr<Pizza>(pizzaStore->OrderPizza(ePizzaType::Hawaiian));
    pizza->PrintInfo();
  }
}