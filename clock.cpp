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

void Clock::attach(IObserver &observer)
{

}

void Clock::detach(IObserver &observer)
{

}

void Clock::notify()
{

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
