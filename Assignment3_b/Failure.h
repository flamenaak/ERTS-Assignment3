#pragma once
#include "pch.h"
#include "ESXState.h"
class ESX;

class Failure :
	public ESXState {
protected:
	Failure(ESX* cont);
private:
	static Failure* singleTonni;

public:
	static Failure* getInstance(ESX* cont);

	void Restart() override;

	void Exit()override;

	string getName() {
		return "failed selftest";
	}
};