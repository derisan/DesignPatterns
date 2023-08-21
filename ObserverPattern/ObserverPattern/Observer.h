#pragma once

class Observable;
class Duck;

class IObserver
{
public:
  virtual void Update(Observable* subject) = 0;
};

class DuckObserver
  : public IObserver
{
public:
  DuckObserver(Observable* observable);

  virtual void Update(Observable* subject) override;

private:
  Observable* Observable_;
};