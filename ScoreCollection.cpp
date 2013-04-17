#include "ScoreCollection.h"
/*
Constuctor for ScoreCollection
Predcondition: none
Postcondition: none
*/
ScoreCollection::ScoreCollection(){
	this->scores = gcnew array<Score^>(5);
}
/*
This method loads dictionary
Predcondition: none
Postcondition: dictionary != null
*/
void ScoreCollection::loadScores(){
	string line;
	ifstream myfile ("./Scores.txt");
	int position = 0;
	int lineNum=1;
	string name;
	int score;
	if (myfile.is_open()){
		while ( myfile.good() ){
			getline (myfile,line);
			if(lineNum%2==1){
				name = line;
			}else{
			istringstream buffer(line);
			buffer >> score;  
			String^ string = Marshal::PtrToStringAnsi(static_cast<IntPtr>(const_cast<char *>(name.c_str()))); 
			Score^ player = gcnew Score(string, score);
			this->scores[position]= player;
			position++;
			}
			lineNum++;
		}

    myfile.close();
	}
}
/*
This method writes to highscore file
Predcondition: none
Postcondition: file will have high scores.
*/
void ScoreCollection::writeScores(){
  ofstream myfile;
  myfile.open ("Scores.txt");
	for(int i = 0; i <5; i++){
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(this->scores[i]->getName());
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string stdString(charPointer, this->scores[i]->getName()->Length);
		Marshal::FreeHGlobal(pointer);
		int score = this->scores[i]->getScore();

		std::string s;
		std::stringstream out;
		out << score;
		s = out.str();

		myfile << stdString+"\n";
		myfile << s+"\n";
	}
  myfile.close();
}
/*
This method tells if a score is a high score
Predcondition: none
@param is score to check
@return bool if it is a high score
*/
bool ScoreCollection::isHighScore(int score){
	bool isHighScore=false;
	for(int i=0; i<5; i++){
		if(this->scores[i]->getScore()<score){
			isHighScore = true;
		}
	}
	return isHighScore;
}
/*
This method adds a new high score
Predcondition: none
Postcondition: new high score will be in highscore
@param name of player
@param score of player
*/
void ScoreCollection::newScore(String^ name, int score){
		int position;
		array<Score^>^ tempScore= gcnew array<Score^>(6);
		
		for(int i = 0; i < 5; i++){
			tempScore[i] = this->scores[i]; 
		}
		tempScore[5] = gcnew Score(name,score);

		int i,j;
		for(i=0;i<6;i++)
		{
			for(j=0;j<i;j++)
			{
				if(tempScore[i]->getScore()>tempScore[j]->getScore())
				{
					Score^ temp= tempScore[i]; //swap 
					tempScore[i] = tempScore[j];
					tempScore[j] = temp;
				}
			}
		}

		for (int i =0; i<5; i++){
			this->scores[i] = tempScore[i];
		}	
}
/*
This method gets array of scores
Predcondition: none
@return array of scores.
*/
array<Score^>^ ScoreCollection::getScores(){
	return this->scores;
}