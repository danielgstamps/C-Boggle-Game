#pragma once
#include "Dice.h"
#include "Dictionary.h"
#include "Score.h"
#include "ScoreCollection.h"
using namespace System;
using System::Collections::Hashtable;


/*
This is Boggle GUI
@Author Dainel Stamps && Bryan Patterson
@Version 4-17-13
*/
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BoggleGUI
	/// </summary>
	public ref class BoggleGUI : public System::Windows::Forms::Form
	{
	public:
	BoggleGUI();

	protected:
	~BoggleGUI();

	private: 
	Hashtable^ guessedWords;
	String^ userName;
	String^ userWordChoice;
	Dice^ dice;
	array<Button^>^ selectedButtons;	
	Dictionary^ dictionary;
	ScoreCollection^ scores;
	int newGameCounter;
	int score;
	int buttonCounter;
	int minutesRemaining;
	System::Windows::Forms::Button^  newGameButton;
	System::Windows::Forms::Button^  highScoresButton;
	int secondsRemaining;
	private: System::Windows::Forms::MenuStrip^  menuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^  tsmFile;
	private: System::Windows::Forms::ToolStripMenuItem^  tsiNewGame;
	private: System::Windows::Forms::ToolStripMenuItem^  tsiExit;




	private: System::Windows::Forms::ToolStripMenuItem^  tsmHelp;
	private: System::Windows::Forms::ToolStripMenuItem^  tsiGameInstructions;


	private: System::Windows::Forms::ToolStripMenuItem^  tsmAbout;
	private: System::Windows::Forms::ToolStripMenuItem^  tsiAbout;
	private: System::Windows::Forms::TextBox^  txtUserName;
	private: System::Windows::Forms::Button^  btnNameSubmit;




	private: System::Windows::Forms::ToolStripMenuItem^  tsiHighScores;

	bool isUserWordChoiceValid();
	bool isWordAlreadyGuessed();
	void addUserToHighScores();
	void addGuessedWord();
	void InitializeComponent();
	void initializeDice();
	void cornerDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo, Button^ corner);
	void insideEdgeDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo,Button^ sideThree, Button^ cornerOne, Button^ cornerTwo);
	void insideDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo,Button^ sideThree, Button^ sideFour, Button^ cornerOne, Button^ cornerTwo, Button^ cornerThree, Button^ cornerFour);
	void disableAllButtons();
	void disableButtonsClicked();
	void enableButtons();
	void newGame();
	void endGame();
	void resetTimer();
	void showHighScores();

	// ----- FORMS ------ //
	System::Windows::Forms::Button^  die0;
	System::Windows::Forms::Button^  die1;
	System::Windows::Forms::Button^  die2;
	System::Windows::Forms::Button^  die3;
	System::Windows::Forms::Button^  die4;
	System::Windows::Forms::Button^  die5;
	System::Windows::Forms::Button^  die6;
	System::Windows::Forms::Button^  die7;
	System::Windows::Forms::Button^  die8;
	System::Windows::Forms::Button^  die9;
	System::Windows::Forms::Button^  die10;
	System::Windows::Forms::Button^  die11;
	System::Windows::Forms::Button^  die12;
	System::Windows::Forms::Button^  die13;
	System::Windows::Forms::Button^  die14;
	System::Windows::Forms::Button^  die15;
	System::Windows::Forms::Button^  submitButton;
	System::Windows::Forms::Timer^  countdownTimer;
	System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Label^  yourScoreLabel;

	System::Windows::Forms::Label^  userWordLabel;

	System::Windows::Forms::Label^  timeLabel;
	System::Windows::Forms::Label^  secondsLeftLabel;
	System::Windows::Forms::Label^  timerColonLabel;
	System::Windows::Forms::Label^  minutesLeftLabel;

	System::Windows::Forms::Panel^  dicePanel;
	System::Windows::Forms::Panel^  timerPanel;
	System::Windows::Forms::Panel^  wordGuessPanel;
	System::Windows::Forms::MenuStrip^  menuStrip1;
	System::Windows::Forms::RichTextBox^  userGuessesBox;
	System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  startToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  stopToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  highScoresToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  howToToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem1;		
	System::ComponentModel::IContainer^  components;


	// ----- ACTION LISTENERS ------ //
	System::Void BoggleGUI::die0_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die1_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die2_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die3_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die4_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die5_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die6_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die7_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die8_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die9_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die10_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die11_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die12_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die13_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die14_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::die15_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void BoggleGUI::submitButton_Click(System::Object^  sender, System::EventArgs^  e);	
	System::Void BoggleGUI::countdownTimer_Tick(System::Object^  sender, System::EventArgs^  e); 
	System::Void BoggleGUI::newGameButton_Click(System::Object^  sender, System::EventArgs^  e);	

	// ----- MENU BAR ------ //
	System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);	 
	System::Void closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void gameInstructionsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void aboutThisProjectToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void highScoresButton_Click(System::Object^  sender, System::EventArgs^  e); 
	System::Void btnNameSubmit_Click(System::Object^  sender, System::EventArgs^  e);
		 
};

#pragma region Windows Form Designer generated code
#pragma endregion
}