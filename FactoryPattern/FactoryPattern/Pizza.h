#pragma once

#include <string>

class Pizza
{
public:
  virtual ~Pizza() = default;

  virtual void Prepare() = 0;
  virtual void Bake() = 0;
  virtual void Cut() = 0;
  virtual void Box() = 0;

public:
  const std::wstring& GetDescription() const { return mDescription; }
  void SetDescription(std::wstring description) { mDescription = std::move(description); }

private:
  std::wstring mDescription = L"";
};

class CheesePizza
  : public Pizza
{
public:
  CheesePizza();

  virtual void Prepare();
  virtual void Bake();
  virtual void Cut();
  virtual void Box();
};
