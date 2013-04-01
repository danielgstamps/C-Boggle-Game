#pragma once
#pragma once
#include <vector>
using namespace System;
using namespace std;

ref class Die
{
private:
	array<String^>^ letters;
public:
	Die(void);
	Die(String^ letter1, String^ letter2, String^ letter3, String^ letter4, String^ letter5, String^ letter6);
	String^ getRandomLetter();
};

