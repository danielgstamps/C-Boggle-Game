#pragma once
#include "Dice.h"
#include "Dictionary.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
	MyForm();


	protected:
	~MyForm();

	private: 
	String^ userWordChoice;

	private: System::Windows::Forms::Label^  yourWordLabel;
	private: System::Windows::Forms::Label^  userWordLabel;
	private: System::Windows::Forms::Label^  label2;
			 Dice^ dice;
	array<Button^>^ selectedButtons;
	int buttonCounter; 
	int wordCounter; 
	array<String^>^ guessedWords;
	void addGuessedWord();
	void InitializeComponent();
	void initializeDice();
	void cornerDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo, Button^ corner);
	void insideEdgeDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo,Button^ sideThree, Button^ cornerOne, Button^ cornerTwo);
	void insideDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo,Button^ sideThree, Button^ sideFour, Button^ cornerOne, Button^ cornerTwo, Button^ cornerThree, Button^ cornerFour);
	void disableAllButtons();
	void disableButtonsClicked();
	void enableButtons();

	// ----- FORMS ------ //
	System::Windows::Forms::Button^  die0;
	System::Windows::Forms::Button^  die1;
	System::Windows::Forms::Button^  die2;
	System::Windows::Forms::Button^  die4;
	System::Windows::Forms::Button^  die5;
	System::Windows::Forms::Button^  die6;
	System::Windows::Forms::Button^  die8;
	System::Windows::Forms::Button^  die9;
	System::Windows::Forms::Button^  die10;
	System::Windows::Forms::Label^  label1;
	System::Windows::Forms::RichTextBox^  richTextBox1;
	System::Windows::Forms::Button^  die12;
	System::Windows::Forms::Button^  die13;
	System::Windows::Forms::Button^  die14;
	System::Windows::Forms::Button^  die15;
	System::Windows::Forms::Button^  die11;
	System::Windows::Forms::Button^  die7;
	System::Windows::Forms::Button^  die3;
	System::Windows::Forms::Panel^  panel1;
	System::Windows::Forms::Label^  lblTimeName;
	System::Windows::Forms::Panel^  panel2;
	System::Windows::Forms::Label^  lblTime;
	System::Windows::Forms::Button^  button17;
	System::Windows::Forms::Panel^  panel3;

	System::Windows::Forms::MenuStrip^  menuStrip1;
	System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  startToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  stopToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  highScoresToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  howToToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem1;		
	System::ComponentModel::Container ^components;

	// ----- ACTION LISTENERS ------ //
	System::Void MyForm::die0_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die1_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die2_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die3_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die4_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die5_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die6_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die7_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die8_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die9_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die10_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die11_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die12_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die13_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die14_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void MyForm::die15_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void button17_Click(System::Object^  sender, System::EventArgs^  e);
			 
	};











#pragma region Windows Form Designer generated code
#pragma endregion
}
