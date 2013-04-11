#pragma once
#include <cliext/vector>
#include "Die.h"


ref class Dice
{
private:
	array<Die^>^ dice;
	void ramdomizeDice();
	bool contains(int num, array<int>^ nums);
public:
	Dice(void);
	void populateDiceList();
	Die^ getElementAt(int index);
};