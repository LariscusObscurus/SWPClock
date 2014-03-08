#ifndef COMMANDSHOW_H
#define COMMANDSHOW_H
#include "analogclockwindow.h"
#include "digitalclockwindow.h"
#include "icommand.h"
#include "types.h"

class CommandShow : public ICommand
{
public:
	CommandShow();
	virtual ~CommandShow();
	void execute();
	void setClockType(clock_type type);
	void setTimeZone(int offset);
	void setCoordinates(int x, int y);
private:
	AnalogClockWindow *m_analog;
	DigitalClockWindow *m_digital;
	clock_type m_clock;
	int m_timezone;

};

#endif // COMMANDSHOW_H
