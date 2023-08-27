#include "Pizza.h"

#include <iostream>

#include "IngredientFactory.h"

CheesePizza::CheesePizza(IngredientFactory* ingredientFactory)
  : mIngredientFactory(ingredientFactory)
{
  SetDescription(L"CheesePizza");
}

void CheesePizza::Prepare()
{
  std::wcout << L"Preparing " << GetDescription() << std::endl;
  SetDough(mIngredientFactory->CreateDough());
  SetVeggies(mIngredientFactory->CreateVeggies());
  SetSauce(mIngredientFactory->CreateSauce());
}

void CheesePizza::Bake()
{
  std::wcout << "Bake for 10 minutes" << std::endl;
}

void CheesePizza::Cut()
{
  std::wcout << "Cut to 8 pieces" << std::endl;
}

void CheesePizza::Box()
{
  std::wcout << "Box with special IU box" << std::endl;
}

HawaiianPizza::HawaiianPizza(IngredientFactory* ingredientFactory)
  : mIngredientFactory(ingredientFactory)
{
  SetDescription(L"HawaiianPizza");
}

void HawaiianPizza::Prepare()
{
  std::wcout << L"Preparing " << GetDescription() << std::endl;
  SetDough(mIngredientFactory->CreateDough());
  SetVeggies(mIngredientFactory->CreateVeggies());
  SetSauce(mIngredientFactory->CreateSauce());
}

void HawaiianPizza::Bake()
{
  std::wcout << "Bake for 15 minutes" << std::endl;
}

void HawaiianPizza::Cut()
{
  std::wcout << "Cut to 4 pieces" << std::endl;
}

void HawaiianPizza::Box()
{
  std::wcout << "Box with special BTS box" << std::endl;
}

void Pizza::PrintInfo()
{
  std::wcout << mDescription << L" is made of " << GetDough() << L", "
    << GetVeggies() << L", " << GetSauce() << L".\n";
}
