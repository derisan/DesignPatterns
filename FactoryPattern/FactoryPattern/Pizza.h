#pragma once

#include <string>
#include <memory>

class IngredientFactory;

class Pizza
{
public:
  virtual ~Pizza() = default;

  virtual void Prepare() = 0;
  virtual void Bake() = 0;
  virtual void Cut() = 0;
  virtual void Box() = 0;

  void PrintInfo();

public:
  const std::wstring& GetDescription() const { return mDescription; }
  void SetDescription(std::wstring description) { mDescription = std::move(description); }

  const std::wstring& GetDough() const { return mDough; }
  void SetDough(std::wstring dough) { mDough = std::move(dough); }

  const std::wstring& GetVeggies() const { return mVeggies; }
  void SetVeggies(std::wstring veggies) { mVeggies = std::move(veggies); }

  const std::wstring& GetSauce() const { return mSauce; }
  void SetSauce(std::wstring sauce) { mSauce = std::move(sauce); }

private:
  std::wstring mDescription = L"";
  std::wstring mDough = L"";
  std::wstring mVeggies = L"";
  std::wstring mSauce = L"";
};

class CheesePizza
  : public Pizza
{
public:
  CheesePizza(IngredientFactory* ingredientFactory);

  virtual void Prepare();
  virtual void Bake();
  virtual void Cut();
  virtual void Box();

private:
  std::unique_ptr<IngredientFactory> mIngredientFactory;
};

class HawaiianPizza
  : public Pizza
{
public:
  HawaiianPizza(IngredientFactory* ingredientFactory);

  virtual void Prepare();
  virtual void Bake();
  virtual void Cut();
  virtual void Box();

private:
  std::unique_ptr<IngredientFactory> mIngredientFactory;
};
