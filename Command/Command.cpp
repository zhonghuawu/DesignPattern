// Command.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "remote_control.h"
#include "light.h"
#include "light_on_command.h"
#include "light_off_command.h"

int main() {
	RemoteControl *rc = new RemoteControl();
	Light light;
	LightOnCommand lightOnCommand(light);
	LightOffCommand lightOffCommand(light);
	rc->setCommand(1, &lightOnCommand, &lightOffCommand);
	rc->onButtonWasPushed(1);
	rc->offButtonWasPushed(1);
	rc->setCommand(2, &lightOnCommand, &lightOffCommand);
	rc->onButtonWasPushed(2);
	rc->offButtonWasPushed(2);
	cout << rc->toString() << endl;
}
