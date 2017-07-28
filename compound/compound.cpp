// compound.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/***
* compound pattern: pattern of pattern
*/

#include "duck_simulator.h"

int _tmain(int argc, _TCHAR* argv[]) {
	DuckSimulator* simulator = new DuckSimulator();
	simulator->simulate();
}

