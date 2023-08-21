#include "Observer.h"

#include <iostream>

#include "Duck.h"
#include "Observable.h"

DuckObserver::DuckObserver(Observable* observable)
  : Observable_(observable)
{
  Observable_->Register(this);
}

void DuckObserver::Update(Observable* subject)
{
  const auto duck = reinterpret_cast<Duck*>(subject);
  const auto hp = duck->GetHealthPoint();

  std::cout << "Duck's hp: " << hp << ".\n";
}
