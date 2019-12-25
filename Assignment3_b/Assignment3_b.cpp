// Assignment3_b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "ESX.h"

void process(string command, ESX* system) {
	if (command._Equal("initialize")) {
		system->initialize();
	}
	else if (command._Equal("restart")) {
		system->restart();
	}
	else if (command._Equal("configure")) {
		system->configure();
	}
	else if (command._Equal("configurationEnded")) {
		system->configurationEnded();
	}
	else if (command._Equal("exit")) {
		exit(0);
	}
	else if (command._Equal("stop")) {
		system->stop();
	}
	else if (command._Equal("start")) {
		system->start();
	}
	else if (command._Equal("suspend")) {
		system->suspend();
	}
	else if (command._Equal("resume")) {
		system->resume();
	}
	else if (command._Equal("selftestOk")) {
		system->selfTestOk();
	}
	else if (command._Equal("selftestFailed")) {
		system->selftestFailed();
	}
	else if (command._Equal("on")) {
		system->turnOn();
	}
	else {
		cout << "unknown command";
	}
}

int main()
{
	std::cout << "Hello World!\n";

	ESX s;
	ESX* ptr_s = &s;
	cout << "System ready to be commanded, write command";
	while (true) {
		string com;
		cin >> com;
		process(com, ptr_s);
		cout << "State: " << ptr_s->getState() << endl;
	}
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
