#pragma once
#include "Die.h"
ref class Dice
{
private:
	array<Die^>^ dice;
public:
	Dice(void);
	void populateDiceList();
	Die^ getElementAt(int index);
};

