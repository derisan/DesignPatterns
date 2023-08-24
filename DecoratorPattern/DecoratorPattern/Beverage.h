#pragma once

#include <iostream>
#include <string>

class Beverage
{
public:
  Beverage() = default;
  virtual ~Beverage() = default;

public:
  virtual std::wstring GetDesc() const { return mDescription; }
  void SetDesc(std::wstring desc) { mDescription = std::move(desc); }

  virtual int GetCost() const = 0;

  void PrintInfo();

private:
  std::wstring mDescription = L"default";
};
