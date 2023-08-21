#include "Duck.h"

void Duck::SetHealthPoint(int value)
{
  HealthPoint_ = value;
  SetChanged();
}
