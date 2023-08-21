#include "Observable.h"

#include <algorithm>

#include "Observer.h"

bool Observable::Register(IObserver* observer)
{
	auto iter = std::find(std::cbegin(Observers_), std::cend(Observers_), observer);
	if (iter != std::cend(Observers_))
	{
		return false;
	}

	Observers_.push_back(observer);
	return true;
}

bool Observable::Remove(IObserver* observer)
{
  auto iter = std::find(std::begin(Observers_), std::end(Observers_), observer);
  if (iter != std::cend(Observers_))
  {
		Observers_.erase(iter);
		return true;
  }

	return false;
}

void Observable::Notify()
{
	if (!bChanged_)
		return;

	for (auto observer : Observers_)
	{
		observer->Update(this);
	}

	bChanged_ = false;
}

void Observable::SetChanged()
{
	bChanged_ = true;
	Notify();
}
