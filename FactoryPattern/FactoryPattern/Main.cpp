#include "PizzaStore.h"
#include "Pizza.h"

#include <memory>
#include <iostream>

int main()
{
  auto pizzaStore = std::make_unique<NYPizzaStore>();
  auto cheesePizza = std::shared_ptr<Pizza>(pizzaStore->OrderPizza(ePizzaType::Cheese));
  std::wcout << cheesePizza->GetDescription();
}