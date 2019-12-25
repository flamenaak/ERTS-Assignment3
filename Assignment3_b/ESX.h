#pragma once
#include<string>
using namespace std;

class ESXState;
class Command;

class ESX {
public:
	ESXState* state;

	ESX();
	~ESX();
	void selfTestOk();
	void initialize();
	void restart();
	void start();
	void configure();
	void configurationEnded();
	void stop();
	void suspend();
	void resume();
	void selftestFailed();
	string getState();
	void turnOn();
	void invoke(Command* command);
};