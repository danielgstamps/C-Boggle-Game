#pragma once
#include "Score.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <stdlib.h>


using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices; 
/*
This is the SocoreCollection Class
@Author Dainel Stamps && Bryan Patterson
@Version 4-17-13
*/
ref class ScoreCollection
{
private:
	array<Score^>^ scores;
public:
	ScoreCollection();
	void loadScores();
	void writeScores();
	bool isHighScore(int score);
	void newScore(String^ name, int score);
	array<Score^>^ getScores();
};