#include "commanddecrement.h"
#include "clock.h"

CommandDecrement::CommandDecrement()
{
}

CommandDecrement::~CommandDecrement()
{
}

void CommandDecrement::execute()
{
	Clock::getInstance().decrement();
}
