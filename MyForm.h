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
	Dice^ dice;
	void InitializeComponent();
	void initializeDice();

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
	System::Windows::Forms::Label^  label2;
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

#pragma region Windows Form Designer generated code

		 System::Void MyForm::die0_Click(System::Object^  sender, System::EventArgs^  e) {
			this->userWordChoice += this->die0->Text;
		}
#pragma endregion



};
}
