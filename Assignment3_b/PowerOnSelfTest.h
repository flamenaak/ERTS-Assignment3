#pragma once
# include "ESXState.h"

class ESX;

class PowerOnSelfTest :
	public ESXState {
protected:
	PowerOnSelfTest(ESX* cont);
private:
	static PowerOnSelfTest* singleTonni;

public:
	static PowerOnSelfTest* getInstance(ESX* cont);

	void SelfTestFailed() override;

	void SelfTestOk() override;

	string getName() {
		return "selftest in progress";
	}
};