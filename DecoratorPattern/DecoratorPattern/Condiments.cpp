#include "Condiments.h"

constexpr int kSyrupCost = 300;
constexpr int kShotCost = 1000;

Syrup::Syrup(Beverage* beverage)
  : Condiment(beverage)
{

}

int Syrup::GetCost() const
{
  return mBeverage->GetCost() + kSyrupCost;
}

std::wstring Syrup::GetDesc() const
{
  return mBeverage->GetDesc() + L", syrup";
}

Shot::Shot(Beverage* beverage)
  : Condiment(beverage)
{

}

int Shot::GetCost() const
{
  return mBeverage->GetCost() + kShotCost;
}

std::wstring Shot::GetDesc() const
{
  return mBeverage->GetDesc() + L", shot";
}
