#ifndef DIGITALCLOCKWIDGET_H
#define DIGITALCLOCKWIDGET_H

#include <QLCDNumber>
#include "iobserver.h"
#include <QTime>

class DigitalClockWidget : public QLCDNumber, public IObserver
{
	Q_OBJECT
public:
	explicit DigitalClockWidget(QWidget *parent = 0);
	~DigitalClockWidget();
	virtual void updateObserver();
private:
	QTime m_time;
private slots:
	void showTime();
};

#endif // DIGITALCLOCKWIDGET_H
