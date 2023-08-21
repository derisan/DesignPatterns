#pragma once

#include <vector>

class IObserver;

class Observable
{
public:
	bool Register(IObserver* observer);

	bool Remove(IObserver* observer);

	void Notify();

protected:
	void SetChanged();

private:
	std::vector<IObserver*> Observers_;
	bool bChanged_ = false;
};