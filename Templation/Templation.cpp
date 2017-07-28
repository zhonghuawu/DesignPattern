// Templation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "coffee.h"
#include "tea.h"
#include "coffee_with_hook.h"

int _tmain(int argc, _TCHAR* argv[]) {
	Coffee coffee;
	Tea tea;
	coffee.prepareRecipe();
	tea.prepareRecipe();
	CoffeeWithHook coffeeWithHook;
	coffeeWithHook.prepareRecipe();
	return 0;
}

