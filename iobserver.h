#ifndef IOBSERVER_H
#define IOBSERVER_H

class ISubject;

class IObserver
{
public:
	virtual ~IObserver() {}
	virtual void update() = 0;
};

class ISubject
{
public:
	virtual ~ISubject() {}
	virtual void attach(IObserver* observer) = 0;
	virtual void detach(IObserver* observer) = 0;
	virtual void notify() = 0;
};

#endif // IOBSERVER_H
