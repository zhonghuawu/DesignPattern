#include "remote_control.h"

#ifdef REMOTE_CONTROL_H
RemoteControl::RemoteControl() {
	onCommands = new Command*[RemoteControl::sz];
	offCommands = new Command*[RemoteControl::sz];
	for (int i = 0; i < RemoteControl::sz; i++) {
		onCommands[i] = 0;
		offCommands[i] = 0;
	}
}

void RemoteControl::setCommand(int slot, Command *onCommand, Command *offCommand) {
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot) {
	if (onCommands[slot] != 0)
		onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot) {
	if (offCommands[slot] != 0)
		offCommands[slot]->execute();
}

string RemoteControl::toString() {
	string sRtn("\n-----------Remote Control--------------\n");
	char buf[256] = { 0 };
	for (int i = 0; i < RemoteControl::sz; i++) {
		if (onCommands[i] != 0 && offCommands[i] != 0) {
			sprintf(buf, "[slot %d] %s %s \n", i, typeid(*onCommands[i]).name(), typeid(*onCommands[i]).name());
			sRtn += string(buf);
		}
	}
	return sRtn;
}

#endif