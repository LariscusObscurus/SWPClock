#include "commandredo.h"
#include "clock.h"

CommandRedo::CommandRedo()
{
}

CommandRedo::~CommandRedo()
{
}

void CommandRedo::execute()
{
	Clock::getInstance().redo();
}
