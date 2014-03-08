#include "commandshow.h"

CommandShow::CommandShow() :
	m_analog(new AnalogClockWindow),
	m_digital(new DigitalClockWindow),
	m_clock(ANALOG),
	m_timezone(0)
{
}

CommandShow::~CommandShow()
{
	delete m_digital;
	delete m_analog;
}

void CommandShow::execute()
{
	if(m_clock == ANALOG)
		m_analog->show();
	else
		m_digital->show();
}

void CommandShow::setClockType(clock_type type)
{
	m_clock = type;
}

void CommandShow::setTimeZone(const QString& timezone)
{
	if(timezone == "London") {
		m_timezone = 0;
	} else if ((timezone == "Paris") || (timezone == "Wien")) {
		m_timezone = 1;
	} else if (timezone == "New York") {
		m_timezone = -6;
	} else if (timezone == "Tokyo") {
		m_timezone = 7;
	}
	m_analog->setTimeZoneOffset(m_timezone);
	m_digital->setTimeZoneOffset(m_timezone);
}

void CommandShow::setCoordinates(int x, int y)
{
	if(m_clock == ANALOG)
		m_analog->move(x,y);
	else
		m_digital->move(x,y);
}
