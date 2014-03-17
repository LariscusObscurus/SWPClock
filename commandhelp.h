#ifndef COMMANDHELP_H
#define COMMANDHELP_H
#include "icommand.h"
#include "helpwindow.h"

class CommandHelp : public ICommand
{
public:
	CommandHelp();
	~CommandHelp();
	virtual void execute();
private:
	HelpWindow *m_help;
};

#endif // COMMANDHELP_H
