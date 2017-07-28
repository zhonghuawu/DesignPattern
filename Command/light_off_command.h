#ifndef LIGHT_OFF_COMMAND_H
#define LIGHT_OFF_COMMAND_H

#include "light.h"
#include "command.h"

class LightOffCommand : public Command {
	Light light;
public:
	LightOffCommand(Light l);
	void execute();
};
LightOffCommand::LightOffCommand(Light l) {
	this->light = l;
}
void LightOffCommand::execute() {
	light.off();
}

#endif //LIGHT_OFF_COMMAND_H
