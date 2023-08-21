#pragma once

#include "Observable.h"

constexpr int kDefaultHealthPoint = 5;

class Duck :
    public Observable
{
public:
  int GetHealthPoint() const { return HealthPoint_; }
  void SetHealthPoint(int value);

private:
  int HealthPoint_ = kDefaultHealthPoint;
};
