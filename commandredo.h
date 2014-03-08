#ifndef COMMANDREDO_H
#define COMMANDREDO_H
#include "icommand.h"

class CommandRedo : public ICommand
{
public:
	CommandRedo();
	virtual ~CommandRedo();
	void execute();
};

#endif // COMMANDREDO_H
