#pragma once
#include "ESXState.h"

class ESX;

class Operational :
	public ESXState {
public:
	string substate;

	static Operational* getInstance(ESX* cont);

	void Start() override;
	void Configure() override;
	void ConfigurationEnded() override;
	void Stop() override;
	void Suspend() override;
	void Resume() override;
	void Restart() override;
	string getName();

protected:
	Operational(ESX* cont);
private:
	static Operational* singleTonni;
};