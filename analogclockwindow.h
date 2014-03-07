#ifndef ANALOGCLOCKWINDOW_H
#define ANALOGCLOCKWINDOW_H

#include <QDialog>

namespace Ui {
class AnalogClockWindow;
}

class AnalogClockWindow : public QDialog
{
	Q_OBJECT

public:
	explicit AnalogClockWindow(QWidget *parent = 0);
	~AnalogClockWindow();

private:
	Ui::AnalogClockWindow *ui;
};

#endif // ANALOGCLOCKWINDOW_H
