#ifndef CLOCKPAINTER_H
#define CLOCKPAINTER_H

#include <QWidget>
#include <QPainter>
#include <QTime>
#include "iobserver.h"

class ClockPainter : public QWidget, public IObserver
{
	Q_OBJECT
public:
	explicit ClockPainter(QWidget *parent = 0);
	~ClockPainter();

	virtual void updateObserver();
	void setTimeZoneOffset(int offset);

private:
	QTime m_time;
	int m_offset;

protected:
	void paintEvent(QPaintEvent *);
};

#endif // CLOCKPAINTER_H
