#ifndef DIGITALCLOCKWINDOW_H
#define DIGITALCLOCKWINDOW_H

#include <QDialog>

namespace Ui {
class DigitalClockWindow;
}

class DigitalClockWindow : public QDialog
{
	Q_OBJECT

public:
	explicit DigitalClockWindow(QWidget *parent = 0);
	~DigitalClockWindow();

private:
	Ui::DigitalClockWindow *ui;
};

#endif // DIGITALCLOCKWINDOW_H
