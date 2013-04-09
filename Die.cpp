
#include "Die.h"
#include <time.h>
#include <cliext/vector>

Die::Die()
{
	this->letters = cliext::vector<String^>(6);
}

Die::Die(String^ letter1, String^ letter2, String^ letter3, String^ letter4, String^ letter5, String^ letter6){
	this->letters = cliext::vector<String^>(6);
	letters.push_back(letter1);
	letters.push_back(letter2);	
	letters.push_back(letter3);
	letters.push_back(letter4);
	letters.push_back(letter5);
	letters.push_back(letter6);
}

String^ Die::getRandomLetter(){
	int randomNumber = rand() % 6;
	return letters.at(randomNumber);
}
