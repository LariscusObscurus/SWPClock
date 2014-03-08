#include "analogclockwindow.h"
#include "ui_analogclockwindow.h"
#include "clock.h"

AnalogClockWindow::AnalogClockWindow(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::AnalogClockWindow)
{
	ui->setupUi(this);
	Clock::getInstance().attach(ui->analogClock);
}

AnalogClockWindow::~AnalogClockWindow()
{
	Clock::getInstance().detach(ui->analogClock);
	delete ui;
}

void AnalogClockWindow::setTimeZoneOffset(int offset)
{
	ui->analogClock->setTimeZoneOffset(offset);
}
