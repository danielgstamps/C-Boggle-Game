#include "Dice.h"
#include <cliext/vector>

Dice::Dice(void)
{
	this->dice = cliext::vector<Die^>(16);
	this->populateDiceList();
}

void Dice::populateDiceList(){
	this->dice.push_back(gcnew Die("R", "I", "F", "O", "B", "X"));
	this->dice.push_back(gcnew Die("I", "F", "E", "H", "E", "Y"));
	this->dice.push_back(gcnew Die("D", "E", "N", "O", "W", "S"));
	this->dice.push_back(gcnew Die("U", "T", "O", "K", "N", "D"));
	this->dice.push_back(gcnew Die("H", "M", "S", "R", "A", "O"));
	this->dice.push_back(gcnew Die("L", "U", "P", "E", "T", "S"));
	this->dice.push_back(gcnew Die("A", "C", "I", "T", "O", "A"));
	this->dice.push_back(gcnew Die("Y", "L", "G", "K", "U", "E"));
	this->dice.push_back(gcnew Die("Qu", "B", "M", "J", "O", "A"));
	this->dice.push_back(gcnew Die("E", "H", "I", "S", "P", "N"));
	this->dice.push_back(gcnew Die("V", "E", "T", "I", "G", "N"));
	this->dice.push_back(gcnew Die("B", "A", "L", "I", "Y", "T"));
	this->dice.push_back(gcnew Die("E", "Z", "A", "V", "N", "D"));
	this->dice.push_back(gcnew Die("R", "A", "L", "E", "S", "C"));
	this->dice.push_back(gcnew Die("U", "W", "I", "L", "R", "G"));
	this->dice.push_back(gcnew Die("P", "A", "C", "E", "M", "D"));
}

Die^ Dice::getElementAt(int index){
	return this->dice.at(index);
}
