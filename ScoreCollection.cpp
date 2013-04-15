#include "ScoreCollection.h"



ScoreCollection::ScoreCollection(){
	this->scores = gcnew array<Score^>(5);
}

array<Score^>^ ScoreCollection::getScores(){
	return this->scores;
}

void ScoreCollection::loadScores(){
	string line;
	ifstream myfile ("Scores.txt");
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

bool ScoreCollection::isHighScore(int score){
	bool isHighScore=false;
	for(int i=0; i<5; i++){
		if(this->scores[i]->getScore()<score){
			isHighScore = true;
		}
	}
	return isHighScore;
}

void ScoreCollection::newScore(String^ name, int score){
		int possition;
		array<Score^>^ tempScore= gcnew array<Score^>(4);
		///May not look the cleanest but i did it this way for o(n) notation rather than going 0(n*n) nesting for loops
		for(int i=0; i<5; i++){
			if(this->scores[i]->getScore() < score){
				possition = i;
			}
		}
		for(int i=0; i<5; i++){
			if(i<possition){
				tempScore[i] = this->scores[i];
			}else if (i == possition){
				Score^ newScore = gcnew Score(name,score);
				tempScore[i] = newScore;
			}else{
				tempScore[i] = this->scores[i+1];
			}
			this->scores = tempScore;
		}
}