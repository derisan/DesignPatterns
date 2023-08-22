#include "Observable.h"

#include <algorithm>

#include "Observer.h"

bool Observable::Register(IObserver* observer)
{
	auto iter = std::find(std::cbegin(mObservers), std::cend(mObservers), observer);
	if (iter != std::cend(mObservers))
	{
		return false;
	}

	mObservers.push_back(observer);
	return true;
}

bool Observable::Remove(IObserver* observer)
{
  auto iter = std::find(std::begin(mObservers), std::end(mObservers), observer);
  if (iter != std::end(mObservers))
  {
		mObservers.erase(iter);
		return true;
  }

	return false;
}

void Observable::Notify()
{
	if (!mbChanged)
		return;

	for (auto observer : mObservers)
	{
		observer->Update(this);
	}

	mbChanged = false;
}

void Observable::SetChanged()
{
	mbChanged = true;
	Notify();
}
