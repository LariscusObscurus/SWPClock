#include "commandincrement.h"
#include "clock.h"

CommandIncrement::CommandIncrement()
{
}

CommandIncrement::~CommandIncrement()
{

}

void CommandIncrement::execute()
{
	Clock::getInstance().increment();
}
