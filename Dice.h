#pragma once
#include "Die.h"

class Dice
{
private:
	vector<Die> dice;
public:
	Dice(void);
	void populateDiceList();
	Die getElementAt(int index);
};