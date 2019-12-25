#pragma once
#include "Command.h"
#include "ESXState.h"

class StopCommand : public Command {
public:
	StopCommand(ESXState* s) : Command(s) {}

	void execute() override {
		state->Stop();
	}
};