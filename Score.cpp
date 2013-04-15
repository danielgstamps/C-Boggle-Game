#include "Score.h"

Score::Score(String^ name, int score){
	this->name = name;
	this->score = score;
}

String^ Score::getName(){
	return this->name;
}
int Score::getScore(){
	return this->score;
}