#pragma once
#include <cliext/vector>
#include "Die.h"

ref class Dice
{
private:
	cliext::vector<Die^> dice;
public:
	Dice(void);
	void populateDiceList();
	Die^ getElementAt(int index);
};