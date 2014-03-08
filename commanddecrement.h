#ifndef COMMANDDECREMENT_H
#define COMMANDDECREMENT_H
#include "icommand.h"

class CommandDecrement : public ICommand
{
public:
	CommandDecrement();
	virtual ~CommandDecrement();
	virtual void execute();
};

#endif // COMMANDDECREMENT_H
