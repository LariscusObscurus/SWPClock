#include "commandhelp.h"

CommandHelp::CommandHelp() :
	m_help(new HelpWindow)
{
}

CommandHelp::~CommandHelp()
{
	delete m_help;
}

void CommandHelp::execute()
{
	m_help->show();
}
