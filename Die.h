#pragma once
#pragma once
#include <cliext/vector>
using namespace System;
using namespace std;

/*
This is the Die Class
@Author Dainel Stamps && Bryan Patterson
@Version 4-17-13
*/
ref class Die
{
private:
	array<String^>^ letters;
public:
	Die();
	Die(String^ letter1, String^ letter2, String^ letter3, String^ letter4, String^ letter5, String^ letter6);
	String^ getRandomLetter();
};

