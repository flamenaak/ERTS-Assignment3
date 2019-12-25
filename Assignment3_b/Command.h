#pragma once
class ESXState;

class Command {
public :
	ESXState* state;

	Command(ESXState* s) {
		state = s;
	}
	virtual void execute() {}
};