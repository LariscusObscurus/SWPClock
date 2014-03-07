#ifndef CLOCKPAINTER_H
#define CLOCKPAINTER_H

#include <QWidget>
#include <QPainter>
#include "iobserver.h"

namespace Ui {
class ClockPainter;
}

class ClockPainter : public QWidget, public IObserver
{
	Q_OBJECT
public:
	explicit ClockPainter(QWidget *parent = 0);
	~ClockPainter();

	virtual void updateObserver();

private:
	Ui::ClockPainter *ui;
	int m_hour;
	int m_minute;
	int m_second;

protected:
	void paintEvent(QPaintEvent *);
};

#endif // CLOCKPAINTER_H
