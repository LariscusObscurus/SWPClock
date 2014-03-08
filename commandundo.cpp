#include "commandundo.h"
#include "clock.h"

CommandUndo::CommandUndo()
{
}

CommandUndo::~CommandUndo()
{
}

void CommandUndo::execute()
{
	Clock::getInstance().undo();
}
