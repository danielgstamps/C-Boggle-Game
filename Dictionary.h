#pragma once
#include <unordered_set> 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using namespace System;
using namespace std;

class Dictionary
{
private:
	unordered_set<string> set;
public:
	Dictionary();
	void loadDictionary();
	bool wordExist(string word);
};