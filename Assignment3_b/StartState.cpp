#include "pch.h"
#include "StartState.h"
#include "PowerOnSelfTest.h"
#include "ESX.h"
StartState::~StartState()
{
}

StartState::StartState(ESX* cont) :ESXState(cont) {}

StartState * StartState::getInstance(ESX * cont)
{
	if (!singleTonni) {
		singleTonni = new StartState(cont);
	}
	else {
		singleTonni->context = cont;
	}
	return singleTonni;
}

void StartState::turnOn()
{
	context->state = PowerOnSelfTest::getInstance(context);
}

StartState* StartState::singleTonni = nullptr;