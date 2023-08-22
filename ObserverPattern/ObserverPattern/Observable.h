#pragma once

#include <vector>

class IObserver;

class Observable
{
public:
	Observable() = default;
	virtual ~Observable() = default;

	bool Register(IObserver* observer);

	bool Remove(IObserver* observer);

	void Notify();

	Observable(const Observable&) = delete;
	void operator=(const Observable&) = delete;

protected:
	void SetChanged();

private:
	std::vector<IObserver*> mObservers;
	bool mbChanged = false;
};