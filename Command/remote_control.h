#ifndef REMOTE_CONTROL_H
#define REMOTE_CONTROL_H
#include "command.h"

#include <string>
using std::string;

class RemoteControl {
private :
	enum { sz = 7 };
	Command** onCommands;
	Command** offCommands;
public :
	RemoteControl();
	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);

public :
	string toString();
};


#endif