#include "MyForm.h"
using namespace std;
namespace Project1{
		
	MyForm::MyForm()
	{		
		this->userWordChoice = "";
		this->dice = gcnew Dice();
		this->InitializeComponent();
		this->initializeDice();
	}

	void MyForm::InitializeComponent()
	{
		this->die0 = (gcnew System::Windows::Forms::Button());
		this->die1 = (gcnew System::Windows::Forms::Button());
		this->die2 = (gcnew System::Windows::Forms::Button());
		this->die4 = (gcnew System::Windows::Forms::Button());
		this->die5 = (gcnew System::Windows::Forms::Button());
		this->die6 = (gcnew System::Windows::Forms::Button());
		this->die8 = (gcnew System::Windows::Forms::Button());
		this->die9 = (gcnew System::Windows::Forms::Button());
		this->die10 = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
		this->die12 = (gcnew System::Windows::Forms::Button());
		this->die13 = (gcnew System::Windows::Forms::Button());
		this->die14 = (gcnew System::Windows::Forms::Button());
		this->die15 = (gcnew System::Windows::Forms::Button());
		this->die11 = (gcnew System::Windows::Forms::Button());
		this->die7 = (gcnew System::Windows::Forms::Button());
		this->die3 = (gcnew System::Windows::Forms::Button());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->lblTimeName = (gcnew System::Windows::Forms::Label());
		this->panel2 = (gcnew System::Windows::Forms::Panel());
		this->lblTime = (gcnew System::Windows::Forms::Label());
		this->button17 = (gcnew System::Windows::Forms::Button());
		this->panel3 = (gcnew System::Windows::Forms::Panel());
		this->yourWordLabel = (gcnew System::Windows::Forms::Label());
		this->userWordLabel = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->panel1->SuspendLayout();
		this->panel2->SuspendLayout();
		this->panel3->SuspendLayout();
		this->SuspendLayout();
		// 
		// die0
		// 
		this->die0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die0->Location = System::Drawing::Point(24, 17);
		this->die0->Name = L"die0";
		this->die0->Size = System::Drawing::Size(74, 66);
		this->die0->TabIndex = 0;
		this->die0->UseVisualStyleBackColor = true;
		this->die0->Click += gcnew System::EventHandler(this, &MyForm::die0_Click);
		// 
		// die1
		// 
		this->die1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die1->Location = System::Drawing::Point(104, 17);
		this->die1->Name = L"die1";
		this->die1->Size = System::Drawing::Size(74, 66);
		this->die1->TabIndex = 1;
		this->die1->UseVisualStyleBackColor = true;
		this->die1->Click += gcnew System::EventHandler(this, &MyForm::die1_Click);
		// 
		// die2
		// 
		this->die2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die2->Location = System::Drawing::Point(184, 17);
		this->die2->Name = L"die2";
		this->die2->Size = System::Drawing::Size(74, 66);
		this->die2->TabIndex = 2;
		this->die2->UseVisualStyleBackColor = true;
		this->die2->Click += gcnew System::EventHandler(this, &MyForm::die2_Click);
		// 
		// die4
		// 
		this->die4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die4->Location = System::Drawing::Point(24, 89);
		this->die4->Name = L"die4";
		this->die4->Size = System::Drawing::Size(74, 66);
		this->die4->TabIndex = 4;
		this->die4->UseVisualStyleBackColor = true;
		this->die4->Click += gcnew System::EventHandler(this, &MyForm::die4_Click);
		// 
		// die5
		// 
		this->die5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die5->Location = System::Drawing::Point(104, 89);
		this->die5->Name = L"die5";
		this->die5->Size = System::Drawing::Size(74, 66);
		this->die5->TabIndex = 5;
		this->die5->UseVisualStyleBackColor = true;
		this->die5->Click += gcnew System::EventHandler(this, &MyForm::die5_Click);
		// 
		// die6
		// 
		this->die6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die6->Location = System::Drawing::Point(184, 89);
		this->die6->Name = L"die6";
		this->die6->Size = System::Drawing::Size(74, 66);
		this->die6->TabIndex = 6;
		this->die6->UseVisualStyleBackColor = true;
		this->die6->Click += gcnew System::EventHandler(this, &MyForm::die6_Click);
		// 
		// die8
		// 
		this->die8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die8->Location = System::Drawing::Point(24, 161);
		this->die8->Name = L"die8";
		this->die8->Size = System::Drawing::Size(74, 66);
		this->die8->TabIndex = 8;
		this->die8->UseVisualStyleBackColor = true;
		this->die8->Click += gcnew System::EventHandler(this, &MyForm::die8_Click);
		// 
		// die9
		// 
		this->die9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die9->Location = System::Drawing::Point(104, 161);
		this->die9->Name = L"die9";
		this->die9->Size = System::Drawing::Size(74, 66);
		this->die9->TabIndex = 9;
		this->die9->UseVisualStyleBackColor = true;
		this->die9->Click += gcnew System::EventHandler(this, &MyForm::die9_Click);
		// 
		// die10
		// 
		this->die10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die10->Location = System::Drawing::Point(184, 161);
		this->die10->Name = L"die10";
		this->die10->Size = System::Drawing::Size(74, 66);
		this->die10->TabIndex = 10;
		this->die10->UseVisualStyleBackColor = true;
		this->die10->Click += gcnew System::EventHandler(this, &MyForm::die10_Click);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label1->ForeColor = System::Drawing::Color::LightCyan;
		this->label1->Location = System::Drawing::Point(121, 11);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(176, 39);
		this->label1->TabIndex = 9;
		this->label1->Text = L"BOGGLE!";
		// 
		// richTextBox1
		// 
		this->richTextBox1->Location = System::Drawing::Point(393, 70);
		this->richTextBox1->Name = L"richTextBox1";
		this->richTextBox1->Size = System::Drawing::Size(147, 301);
		this->richTextBox1->TabIndex = 10;
		this->richTextBox1->Text = L"";
		// 
		// die12
		// 
		this->die12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die12->Location = System::Drawing::Point(24, 233);
		this->die12->Name = L"die12";
		this->die12->Size = System::Drawing::Size(74, 66);
		this->die12->TabIndex = 12;
		this->die12->UseVisualStyleBackColor = true;
		this->die12->Click += gcnew System::EventHandler(this, &MyForm::die12_Click);
		// 
		// die13
		// 
		this->die13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die13->Location = System::Drawing::Point(104, 233);
		this->die13->Name = L"die13";
		this->die13->Size = System::Drawing::Size(74, 66);
		this->die13->TabIndex = 13;
		this->die13->UseVisualStyleBackColor = true;
		this->die13->Click += gcnew System::EventHandler(this, &MyForm::die13_Click);
		// 
		// die14
		// 
		this->die14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die14->Location = System::Drawing::Point(184, 233);
		this->die14->Name = L"die14";
		this->die14->Size = System::Drawing::Size(74, 66);
		this->die14->TabIndex = 14;
		this->die14->UseVisualStyleBackColor = true;
		this->die14->Click += gcnew System::EventHandler(this, &MyForm::die14_Click);
		// 
		// die15
		// 
		this->die15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die15->Location = System::Drawing::Point(264, 233);
		this->die15->Name = L"die15";
		this->die15->Size = System::Drawing::Size(74, 66);
		this->die15->TabIndex = 15;
		this->die15->UseVisualStyleBackColor = true;
		this->die15->Click += gcnew System::EventHandler(this, &MyForm::die15_Click);
		// 
		// die11
		// 
		this->die11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die11->Location = System::Drawing::Point(264, 161);
		this->die11->Name = L"die11";
		this->die11->Size = System::Drawing::Size(74, 66);
		this->die11->TabIndex = 11;
		this->die11->UseVisualStyleBackColor = true;
		this->die11->Click += gcnew System::EventHandler(this, &MyForm::die11_Click);
		// 
		// die7
		// 
		this->die7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die7->Location = System::Drawing::Point(264, 89);
		this->die7->Name = L"die7";
		this->die7->Size = System::Drawing::Size(74, 66);
		this->die7->TabIndex = 7;
		this->die7->UseVisualStyleBackColor = true;
		this->die7->Click += gcnew System::EventHandler(this, &MyForm::die7_Click);
		// 
		// die3
		// 
		this->die3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die3->Location = System::Drawing::Point(264, 17);
		this->die3->Name = L"die3";
		this->die3->Size = System::Drawing::Size(74, 66);
		this->die3->TabIndex = 3;
		this->die3->UseVisualStyleBackColor = true;
		this->die3->Click += gcnew System::EventHandler(this, &MyForm::die3_Click);
		// 
		// panel1
		// 
		this->panel1->BackColor = System::Drawing::Color::DarkGreen;
		this->panel1->Controls->Add(this->die2);
		this->panel1->Controls->Add(this->die3);
		this->panel1->Controls->Add(this->die0);
		this->panel1->Controls->Add(this->die7);
		this->panel1->Controls->Add(this->die1);
		this->panel1->Controls->Add(this->die11);
		this->panel1->Controls->Add(this->die4);
		this->panel1->Controls->Add(this->die15);
		this->panel1->Controls->Add(this->die5);
		this->panel1->Controls->Add(this->die14);
		this->panel1->Controls->Add(this->die6);
		this->panel1->Controls->Add(this->die13);
		this->panel1->Controls->Add(this->die8);
		this->panel1->Controls->Add(this->die12);
		this->panel1->Controls->Add(this->die9);
		this->panel1->Controls->Add(this->die10);
		this->panel1->Location = System::Drawing::Point(24, 53);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(363, 318);
		this->panel1->TabIndex = 18;
		// 
		// lblTimeName
		// 
		this->lblTimeName->AutoSize = true;
		this->lblTimeName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->lblTimeName->ForeColor = System::Drawing::SystemColors::Control;
		this->lblTimeName->Location = System::Drawing::Point(41, 6);
		this->lblTimeName->Name = L"lblTimeName";
		this->lblTimeName->Size = System::Drawing::Size(60, 22);
		this->lblTimeName->TabIndex = 19;
		this->lblTimeName->Text = L"Time:";
		// 
		// panel2
		// 
		this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
		this->panel2->Controls->Add(this->lblTime);
		this->panel2->Controls->Add(this->lblTimeName);
		this->panel2->Location = System::Drawing::Point(393, 377);
		this->panel2->Name = L"panel2";
		this->panel2->Size = System::Drawing::Size(148, 95);
		this->panel2->TabIndex = 20;
		// 
		// lblTime
		// 
		this->lblTime->AutoSize = true;
		this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->lblTime->ForeColor = System::Drawing::SystemColors::ButtonFace;
		this->lblTime->Location = System::Drawing::Point(17, 30);
		this->lblTime->Name = L"lblTime";
		this->lblTime->Size = System::Drawing::Size(114, 54);
		this->lblTime->TabIndex = 0;
		this->lblTime->Text = L"3.00";
		// 
		// button17
		// 
		this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->button17->Location = System::Drawing::Point(277, 17);
		this->button17->Name = L"button17";
		this->button17->Size = System::Drawing::Size(74, 66);
		this->button17->TabIndex = 18;
		this->button17->Text = L"Submit";
		this->button17->UseVisualStyleBackColor = true;
		// 
		// panel3
		// 
		this->panel3->BackColor = System::Drawing::SystemColors::AppWorkspace;
		this->panel3->Controls->Add(this->yourWordLabel);
		this->panel3->Controls->Add(this->userWordLabel);
		this->panel3->Controls->Add(this->label2);
		this->panel3->Controls->Add(this->button17);
		this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->panel3->Location = System::Drawing::Point(24, 377);
		this->panel3->Name = L"panel3";
		this->panel3->Size = System::Drawing::Size(363, 95);
		this->panel3->TabIndex = 21;
		// 
		// yourWordLabel
		// 
		this->yourWordLabel->AutoSize = true;
		this->yourWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->yourWordLabel->Location = System::Drawing::Point(19, 6);
		this->yourWordLabel->Name = L"yourWordLabel";
		this->yourWordLabel->Size = System::Drawing::Size(106, 25);
		this->yourWordLabel->TabIndex = 21;
		this->yourWordLabel->Text = L"Your word:";
		// 
		// userWordLabel
		// 
		this->userWordLabel->AutoSize = true;
		this->userWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
		this->userWordLabel->Location = System::Drawing::Point(19, 33);
		this->userWordLabel->MaximumSize = System::Drawing::Size(250, 50);
		this->userWordLabel->Name = L"userWordLabel";
		this->userWordLabel->Size = System::Drawing::Size(0, 29);
		this->userWordLabel->TabIndex = 20;
		this->userWordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
		this->label2->Location = System::Drawing::Point(64, 12);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(0, 31);
		this->label2->TabIndex = 20;
		this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::DarkGreen;
		this->ClientSize = System::Drawing::Size(573, 488);
		this->Controls->Add(this->panel3);
		this->Controls->Add(this->panel2);
		this->Controls->Add(this->panel1);
		this->Controls->Add(this->richTextBox1);
		this->Controls->Add(this->label1);
		this->Name = L"MyForm";
		this->Text = L"Group9 Boggle";
		this->panel1->ResumeLayout(false);
		this->panel2->ResumeLayout(false);
		this->panel2->PerformLayout();
		this->panel3->ResumeLayout(false);
		this->panel3->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();

	} // End of initializeComponent

