
#include "Die.h"
#include <time.h>

Die::Die(void)
{
	this->letters = gcnew array<String^>(6);
}

Die::Die(String^ letter1, String^ letter2, String^ letter3, String^ letter4, String^ letter5, String^ letter6){
	this->letters = gcnew array<String^>(6);
	letters[0] = letter1;
	letters[1] = letter2;
	letters[2] = letter3;
	letters[3] = letter4;
	letters[4] = letter5;
	letters[5] = letter6;
}

String^ Die::getRandomLetter(){
	srand((unsigned) time(NULL));
	int randomNumber = rand() % 6;
	return letters[randomNumber];
}
