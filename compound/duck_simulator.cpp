#include "duck_simulator.h"

void DuckSimulator::simulate() {
	Quackable* mallardDuck = new MallardDuck();
	Quackable* redheadDuck = new RedheadDuck();
	Quackable* duckCall = new DuckCall();
	Quackable* rubberDuck = new RubberDuck();

	std::cout << "\nDuck Simulator" << std::endl;

	this->simulate(mallardDuck);
	this->simulate(redheadDuck);
	this->simulate(duckCall);
	this->simulate(rubberDuck);
}

void DuckSimulator::simulate(Quackable* duck) {
	duck->quack();
}