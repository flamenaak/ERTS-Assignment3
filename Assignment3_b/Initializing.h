#pragma once
#include "pch.h"
#include "ESXState.h"
class ESX;

class Initializing :
	public ESXState {
protected:
	Initializing(ESX* cont);
private:
	static Initializing* singleTonni;

public:
	static Initializing* getInstance(ESX* cont);

	void Initialized();

	string getName() {
		return "initializing";
	}
};