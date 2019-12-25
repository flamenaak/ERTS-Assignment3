#pragma once
#include "Command.h"
#include "ESXState.h"

class SuspendCommand : public Command {
public:
	SuspendCommand(ESXState* s) : Command(s) {}

	void execute() override {
		state->Suspend();
	}
};