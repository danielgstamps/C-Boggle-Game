
#include "Dictionary.h"


/*
Constuctor for Dictionary 
Predcondition: none
Postcondition: none
*/
Dictionary::Dictionary(){
	this->table = gcnew Hashtable;
}

/*
This method loads the dictionary
Predcondition: none
Postcondition: iff (dictionary.text !=NULL) HashTable !=null
*/
void Dictionary::loadDictionary(){
	string line;
	ifstream myfile ("./dictionary.txt");

	if (myfile.is_open()){
		while ( myfile.good() ){
			getline (myfile,line);
			String^ cliString = Marshal::PtrToStringAnsi(static_cast<IntPtr>(const_cast<char *>(line.c_str()))); 
			this->table->Add(cliString , cliString);
		}

    myfile.close();
	}
}

/*
This method returns if a word exists
Predcondition: none
@return bool if word exists
*/
bool Dictionary::wordExist(String^ word){
	return this->table->Contains(word);
}

/*
This method returns point value of string.
Predcondition: none
@return value of word as point basied on word length.
*/
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