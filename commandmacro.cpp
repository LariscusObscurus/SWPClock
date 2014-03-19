#include "commandmacro.h"

CommandMacro::CommandMacro()
{
}

void CommandMacro::execute()
{
	for(auto& it: m_CommandList) {
		it->execute();
	}
}

void CommandMacro::addCommand(ICommand *c)
{
	m_CommandList.append(c);
}

void CommandMacro::removeCommand(ICommand *c)
{
	int index = m_CommandList.lastIndexOf(c);
	if(index != -1) {
		m_CommandList.removeAt(index);
	}
}
