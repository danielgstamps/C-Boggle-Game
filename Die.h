#pragma once
#pragma once
#include <vector>
using namespace System;
using namespace std;

class Die
{
private:
	vector<string> letters;
public:
	Die();
	Die(string letter1, string letter2, string letter3, string letter4, string letter5, string letter6);
	string getRandomLetter();
};

