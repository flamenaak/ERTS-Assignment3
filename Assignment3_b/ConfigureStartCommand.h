#pragma once
#include "Command.h"
#include "ESXState.h"
class ConfigureStartCommand : public Command {
public: 
	ConfigureStartCommand(ESXState* s) : Command(s) {}

	void execute() override {
		state->Configure();
	}
};