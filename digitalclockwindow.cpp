#include "digitalclockwindow.h"
#include "ui_digitalclockwindow.h"
#include "clock.h"

DigitalClockWindow::DigitalClockWindow(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::DigitalClockWindow)
{
	ui->setupUi(this);
	Clock::getInstance().attach(ui->digitalClock);
}

DigitalClockWindow::~DigitalClockWindow()
{
	Clock::getInstance().detach(ui->digitalClock);
	delete ui;
}

void DigitalClockWindow::setTimeZoneOffset(int offset)
{
	ui->digitalClock->setTimeZoneOffset(offset);
}
