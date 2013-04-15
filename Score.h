#pragma once
#include <string>


using namespace std;
using namespace System;
using namespace std;

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