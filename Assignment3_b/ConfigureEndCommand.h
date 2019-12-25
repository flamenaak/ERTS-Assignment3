#pragma once
#include "ESXState.h"
#include "Command.h"
class ConfigureEndCommand :
	public Command
{
public:
	ConfigureEndCommand(ESXState* s) : Command(s) {}

	void execute() override {
		state->ConfigurationEnded();
	}
};

