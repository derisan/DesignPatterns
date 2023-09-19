#pragma once

class FlyBehavior
{
public:
  virtual ~FlyBehavior() = default;

  virtual void Fly() = 0;
};

class FlyWithWings
  : public FlyBehavior
{
public:
  virtual void Fly() override;
};

class CantFly
  : public FlyBehavior
{
public:
  virtual void Fly() override;
};

class QuackBehavior
{
public:
  virtual ~QuackBehavior() = default;

  virtual void Quack() = 0;
};

class QuackGrowl
  : public QuackBehavior
{
public:
  virtual void Quack() override;
};
