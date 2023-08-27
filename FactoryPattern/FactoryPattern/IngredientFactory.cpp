#include "IngredientFactory.h"

std::wstring NYIngredientFactory::CreateDough() const
{
  return L"NY cheese dough";
}

std::wstring NYIngredientFactory::CreateVeggies() const
{
  return L"Cabbage";
}

std::wstring NYIngredientFactory::CreateSauce() const
{
  return L"Honey butter sauce";
}

std::wstring CCIngredientFactory::CreateDough() const
{
  return L"CC thin dough";
}

std::wstring CCIngredientFactory::CreateVeggies() const
{
  return L"Olive";
}

std::wstring CCIngredientFactory::CreateSauce() const
{
  return L"Hot sauce";
}
