#ifndef ICOMMAND_H
#define ICOMMAND_H

class ICommand
{
	virtual ~ICommand() {}
	virtual void execute() = 0;
};

#endif // ICOMMAND_H
