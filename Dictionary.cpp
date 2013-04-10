
#include "Dictionary.h"


Dictionary::Dictionary(){
	this->set = unordered_set<string>();
}

void Dictionary::loadDictionary(){
	 string line;
  ifstream myfile ("dictionary.txt");
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      getline (myfile,line);
	 cout<<line<<endl;
	  this->set.insert(line);
    }
    myfile.close();
  }
}

bool Dictionary::wordExist(string word){

	return this->set.find(word)!= this->set.end();
}