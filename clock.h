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
	typedef struct time_s {
		int hours;
		int minutes;
		int seconds;
	} time_t;

	time_t m_time;

	Clock();
	Clock(const Clock&);
	Clock &operator = (const Clock&);

	QList<IObserver*> m_observer;
	QList<time_t> m_undoList;
	QList<time_t> m_redoList;


};

#endif // CLOCK_H
