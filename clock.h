#ifndef CLOCK_H
#define CLOCK_H

#include <iobserver.h>
#include <QList>

class Clock : public ISubject
{
public:
	static Clock& getInstance();
	virtual void attach(IObserver* observer);
	virtual void detach(IObserver* observer);
	virtual void notify();

	void set(int hour, int minute, int second);
	void increment();
	void decrement();
	void undo();
	void redo();
	void reset();
	int getSeconds();
	int getMinutes();
	int getHours();

private:
	Clock();
	Clock(const Clock&);
	Clock &operator = (const Clock&);

	int m_hours;
	int m_minutes;
	int m_seconds;

	QList<IObserver*> m_Observer;

};

#endif // CLOCK_H
