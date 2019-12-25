#include "pch.h"
#include "ESX.h"
#include "ESXState.h"
#include "Failure.h"
#include "Operational.h"
#include "Initializing.h"
#include "PowerOnSelfTest.h"
#include "StartState.h"
#include "Command.h"
#include "ConfigureEndCommand.h"
#include "ConfigureStartCommand.h"
#include "ResumeCommand.h"
#include "StartCommand.h"
#include "StopCommand.h"
#include "SuspendCommand.h"

ESX::~ESX()
{
}

ESX::ESX() {
	state = StartState::getInstance(this);
}

void ESX::selfTestOk() {
	state->SelfTestOk();
}

void ESX::initialize() {
	state->Initialized();
}

void ESX::restart() {
	state->Restart();
}

void ESX::start() {
	invoke(new StartCommand(state));
}

void ESX::configure() {
	invoke(new ConfigureStartCommand(state));
}

void ESX::configurationEnded() {
	invoke(new ConfigureEndCommand(state));
}

void ESX::stop() {
	invoke(new StopCommand(state));
}

void ESX::suspend() {
	invoke(new SuspendCommand(state));
}

void ESX::resume() {
	invoke(new ResumeCommand(state));
}

void ESX::selftestFailed() {
	state->SelfTestFailed();
}

string ESX::getState()
{
	return state->getName();
}

void ESX::turnOn() {
	state->turnOn();
}

void ESX::invoke(Command * command)
{
	command->execute();
}
