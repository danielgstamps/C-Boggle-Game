#pragma once
#include <cliext/vector>
#include "Die.h"

/*
This is the DIce Class.
@Author Dainel Stamps && Bryan Patterson
@Version 4-17-13
*/
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