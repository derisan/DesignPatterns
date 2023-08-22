#pragma once

class Observable;
class Duck;

class IObserver
{
public:
  virtual ~IObserver() = default;
  virtual void Update(Observable* subject) = 0;
  virtual Observable* GetSubject() = 0;
};

class DuckObserver
  : public IObserver
{
public:
  DuckObserver(Observable* observable);

  virtual void Update(Observable* subject) override;

  virtual Observable* GetSubject() override { return mSubject; }

private:
  Observable* mSubject;
};