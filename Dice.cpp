#include "Dice.h"


Dice::Dice(void)
{
	this->dice = gcnew array<Die^>(16);
}

void Dice::populateDiceList(){
	this->dice[0] = gcnew Die("R", "I", "F", "O", "B", "X");
	this->dice[1] = gcnew Die("I", "F", "E", "H", "E", "Y");
	this->dice[2] = gcnew Die("D", "E", "N", "O", "W", "S");
	this->dice[3] = gcnew Die("U", "T", "O", "K", "N", "D");
	this->dice[4] = gcnew Die("H", "M", "S", "R", "A", "O");
	this->dice[5] = gcnew Die("L", "U", "P", "E", "T", "S");
	this->dice[6] = gcnew Die("A", "C", "I", "T", "O", "A");
	this->dice[7] = gcnew Die("Y", "L", "G", "K", "U", "E");
	this->dice[8] = gcnew Die("Qu", "B", "M", "J", "O", "A");
	this->dice[9] = gcnew Die("E", "H", "I", "S", "P", "N");
	this->dice[10] = gcnew Die("V", "E", "T", "I", "G", "N");
	this->dice[11] = gcnew Die("B", "A", "L", "I", "Y", "T");
	this->dice[12] = gcnew Die("E", "Z", "A", "V", "N", "D");
	this->dice[13] = gcnew Die("R", "A", "L", "E", "S", "C");
	this->dice[14] = gcnew Die("U", "W", "I", "L", "R", "G");
	this->dice[15] = gcnew Die("P", "A", "C", "E", "M", "D");
}

Die^ Dice::getElementAt(int index){
	return this->dice[index];
}
