// Singleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Singleton.h"

int main() {
	Singleton* instance = Singleton::getInstance();
	Singleton* instance2 = Singleton::getInstance();
}

