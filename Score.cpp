#include "Score.h"

Score::Score(string name, int score){
	this->name = name;
	this->score = score;
}

string Score::getName(){

	return this->name;
}
int Score::getScore(){

	return this->score;
}