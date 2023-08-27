#include "Pizza.h"

#include <iostream>

CheesePizza::CheesePizza()
{
  SetDescription(L"CheesePizza");
}

void CheesePizza::Prepare()
{
  std::wcout << L"Preparing " << GetDescription() << std::endl;
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

HawaiianPizza::HawaiianPizza()
{
  SetDescription(L"HawaiianPizza");
}

void HawaiianPizza::Prepare()
{
  std::wcout << L"Preparing " << GetDescription() << std::endl;
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
