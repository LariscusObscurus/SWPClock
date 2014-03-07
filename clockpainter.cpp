#include "clockpainter.h"
#include "ui_clockpainter.h"
#include "clock.h"
#include <QColor>

ClockPainter::ClockPainter(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::ClockPainter),
	m_hour(0),
	m_minute(0),
	m_second(0)
{
	ui->setupUi(this);
}

ClockPainter::~ClockPainter()
{
	delete ui;
}

void ClockPainter::update(ISubject &subject)
{
	Clock& clock = Clock::getInstance();
	m_hour = clock.getHours();
	m_minute = clock.getMinutes();
	m_second = clock.getSeconds();
}

void ClockPainter::paintEvent(QPaintEvent *)
{
	static const QPoint hourHand[3] = {
		QPoint(7, 8),
		QPoint(-7, 8),
		QPoint(0, -40)
	};
	static const QPoint minuteHand[3] = {
		QPoint(7, 8),
		QPoint(-7, 8),
		QPoint(0, -70)
	};
	static const QPoint secondHand[3] = {
		QPoint(2, 8),
		QPoint(-2, 8),
		QPoint(0, -80)
	};

	QColor hourColor(127, 0, 127);
	QColor minuteColor(0, 127, 127, 191);
	QColor secondColor(Qt::black);

	int side = qMin(width(), height());

	QPainter painter(this);

	painter.setRenderHint(QPainter::Antialiasing);
	painter.translate(width() / 2, height() / 2);
	painter.scale(side / 200.0, side / 200.0);

	painter.setPen(Qt::NoPen);
	painter.setBrush(hourColor);

	painter.save();
	painter.rotate(30.0 * ((m_hour + m_minute / 60.0)));
	painter.drawConvexPolygon(hourHand, 3);
	painter.restore();

	painter.setPen(hourColor);

	/* hour marks */
	for (int i = 0; i < 12; ++i) {
		painter.drawLine(88, 0, 96, 0);
		painter.rotate(30.0);
	}

	painter.setPen(Qt::NoPen);
	painter.setBrush(minuteColor);

	painter.save();
	painter.rotate(6.0 * (m_minute + m_second / 60.0));
	painter.drawConvexPolygon(minuteHand, 3);
	painter.restore();

	painter.setPen(minuteColor);

	/* minute marks */
	for (int j = 0; j < 60; ++j) {
		if ((j % 5) != 0)
			painter.drawLine(92, 0, 96, 0);
		painter.rotate(6.0);
	}

	painter.setPen(Qt::NoPen);
	painter.setBrush(secondColor);

	painter.save();
	painter.rotate(6.0 * m_second);
	painter.drawConvexPolygon(secondHand, 3);
	painter.restore();

}
