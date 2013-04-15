
#include "Dictionary.h"



Dictionary::Dictionary(){
	this->set = unordered_set<string>();
}

void Dictionary::loadDictionary(){
	string line;
	ifstream myfile ("dictionary.txt");

	if (myfile.is_open()){

		while ( myfile.good() ){
			getline (myfile,line);
			this->set->insert(line);
		}

    myfile.close();
	}
}

bool Dictionary::wordExist(String^ word){
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(word);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
    std::string stdString(charPointer, word->Length);
    Marshal::FreeHGlobal(pointer);
	return this->set.find(stdString)!= this->set.end();
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