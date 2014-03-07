#include "clock.h"

Clock::Clock() :
	m_hours(0),
	m_minutes(0),
	m_seconds(0)
{
}

Clock& Clock::getInstance()
{
	static Clock instance;
	return instance;
}

void Clock::attach(IObserver *observer)
{
	m_Observer.append(observer);
}

void Clock::detach(IObserver *observer)
{
	m_Observer.removeAll(observer);
}

void Clock::notify()
{
	for(auto& it: m_Observer) {
		it->update();
	}
}

void Clock::set(int hour, int minute, int second)
{
	m_hours = hour;
	m_minutes = minute;
	m_seconds = second;
}

void Clock::increment()
{

}
void Clock::decrement()
{

}
void Clock::undo()
{

}
void Clock::redo()
{

}
void Clock::reset()
{

}
int Clock::getSeconds()
{
	return m_seconds;
}
int Clock::getMinutes()
{
	return m_minutes;
}
int Clock::getHours()
{
	return m_hours;
}
