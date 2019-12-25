#include "pch.h"
#include "PowerOnSelfTest.h"
#include "ESX.h"
#include "Failure.h"
#include "Initializing.h"


PowerOnSelfTest::PowerOnSelfTest(ESX* cont) : ESXState(cont) {
}

PowerOnSelfTest * PowerOnSelfTest::getInstance(ESX * cont)
{
	if (!singleTonni) {
		singleTonni = new PowerOnSelfTest(cont);
	}
	else {
		singleTonni->context = cont;
	}
	return singleTonni;
}

void PowerOnSelfTest::SelfTestFailed()
{
	context->state = Failure::getInstance(context);
}

void PowerOnSelfTest::SelfTestOk()
{
	context->state = Initializing::getInstance(context);
}

PowerOnSelfTest* PowerOnSelfTest::singleTonni = nullptr;