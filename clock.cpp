#include "clock.h"

Clock::Clock() :
	m_time {0, 0, 0}
{
}

Clock& Clock::getInstance()
{
	static Clock instance;
	return instance;
}

void Clock::attach(IObserver *observer)
{
	m_observer.append(observer);
}

void Clock::detach(IObserver *observer)
{
	m_observer.removeAll(observer);
}

void Clock::notify()
{
	for(auto& it: m_observer) {
		it->updateObserver();
	}
}

void Clock::set(int hour, int minute, int second)
{
	m_time.hours = hour % 24;
	m_time.minutes = minute % 60;
	m_time.seconds = second % 60;
	notify();
}

void Clock::increment()
{
	m_undoList.append(m_time);
	m_redoList.clear();

	if(m_time.seconds < 59) {
		m_time.seconds++;
		notify();
		return;
	}

	m_time.seconds = 0;

	if(m_time.minutes < 59) {
		m_time.minutes++;
		notify();
		return;
	}

	m_time.minutes = 0;

	if(m_time.hours < 24) {
		m_time.hours++;
		notify();
		return;
	}

	m_time.hours = 0;

	notify();
}

void Clock::decrement()
{

	m_undoList.append(m_time);
	m_redoList.clear();
	notify();
}

void Clock::undo()
{
	if(m_undoList.empty())
		return;
	m_redoList.append(m_time);
	m_time = m_undoList.takeLast();
	notify();
}

void Clock::redo()
{
	if(m_redoList.empty())
		return;

	m_undoList.append(m_time);
	m_time = m_redoList.takeLast();
	notify();
}

void Clock::reset()
{

	m_undoList.append(m_time);
	m_redoList.clear();
	notify();
}

int Clock::getSeconds()
{
	return m_time.seconds;
}
int Clock::getMinutes()
{
	return m_time.minutes;
}
int Clock::getHours()
{
	return m_time.hours;
}
