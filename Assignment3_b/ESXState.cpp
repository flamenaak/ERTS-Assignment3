#include "pch.h"
#include "ESXState.h"
#include "ESX.h"
#include <iostream>
using namespace std;

	ESXState::ESXState(ESX* c) {
		context = c;
	}

	void ESXState::Run() {
		cout << "cannot run";
	}
	void ESXState::Initialized() {
		cout << "cannot initialize";
	}
	void ESXState::Fail() {
		cout << "cannot fail";
	}
	void ESXState::Exit() {
		cout << "cannot exit";
	}
	void ESXState::Restart() {
		cout << "cannot restart";
	}
	void ESXState::SelfTestOk() {
		cout << "Not in test";
	};
	void ESXState::SelfTestFailed() {
		cout << "Not in test";
	};
	void ESXState::Start() {
		cout << "Not operational";
	}
	void ESXState::Configure() {
		cout << "Not in operation";
	}
	void ESXState::ConfigurationEnded() {
		cout << "Not in operation";
	}
	void ESXState::Stop() {
		cout << "Not in operation";
	}
	void ESXState::Suspend() {
		cout << "Not in operation";
	}
	void ESXState::Resume() {
		cout << "Not in operation";
	}

	void ESXState::turnOn() {
		cout << "Already on";
	}

	string ESXState::getName() {
		return "nameless state";
	}
