#pragma once
#include "Command.h"
#include "ESXState.h"

class StartCommand : public Command {
public:
	StartCommand(ESXState* s) : Command(s) {}

	void execute() override {
		state->Start();
	}
};