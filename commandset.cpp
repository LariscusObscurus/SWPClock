#include "commandset.h"
#include "clock.h"

CommandSet::CommandSet()
{
}

CommandSet::~CommandSet()
{
}

void CommandSet::execute()
{
	Clock::getInstance().set(m_time.hour(), m_time.minute(), m_time.second());
}


void CommandSet::setHMS(int h, int m, int s)
{
	m_time.setHMS(h,m,s);
}

void CommandSet::setHMS(QTime time)
{
	m_time = time;
}
