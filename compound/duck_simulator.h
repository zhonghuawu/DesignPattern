#ifndef DUCK_SIMULATOR_H
#define DUCK_SIMULATOR_H
#include "mallard_duck.h"
#include "redhead_duck.h"
#include "duck_call.h"
#include "rubber_duck.h"
#include <iostream>
class DuckSimulator {
public :
	void simulate();
	void simulate(Quackable* duck);
};
#endif