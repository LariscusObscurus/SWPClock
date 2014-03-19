#ifndef COMMANDMACRO_H
#define COMMANDMACRO_H
#include "icommand.h"
#include <QList>

class CommandMacro : public ICommand
{
public:
	CommandMacro();
	virtual void execute();
	void addCommand(ICommand *);
	void removeCommand(ICommand *);
private:
	QList<ICommand *> m_CommandList;
};

#endif // COMMANDMACRO_H
