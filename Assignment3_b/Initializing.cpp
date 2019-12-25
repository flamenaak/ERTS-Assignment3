#pragma once
#include "pch.h"
#include "ESXState.h"
#include "ESX.h"
#include "Initializing.h"
#include "Operational.h"

Initializing::Initializing(ESX* cont) : ESXState(cont) {
}
Initializing* Initializing::singleTonni=nullptr;

Initializing* Initializing::getInstance(ESX* cont) {
	if (!singleTonni) {
		singleTonni = new Initializing(cont);
	}
	else {
		singleTonni->context = cont;
	}
	return singleTonni;
}

void Initializing::Initialized() {
	context->state = Operational::getInstance(context);
}