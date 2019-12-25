#pragma once
#include "ESXState.h"

class ESX;
class StartState :
public ESXState{
public:
	~StartState();

	static StartState* getInstance(ESX* cont);
	void turnOn() override;
private: 
	StartState(ESX* cont);
	static StartState* singleTonni;
};

