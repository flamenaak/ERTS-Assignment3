#pragma once
#include "pch.h"

#include "ESXState.h"
#include "ESX.h"
#include <stdlib.h>
#include "Failure.h"
#include "PowerOnSelfTest.h"

Failure::Failure(ESX* cont) : ESXState(cont) {
}

void Failure::Restart() {
	context->state = PowerOnSelfTest::getInstance(context);
}

void Failure::Exit() {
	exit(1);
}

Failure * Failure::getInstance(ESX * cont)
{
	if (!singleTonni) {
		singleTonni = new Failure(cont);
	}
	else {
		singleTonni->context = cont;
	}
	return singleTonni;
}

Failure* Failure::singleTonni = nullptr;
