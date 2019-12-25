#include "pch.h"
#include "Operational.h"
#include "PowerOnSelfTest.h"
#include "ESX.h"

Operational::Operational(ESX * cont)
	: ESXState(cont) {
	substate = "ready";
}

Operational * Operational::getInstance(ESX * cont)
{
	if (singleTonni) {
		singleTonni->context = cont;
	}
	else {
		singleTonni = new Operational(cont);
	}
	return singleTonni;
}

void Operational::Start()
{
	substate = "real time loop";
}

void Operational::Configure()
{
	substate = "configuring";
}

void Operational::ConfigurationEnded()
{
	substate = "ready";
}

void Operational::Stop()
{
	substate = "ready";
}

void Operational::Suspend()
{
	substate = "suspended";
}

void Operational::Resume()
{
	substate = "real time loop";
}

void Operational::Restart()
{
	substate = "ready";
	context->state = PowerOnSelfTest::getInstance(context);
}

string Operational::getName()
{
	return "operational with substate: " + substate;
}

Operational* Operational::singleTonni = nullptr;