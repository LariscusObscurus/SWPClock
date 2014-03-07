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

	virtual void update(ISubject& subject);

private:
	int m_hour;
	int m_minute;
	int m_second;
	Ui::ClockPainter *ui;

protected:
	void paintEvent(QPaintEvent *);
};

#endif // CLOCKPAINTER_H
