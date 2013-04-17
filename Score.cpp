#include "Score.h"

/*
Constuctor for Score
Predcondition: none
@param name player name
@param score player score
*/
Score::Score(String^ name, int score){
	this->name = name;
	this->score = score;
}

/*
This method gets player name
Predcondition: none
@return player name
*/
String^ Score::getName(){
	return this->name;
}

/*
This method gets player score
Predcondition: none
@retun int of player score.
*/
int Score::getScore(){
	return this->score;
}