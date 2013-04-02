#include "Dice.h"

Dice::Dice(void)
{
	this->dice = vector<Die>(16);
	this->populateDiceList();
}

void Dice::populateDiceList(){
	this->dice[0] = Die("R", "I", "F", "O", "B", "X");
	this->dice[1] = Die("I", "F", "E", "H", "E", "Y");
	this->dice[2] = Die("D", "E", "N", "O", "W", "S");
	this->dice[3] = Die("U", "T", "O", "K", "N", "D");
	this->dice[4] = Die("H", "M", "S", "R", "A", "O");
	this->dice[5] = Die("L", "U", "P", "E", "T", "S");
	this->dice[6] = Die("A", "C", "I", "T", "O", "A");
	this->dice[7] = Die("Y", "L", "G", "K", "U", "E");
	this->dice[8] = Die("Qu", "B", "M", "J", "O", "A");
	this->dice[9] = Die("E", "H", "I", "S", "P", "N");
	this->dice[10] = Die("V", "E", "T", "I", "G", "N");
	this->dice[11] = Die("B", "A", "L", "I", "Y", "T");
	this->dice[12] = Die("E", "Z", "A", "V", "N", "D");
	this->dice[13] = Die("R", "A", "L", "E", "S", "C");
	this->dice[14] = Die("U", "W", "I", "L", "R", "G");
	this->dice[15] = Die("P", "A", "C", "E", "M", "D");
}

Die Dice::getElementAt(int index){
	return this->dice[index];
}
