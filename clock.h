#ifndef CLOCK_H
#define CLOCK_H

#include <iobserver.h>
#include <QObject>
#include <QList>
#include <QTimer>

class Clock : public QObject, public ISubject
{
	Q_OBJECT
public:
	virtual ~Clock();
	static Clock& getInstance();
	virtual void attach(IObserver* observer);
	virtual void detach(IObserver* observer);
	virtual void notify();

	int getSeconds();
	int getMinutes();
	int getHours();

public slots:
	void set(int hour, int minute, int second);
	void increment();
	void decrement();
	void undo();
	void redo();

private:
	typedef struct time_s {
		int hours;
		int minutes;
		int seconds;
	} time_t;

	time_t m_time;

	explicit Clock(QObject *parent = 0);
	Clock(const Clock&);
	Clock &operator = (const Clock&);

	QList<IObserver*> m_observer;
	QList<time_t> m_undoList;
	QList<time_t> m_redoList;

	QTimer* m_timer;

private slots:
	void tick();

};

#endif // CLOCK_H
