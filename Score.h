#pragma once
#include <string>


using namespace std;
using namespace System;
using namespace std;

class Score
{
private:
	string name;
	int score;
public:
	Score(string name, int score);
	string getName();
	int getScore();
};