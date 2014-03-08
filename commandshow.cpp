#include "commandshow.h"

CommandShow::CommandShow() :
	m_analog(new AnalogClockWindow),
	m_clock(ANALOG),
	m_timezone(0)
{
}

CommandShow::~CommandShow()
{
	delete m_analog;
}

void CommandShow::execute()
{
	m_analog->show();
}

void CommandShow::setClockType(clock_type type)
{
	m_clock = type;
}

void CommandShow::setTimeZone(int offset)
{
	m_timezone = offset;
}

void CommandShow::setCoordinates(int x, int y)
{
	m_analog->move(x,y);
}
