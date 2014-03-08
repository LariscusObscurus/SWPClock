#ifndef COMMANDINCREMENT_H
#define COMMANDINCREMENT_H
#include "icommand.h"

class CommandIncrement : public ICommand
{
public:
	CommandIncrement();
	virtual ~CommandIncrement();
	virtual void execute();
};

#endif // COMMANDINCREMENT_H
