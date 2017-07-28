#ifndef LIGHT_ON_COMMAND_H
#define LIGHT_ON_COMMAND_H

#include "light.h"
#include "command.h"

class LightOnCommand : public Command {
	Light light;
public:
	LightOnCommand(Light l);
	void execute();
};
LightOnCommand::LightOnCommand(Light l) {
	this->light = l;
}
void LightOnCommand::execute() {
	light.on();
}

#endif //LIGHT_ON_COMMAND_H
