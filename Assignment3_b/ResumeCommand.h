#pragma once
#include "Command.h"
#include "ESXState.h"

class ResumeCommand : public Command {
public:
	ResumeCommand(ESXState* s) : Command(s) {}

	void execute() override {
		state->Resume();
	}
};