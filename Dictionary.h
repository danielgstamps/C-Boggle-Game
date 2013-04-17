#pragma once
#include <unordered_set> 

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;
using namespace System;
using System::Collections::Hashtable;
using System::Runtime::InteropServices::Marshal;

/*
This is the dictionary class
@Author Dainel Stamps && Bryan Patterson
@Version 4-17-13
*/
ref class Dictionary
{
private:
	Hashtable^ table;
public:
	Dictionary();
	void loadDictionary();
	bool wordExist(String^ word);
	int points(String^ word);
};