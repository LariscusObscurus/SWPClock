#ifndef COMMANDSET_H
#define COMMANDSET_H
#include "icommand.h"
#include <QTime>

class CommandSet : public ICommand
{
public:
	CommandSet();
	~CommandSet();
	virtual void execute();
	void setHMS(int h = 0, int m = 0, int s = 0);
	void setHMS(QTime time);
private:
	QTime m_time;
};

#endif // COMMANDSET_H
