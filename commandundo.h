#ifndef COMMANDUNDO_H
#define COMMANDUNDO_H
#include "icommand.h"

class CommandUndo : public ICommand
{
public:
	CommandUndo();
	virtual ~CommandUndo();
	virtual void execute();
};

#endif // COMMANDUNDO_H
