
#include "Die.h"
#include <time.h>

Die::Die()
{
	this->letters = vector<string>(6);
}

Die::Die(string letter1, string letter2, string letter3, string letter4, string letter5, string letter6){
	this->letters = vector<string>(6);
	letters[0] = letter1;
	letters[1] = letter2;
	letters[2] = letter3;
	letters[3] = letter4;
	letters[4] = letter5;
	letters[5] = letter6;
}

string Die::getRandomLetter(){
	srand((unsigned) time(NULL));
	int randomNumber = rand() % 6;
	return letters[randomNumber];
}
