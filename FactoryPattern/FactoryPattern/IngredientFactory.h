#pragma once

#include <string>

// Abstract factory
class IngredientFactory
{
public:
  virtual ~IngredientFactory() = default;

  virtual std::wstring CreateDough() const = 0;
  virtual std::wstring CreateVeggies() const = 0;
  virtual std::wstring CreateSauce() const = 0;
};

class NYIngredientFactory
  : public IngredientFactory
{
public:
  virtual std::wstring CreateDough() const override;
  virtual std::wstring CreateVeggies() const override;
  virtual std::wstring CreateSauce() const override;
};

class CCIngredientFactory
  : public IngredientFactory
{
public:
  virtual std::wstring CreateDough() const override;
  virtual std::wstring CreateVeggies() const override;
  virtual std::wstring CreateSauce() const override;
};