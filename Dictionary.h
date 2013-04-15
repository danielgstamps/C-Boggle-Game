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