	void MyForm::initializeDice(){
		this->die0->Text = this->dice->getElementAt(0)->getRandomLetter();
		this->die1->Text = this->dice->getElementAt(1)->getRandomLetter();
		this->die2->Text = this->dice->getElementAt(2)->getRandomLetter();
		this->die3->Text = this->dice->getElementAt(3)->getRandomLetter();
		this->die4->Text = this->dice->getElementAt(4)->getRandomLetter();
		this->die5->Text = this->dice->getElementAt(5)->getRandomLetter();
		this->die6->Text = this->dice->getElementAt(6)->getRandomLetter();
		this->die7->Text = this->dice->getElementAt(7)->getRandomLetter();
		this->die8->Text = this->dice->getElementAt(8)->getRandomLetter();
		this->die9->Text = this->dice->getElementAt(9)->getRandomLetter();
		this->die10->Text = this->dice->getElementAt(10)->getRandomLetter();
		this->die11->Text = this->dice->getElementAt(11)->getRandomLetter();
		this->die12->Text = this->dice->getElementAt(12)->getRandomLetter();
		this->die13->Text = this->dice->getElementAt(13)->getRandomLetter();
		this->die14->Text = this->dice->getElementAt(14)->getRandomLetter();
		this->die15->Text = this->dice->getElementAt(15)->getRandomLetter();
	}

