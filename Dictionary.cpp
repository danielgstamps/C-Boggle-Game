
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

bool Dictionary::wordExist(String^ word){
//	string stdString = msclr::interop::marshal_as< std::string >(word);
//	return this->set.find(stdString)!= this->set.end();
	return false;
}

int Dictionary::points(String^ word){
	int point = 0;
	if(word->Length==3||word->Length==4){
		point =1;
	}else if(word->Length==5){
		point = 2;
	}else if(word->Length==6){
		point = 3;
	}else if(word->Length==7){
		point =5;
	}else if(word->Length>=8){
		point =11;
	}

	return point;
}