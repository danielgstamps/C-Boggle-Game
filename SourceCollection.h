#pragma once
#include "Score.h"
#include <iostream>
#include <fstream>
#include <string>
//#include <msclr/marshal_cppstd.h>
#include <stdlib.h>


using namespace std;
using namespace System;

class ScoreCollection
{
private:
	array<Score^>^ scores;
public:
	ScoreCollection();
	
};