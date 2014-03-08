#include "digitalclockwidget.h"
#include "clock.h"

DigitalClockWidget::DigitalClockWidget(QWidget *parent) :
	QLCDNumber(parent)
{
	setSegmentStyle(Filled);
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
	QString text = m_time.toString("hh:mm:ss");
	display(text);
}
