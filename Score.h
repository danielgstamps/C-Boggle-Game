#pragma once
#include <string>
using namespace std;
using namespace System;
using namespace std;

/*
This is the score class
@Author Dainel Stamps && Bryan Patterson
@Version 4-17-13
*/
ref class Score
{
private:
	String^ name;
	int score;
public:
	Score(String^ name, int score);
	String^ getName();
	int getScore();
};