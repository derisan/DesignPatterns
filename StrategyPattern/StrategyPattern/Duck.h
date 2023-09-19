#pragma once

#include <memory>

class FlyBehavior;
class QuackBehavior;

class Duck
{
public:
  Duck();

  Duck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior);

  virtual ~Duck() = default;

public:
  inline void SetFlyBehavior(FlyBehavior* flyBehavior) { mFlyBehavior.reset(flyBehavior); }

  inline void SetQuackBehavior(QuackBehavior* quackBehavior) { mQuackBehavior.reset(quackBehavior); }

public:
  void PerformFly() const;

  void PerformQuack() const;

private:
  std::unique_ptr<FlyBehavior> mFlyBehavior;
  std::unique_ptr<QuackBehavior> mQuackBehavior;
};
