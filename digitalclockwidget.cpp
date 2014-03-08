#include "digitalclockwidget.h"
#include "clock.h"

DigitalClockWidget::DigitalClockWidget(QWidget *parent) :
	QLCDNumber(parent),
	m_offset(0)
{
	setSegmentStyle(Flat);
}

DigitalClockWidget::~DigitalClockWidget()
{

}

void DigitalClockWidget::updateObserver()
{
	Clock& clock = Clock::getInstance();
	m_time.setHMS(clock.getHours(), clock.getMinutes(),clock.getSeconds());
	showTime();
}

void DigitalClockWidget::showTime()
{
	QTime timeZoneTime = m_time.addSecs(60 * 60 * m_offset);
	QString text = timeZoneTime.toString("hh:mm:ss");
	display(text);
}

void DigitalClockWidget::setTimeZoneOffset(int offset)
{
	m_offset = offset;
	showTime();
}