	void MyForm::cornerDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo, Button^ corner){
		itSelf->Enabled = false;
		sideOne->Enabled = true;
		sideTwo->Enabled = true;
		corner->Enabled = true;
	}
	void MyForm::insideEdgeDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo,Button^ sideThree, Button^ cornerOne, Button^ cornerTwo){
		itSelf->Enabled = false;
		sideOne->Enabled = true;
		sideTwo->Enabled = true;
		sideThree->Enabled = true;
		cornerOne->Enabled = true;
		cornerTwo->Enabled = true;
	}
	void MyForm::insideDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo,Button^ sideThree, Button^ sideFour, Button^ cornerOne, Button^ cornerTwo, Button^ cornerThree, Button^ cornerFour){
		itSelf->Enabled = false;
		sideOne->Enabled = true;
		sideTwo->Enabled = true;
		sideThree->Enabled = true;
		sideFour->Enabled = true;
		cornerOne->Enabled = true;
		cornerTwo->Enabled = true;
		cornerThree->Enabled = true;
		cornerFour->Enabled= true;
	}
	void MyForm::disableAllButtons(){
		this->die0->Enabled=false;
		this->die1->Enabled=false;
		this->die2->Enabled=false;
		this->die3->Enabled=false;
		this->die4->Enabled=false;
		this->die5->Enabled=false;
		this->die6->Enabled=false;
		this->die7->Enabled=false;
		this->die8->Enabled=false;
		this->die9->Enabled=false;
		this->die10->Enabled=false;
		this->die11->Enabled=false;
		this->die12->Enabled=false;
		this->die13->Enabled=false;
		this->die14->Enabled=false;
		this->die15->Enabled=false;
	}

	void MyForm::disableButtonsClicked(){
		///after every button is clicked it will be added to an array. 
		///This method should disable every button in the array with a for each loop.
	}



	// ~~~~~~ ACTION LISTENERS ~~~~~~~~~~ //

	// Die 0
	System::Void MyForm::die0_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die0->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 1
	System::Void MyForm::die1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die1->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 2
	System::Void MyForm::die2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die2->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 3
	System::Void MyForm::die3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die3->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 4
	System::Void MyForm::die4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die4->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 5
	System::Void MyForm::die5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die5->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 6
	System::Void MyForm::die6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die6->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 7
	System::Void MyForm::die7_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die7->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 8
	System::Void MyForm::die8_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die8->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 9
	System::Void MyForm::die9_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die9->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 10
	System::Void MyForm::die10_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die10->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 11
	System::Void MyForm::die11_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die11->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 12
	System::Void MyForm::die12_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die12->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 13
	System::Void MyForm::die13_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die13->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 14
	System::Void MyForm::die14_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die14->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}

	// Die 15
	System::Void MyForm::die15_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die15->Text;
		this->userWordLabel->Text = this->userWordChoice;
	}







	MyForm::~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}
}