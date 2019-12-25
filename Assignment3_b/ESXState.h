#pragma once
#include <string>
using namespace std;

class ESX;
class ESXState
{
protected:
	ESX* context;
	ESXState(ESX* c);

public:
	virtual void Run();
	virtual void Initialized();
	virtual void Fail();
	virtual void Exit();
	virtual void SelfTestOk();
	virtual void SelfTestFailed();
	virtual void Start();
	virtual void Configure();
	virtual void ConfigurationEnded();
	virtual void Stop();
	virtual void Suspend();
	virtual void Resume();
	virtual void Restart();
	virtual string getName();

	virtual void turnOn();

	ESX* getContext() {
		return context;
	}
};