#include "Beverage.h"

void Beverage::PrintInfo()
{
  std::wcout << GetDesc() << std::endl;
  std::cout << GetCost() << std::endl;
}
