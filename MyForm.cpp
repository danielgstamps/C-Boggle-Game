#include "MyForm.h"
using namespace std;
namespace Project1{
		
	MyForm::MyForm()
	{		
		this->userWordChoice = "";
		this->dice = gcnew Dice();
		this->InitializeComponent();
		this->initializeDice();
		this->selectedButtons = gcnew array<Button^>(16);
		this->guessedWords = gcnew array<String^>(256);
		this->buttonCounter=0;
	}

	void MyForm::InitializeComponent()
	{
		this->components = (gcnew System::ComponentModel::Container());
		this->die0 = (gcnew System::Windows::Forms::Button());
		this->die1 = (gcnew System::Windows::Forms::Button());
		this->die2 = (gcnew System::Windows::Forms::Button());
		this->die4 = (gcnew System::Windows::Forms::Button());
		this->die5 = (gcnew System::Windows::Forms::Button());
		this->die6 = (gcnew System::Windows::Forms::Button());
		this->die8 = (gcnew System::Windows::Forms::Button());
		this->die9 = (gcnew System::Windows::Forms::Button());
		this->die10 = (gcnew System::Windows::Forms::Button());
		this->titleLabel = (gcnew System::Windows::Forms::Label());
		this->userGuessesBox = (gcnew System::Windows::Forms::RichTextBox());
		this->die12 = (gcnew System::Windows::Forms::Button());
		this->die13 = (gcnew System::Windows::Forms::Button());
		this->die14 = (gcnew System::Windows::Forms::Button());
		this->die15 = (gcnew System::Windows::Forms::Button());
		this->die11 = (gcnew System::Windows::Forms::Button());
		this->die7 = (gcnew System::Windows::Forms::Button());
		this->die3 = (gcnew System::Windows::Forms::Button());
		this->dicePanel = (gcnew System::Windows::Forms::Panel());
		this->timeLabel = (gcnew System::Windows::Forms::Label());
		this->timerPanel = (gcnew System::Windows::Forms::Panel());
		this->timerColonLabel = (gcnew System::Windows::Forms::Label());
		this->minutesLeftLabel = (gcnew System::Windows::Forms::Label());
		this->secondsLeftLabel = (gcnew System::Windows::Forms::Label());
		this->submitButton = (gcnew System::Windows::Forms::Button());
		this->wordGuessPanel = (gcnew System::Windows::Forms::Panel());
		this->yourWordLabel = (gcnew System::Windows::Forms::Label());
		this->userWordLabel = (gcnew System::Windows::Forms::Label());
		this->countdownTimer = (gcnew System::Windows::Forms::Timer(this->components));
		this->newGameButton = (gcnew System::Windows::Forms::Button());
		this->highScoresButton = (gcnew System::Windows::Forms::Button());
		this->dicePanel->SuspendLayout();
		this->timerPanel->SuspendLayout();
		this->wordGuessPanel->SuspendLayout();
		this->SuspendLayout();
		// 
		// die0
		// 
		this->die0->BackColor = System::Drawing::Color::DarkGray;
		this->die0->Enabled = false;
		this->die0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die0->Location = System::Drawing::Point(24, 17);
		this->die0->Name = L"die0";
		this->die0->Size = System::Drawing::Size(74, 66);
		this->die0->TabIndex = 0;
		this->die0->UseVisualStyleBackColor = false;
		this->die0->Click += gcnew System::EventHandler(this, &MyForm::die0_Click);
		// 
		// die1
		// 
		this->die1->BackColor = System::Drawing::Color::DarkGray;
		this->die1->Enabled = false;
		this->die1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die1->Location = System::Drawing::Point(104, 17);
		this->die1->Name = L"die1";
		this->die1->Size = System::Drawing::Size(74, 66);
		this->die1->TabIndex = 1;
		this->die1->UseVisualStyleBackColor = false;
		this->die1->Click += gcnew System::EventHandler(this, &MyForm::die1_Click);
		// 
		// die2
		// 
		this->die2->BackColor = System::Drawing::Color::DarkGray;
		this->die2->Enabled = false;
		this->die2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die2->Location = System::Drawing::Point(184, 17);
		this->die2->Name = L"die2";
		this->die2->Size = System::Drawing::Size(74, 66);
		this->die2->TabIndex = 2;
		this->die2->UseVisualStyleBackColor = false;
		this->die2->Click += gcnew System::EventHandler(this, &MyForm::die2_Click);
		// 
		// die4
		// 
		this->die4->BackColor = System::Drawing::Color::DarkGray;
		this->die4->Enabled = false;
		this->die4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die4->Location = System::Drawing::Point(24, 89);
		this->die4->Name = L"die4";
		this->die4->Size = System::Drawing::Size(74, 66);
		this->die4->TabIndex = 4;
		this->die4->UseVisualStyleBackColor = false;
		this->die4->Click += gcnew System::EventHandler(this, &MyForm::die4_Click);
		// 
		// die5
		// 
		this->die5->BackColor = System::Drawing::Color::DarkGray;
		this->die5->Enabled = false;
		this->die5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die5->Location = System::Drawing::Point(104, 89);
		this->die5->Name = L"die5";
		this->die5->Size = System::Drawing::Size(74, 66);
		this->die5->TabIndex = 5;
		this->die5->UseVisualStyleBackColor = false;
		this->die5->Click += gcnew System::EventHandler(this, &MyForm::die5_Click);
		// 
		// die6
		// 
		this->die6->BackColor = System::Drawing::Color::DarkGray;
		this->die6->Enabled = false;
		this->die6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die6->Location = System::Drawing::Point(184, 89);
		this->die6->Name = L"die6";
		this->die6->Size = System::Drawing::Size(74, 66);
		this->die6->TabIndex = 6;
		this->die6->UseVisualStyleBackColor = false;
		this->die6->Click += gcnew System::EventHandler(this, &MyForm::die6_Click);
		// 
		// die8
		// 
		this->die8->BackColor = System::Drawing::Color::DarkGray;
		this->die8->Enabled = false;
		this->die8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die8->Location = System::Drawing::Point(24, 161);
		this->die8->Name = L"die8";
		this->die8->Size = System::Drawing::Size(74, 66);
		this->die8->TabIndex = 8;
		this->die8->UseVisualStyleBackColor = false;
		this->die8->Click += gcnew System::EventHandler(this, &MyForm::die8_Click);
		// 
		// die9
		// 
		this->die9->BackColor = System::Drawing::Color::DarkGray;
		this->die9->Enabled = false;
		this->die9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die9->Location = System::Drawing::Point(104, 161);
		this->die9->Name = L"die9";
		this->die9->Size = System::Drawing::Size(74, 66);
		this->die9->TabIndex = 9;
		this->die9->UseVisualStyleBackColor = false;
		this->die9->Click += gcnew System::EventHandler(this, &MyForm::die9_Click);
		// 
		// die10
		// 
		this->die10->BackColor = System::Drawing::Color::DarkGray;
		this->die10->Enabled = false;
		this->die10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die10->Location = System::Drawing::Point(184, 161);
		this->die10->Name = L"die10";
		this->die10->Size = System::Drawing::Size(74, 66);
		this->die10->TabIndex = 10;
		this->die10->UseVisualStyleBackColor = false;
		this->die10->Click += gcnew System::EventHandler(this, &MyForm::die10_Click);
		// 
		// titleLabel
		// 
		this->titleLabel->AutoSize = true;
		this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->titleLabel->ForeColor = System::Drawing::Color::LightCyan;
		this->titleLabel->Location = System::Drawing::Point(121, 11);
		this->titleLabel->Name = L"titleLabel";
		this->titleLabel->Size = System::Drawing::Size(176, 39);
		this->titleLabel->TabIndex = 9;
		this->titleLabel->Text = L"BOGGLE!";
		// 
		// userGuessesBox
		// 
		this->userGuessesBox->Enabled = false;
		this->userGuessesBox->Location = System::Drawing::Point(393, 70);
		this->userGuessesBox->Name = L"userGuessesBox";
		this->userGuessesBox->Size = System::Drawing::Size(147, 243);
		this->userGuessesBox->TabIndex = 10;
		this->userGuessesBox->Text = L"MAKE A GUESS";
		// 
		// die12
		// 
		this->die12->BackColor = System::Drawing::Color::DarkGray;
		this->die12->Enabled = false;
		this->die12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die12->Location = System::Drawing::Point(24, 233);
		this->die12->Name = L"die12";
		this->die12->Size = System::Drawing::Size(74, 66);
		this->die12->TabIndex = 12;
		this->die12->UseVisualStyleBackColor = false;
		this->die12->Click += gcnew System::EventHandler(this, &MyForm::die12_Click);
		// 
		// die13
		// 
		this->die13->BackColor = System::Drawing::Color::DarkGray;
		this->die13->Enabled = false;
		this->die13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die13->Location = System::Drawing::Point(104, 233);
		this->die13->Name = L"die13";
		this->die13->Size = System::Drawing::Size(74, 66);
		this->die13->TabIndex = 13;
		this->die13->UseVisualStyleBackColor = false;
		this->die13->Click += gcnew System::EventHandler(this, &MyForm::die13_Click);
		// 
		// die14
		// 
		this->die14->BackColor = System::Drawing::Color::DarkGray;
		this->die14->Enabled = false;
		this->die14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die14->Location = System::Drawing::Point(184, 233);
		this->die14->Name = L"die14";
		this->die14->Size = System::Drawing::Size(74, 66);
		this->die14->TabIndex = 14;
		this->die14->UseVisualStyleBackColor = false;
		this->die14->Click += gcnew System::EventHandler(this, &MyForm::die14_Click);
		// 
		// die15
		// 
		this->die15->BackColor = System::Drawing::Color::DarkGray;
		this->die15->Enabled = false;
		this->die15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die15->Location = System::Drawing::Point(264, 233);
		this->die15->Name = L"die15";
		this->die15->Size = System::Drawing::Size(74, 66);
		this->die15->TabIndex = 15;
		this->die15->UseVisualStyleBackColor = false;
		this->die15->Click += gcnew System::EventHandler(this, &MyForm::die15_Click);
		// 
		// die11
		// 
		this->die11->BackColor = System::Drawing::Color::DarkGray;
		this->die11->Enabled = false;
		this->die11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die11->Location = System::Drawing::Point(264, 161);
		this->die11->Name = L"die11";
		this->die11->Size = System::Drawing::Size(74, 66);
		this->die11->TabIndex = 11;
		this->die11->UseVisualStyleBackColor = false;
		this->die11->Click += gcnew System::EventHandler(this, &MyForm::die11_Click);
		// 
		// die7
		// 
		this->die7->BackColor = System::Drawing::Color::DarkGray;
		this->die7->Enabled = false;
		this->die7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die7->Location = System::Drawing::Point(264, 89);
		this->die7->Name = L"die7";
		this->die7->Size = System::Drawing::Size(74, 66);
		this->die7->TabIndex = 7;
		this->die7->UseVisualStyleBackColor = false;
		this->die7->Click += gcnew System::EventHandler(this, &MyForm::die7_Click);
		// 
		// die3
		// 
		this->die3->BackColor = System::Drawing::Color::DarkGray;
		this->die3->Enabled = false;
		this->die3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->die3->Location = System::Drawing::Point(264, 17);
		this->die3->Name = L"die3";
		this->die3->Size = System::Drawing::Size(74, 66);
		this->die3->TabIndex = 3;
		this->die3->UseVisualStyleBackColor = false;
		this->die3->Click += gcnew System::EventHandler(this, &MyForm::die3_Click);
		// 
		// dicePanel
		// 
		this->dicePanel->BackColor = System::Drawing::Color::SteelBlue;
		this->dicePanel->Controls->Add(this->die2);
		this->dicePanel->Controls->Add(this->die3);
		this->dicePanel->Controls->Add(this->die0);
		this->dicePanel->Controls->Add(this->die7);
		this->dicePanel->Controls->Add(this->die1);
		this->dicePanel->Controls->Add(this->die11);
		this->dicePanel->Controls->Add(this->die4);
		this->dicePanel->Controls->Add(this->die15);
		this->dicePanel->Controls->Add(this->die5);
		this->dicePanel->Controls->Add(this->die14);
		this->dicePanel->Controls->Add(this->die6);
		this->dicePanel->Controls->Add(this->die13);
		this->dicePanel->Controls->Add(this->die8);
		this->dicePanel->Controls->Add(this->die12);
		this->dicePanel->Controls->Add(this->die9);
		this->dicePanel->Controls->Add(this->die10);
		this->dicePanel->Location = System::Drawing::Point(24, 53);
		this->dicePanel->Name = L"dicePanel";
		this->dicePanel->Size = System::Drawing::Size(363, 318);
		this->dicePanel->TabIndex = 18;
		// 
		// timeLabel
		// 
		this->timeLabel->AutoSize = true;
		this->timeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->timeLabel->ForeColor = System::Drawing::SystemColors::Control;
		this->timeLabel->Location = System::Drawing::Point(22, 6);
		this->timeLabel->Name = L"timeLabel";
		this->timeLabel->Size = System::Drawing::Size(100, 22);
		this->timeLabel->TabIndex = 19;
		this->timeLabel->Text = L"Time Left:";
		// 
		// timerPanel
		// 
		this->timerPanel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
		this->timerPanel->Controls->Add(this->timerColonLabel);
		this->timerPanel->Controls->Add(this->minutesLeftLabel);
		this->timerPanel->Controls->Add(this->secondsLeftLabel);
		this->timerPanel->Controls->Add(this->timeLabel);
		this->timerPanel->Location = System::Drawing::Point(393, 377);
		this->timerPanel->Name = L"timerPanel";
		this->timerPanel->Size = System::Drawing::Size(148, 95);
		this->timerPanel->TabIndex = 20;
		// 
		// timerColonLabel
		// 
		this->timerColonLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->timerColonLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
		this->timerColonLabel->Location = System::Drawing::Point(40, 28);
		this->timerColonLabel->Name = L"timerColonLabel";
		this->timerColonLabel->Size = System::Drawing::Size(25, 44);
		this->timerColonLabel->TabIndex = 22;
		this->timerColonLabel->Text = L":";
		// 
		// minutesLeftLabel
		// 
		this->minutesLeftLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->minutesLeftLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
		this->minutesLeftLabel->Location = System::Drawing::Point(3, 33);
		this->minutesLeftLabel->Name = L"minutesLeftLabel";
		this->minutesLeftLabel->Size = System::Drawing::Size(50, 45);
		this->minutesLeftLabel->TabIndex = 20;
		this->minutesLeftLabel->Text = L"3";
		// 
		// secondsLeftLabel
		// 
		this->secondsLeftLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->secondsLeftLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
		this->secondsLeftLabel->Location = System::Drawing::Point(59, 33);
		this->secondsLeftLabel->Name = L"secondsLeftLabel";
		this->secondsLeftLabel->Size = System::Drawing::Size(84, 45);
		this->secondsLeftLabel->TabIndex = 0;
		this->secondsLeftLabel->Text = L"00";
		// 
		// submitButton
		// 
		this->submitButton->BackColor = System::Drawing::Color::DarkGray;
		this->submitButton->Enabled = false;
		this->submitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->submitButton->Location = System::Drawing::Point(277, 17);
		this->submitButton->Name = L"submitButton";
		this->submitButton->Size = System::Drawing::Size(74, 66);
		this->submitButton->TabIndex = 18;
		this->submitButton->Text = L"Submit";
		this->submitButton->UseVisualStyleBackColor = false;
		this->submitButton->Click += gcnew System::EventHandler(this, &MyForm::submitButton_Click);
		// 
		// wordGuessPanel
		// 
		this->wordGuessPanel->BackColor = System::Drawing::Color::SteelBlue;
		this->wordGuessPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->wordGuessPanel->Controls->Add(this->yourWordLabel);
		this->wordGuessPanel->Controls->Add(this->userWordLabel);
		this->wordGuessPanel->Controls->Add(this->submitButton);
		this->wordGuessPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->wordGuessPanel->Location = System::Drawing::Point(24, 377);
		this->wordGuessPanel->Name = L"wordGuessPanel";
		this->wordGuessPanel->Size = System::Drawing::Size(363, 95);
		this->wordGuessPanel->TabIndex = 21;
		// 
		// yourWordLabel
		// 
		this->yourWordLabel->AutoSize = true;
		this->yourWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->yourWordLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
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
		this->userWordLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
		this->userWordLabel->Location = System::Drawing::Point(19, 33);
		this->userWordLabel->MaximumSize = System::Drawing::Size(250, 50);
		this->userWordLabel->Name = L"userWordLabel";
		this->userWordLabel->Size = System::Drawing::Size(0, 29);
		this->userWordLabel->TabIndex = 20;
		this->userWordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// countdownTimer
		// 
		this->countdownTimer->Tick += gcnew System::EventHandler(this, &MyForm::countdownTimer_Tick);
		// 
		// newGameButton
		// 
		this->newGameButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->newGameButton->Location = System::Drawing::Point(393, 319);
		this->newGameButton->Name = L"newGameButton";
		this->newGameButton->Size = System::Drawing::Size(70, 52);
		this->newGameButton->TabIndex = 23;
		this->newGameButton->Text = L"New Game";
		this->newGameButton->UseVisualStyleBackColor = true;
		this->newGameButton->Click += gcnew System::EventHandler(this, &MyForm::newGameButton_Click);
		// 
		// highScoresButton
		// 
		this->highScoresButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(0)));
		this->highScoresButton->Location = System::Drawing::Point(474, 319);
		this->highScoresButton->Name = L"highScoresButton";
		this->highScoresButton->Size = System::Drawing::Size(70, 52);
		this->highScoresButton->TabIndex = 24;
		this->highScoresButton->Text = L"High Scores";
		this->highScoresButton->UseVisualStyleBackColor = true;
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::SteelBlue;
		this->ClientSize = System::Drawing::Size(573, 488);
		this->Controls->Add(this->highScoresButton);
		this->Controls->Add(this->newGameButton);
		this->Controls->Add(this->wordGuessPanel);
		this->Controls->Add(this->timerPanel);
		this->Controls->Add(this->dicePanel);
		this->Controls->Add(this->userGuessesBox);
		this->Controls->Add(this->titleLabel);
		this->Name = L"MyForm";
		this->Text = L"Boggle by Daniel Stamps and Bryan Patterson";
		this->dicePanel->ResumeLayout(false);
		this->timerPanel->ResumeLayout(false);
		this->timerPanel->PerformLayout();
		this->wordGuessPanel->ResumeLayout(false);
		this->wordGuessPanel->PerformLayout();
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

	void MyForm::enableButtons(){
		this->die0->Enabled=true;
		this->die1->Enabled=true;
		this->die2->Enabled=true;
		this->die3->Enabled=true;
		this->die4->Enabled=true;
		this->die5->Enabled=true;
		this->die6->Enabled=true;
		this->die7->Enabled=true;
		this->die8->Enabled=true;
		this->die9->Enabled=true;
		this->die10->Enabled=true;
		this->die11->Enabled=true;
		this->die12->Enabled=true;
		this->die13->Enabled=true;
		this->die14->Enabled=true;
		this->die15->Enabled=true;

		this->die0->BackColor=Color::White;
		this->die1->BackColor=Color::White;
		this->die2->BackColor=Color::White;
		this->die3->BackColor=Color::White;
		this->die4->BackColor=Color::White;
		this->die5->BackColor=Color::White;
		this->die6->BackColor=Color::White;
		this->die7->BackColor=Color::White;
		this->die8->BackColor=Color::White;
		this->die9->BackColor=Color::White;
		this->die10->BackColor=Color::White;
		this->die11->BackColor=Color::White;
		this->die12->BackColor=Color::White;
		this->die13->BackColor=Color::White;
		this->die14->BackColor=Color::White;
		this->die15->BackColor=Color::White;
	}

	void MyForm::cornerDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo, Button^ corner){
		disableAllButtons();
		sideOne->Enabled = true;
		sideTwo->Enabled = true;
		corner->Enabled = true;

		itSelf->BackColor = Color::DarkOrange; 
		sideOne->BackColor = Color::White;
		sideTwo->BackColor = Color::White;
		corner->BackColor = Color::White;

		disableButtonsClicked();
		
	}
	void MyForm::insideEdgeDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo,Button^ sideThree, Button^ cornerOne, Button^ cornerTwo){
		disableAllButtons();
		sideOne->Enabled = true;
		sideTwo->Enabled = true;
		sideThree->Enabled = true;
		cornerOne->Enabled = true;
		cornerTwo->Enabled = true;

		itSelf->BackColor = Color::DarkOrange; 
		sideOne->BackColor = Color::White;
		sideTwo->BackColor = Color::White;
		sideThree->BackColor = Color::White;
		cornerOne->BackColor = Color::White;
		cornerTwo->BackColor = Color::White;

		disableButtonsClicked();

	}
	void MyForm::insideDie(Button^ itSelf,Button^ sideOne,Button^ sideTwo,Button^ sideThree, Button^ sideFour, Button^ cornerOne, Button^ cornerTwo, Button^ cornerThree, Button^ cornerFour){
		disableAllButtons();
		sideOne->Enabled = true;
		sideTwo->Enabled = true;
		sideThree->Enabled = true;
		sideFour->Enabled = true;
		cornerOne->Enabled = true;
		cornerTwo->Enabled = true;
		cornerThree->Enabled = true;
		cornerFour->Enabled= true;

		itSelf->BackColor = Color::DarkOrange; 
		sideOne->BackColor = Color::White;
		sideTwo->BackColor = Color::White;
		sideThree->BackColor = Color::White;
		sideFour->BackColor = Color::White;
		cornerOne->BackColor = Color::White;
		cornerTwo->BackColor = Color::White;
		cornerThree->BackColor = Color::White;
		cornerFour->BackColor = Color::White;
		disableButtonsClicked();

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

		this->die0->BackColor=Color::DarkGray;
		this->die1->BackColor=Color::DarkGray;
		this->die2->BackColor=Color::DarkGray;
		this->die3->BackColor=Color::DarkGray;
		this->die4->BackColor=Color::DarkGray;
		this->die5->BackColor=Color::DarkGray;
		this->die6->BackColor=Color::DarkGray;
		this->die7->BackColor=Color::DarkGray;
		this->die8->BackColor=Color::DarkGray;
		this->die9->BackColor=Color::DarkGray;
		this->die10->BackColor=Color::DarkGray;
		this->die11->BackColor=Color::DarkGray;
		this->die12->BackColor=Color::DarkGray;
		this->die13->BackColor=Color::DarkGray;
		this->die14->BackColor=Color::DarkGray;
		this->die15->BackColor=Color::DarkGray;	
	}

	void MyForm::disableButtonsClicked(){
		for(int i = 0; i <this->buttonCounter; i++){
			this->selectedButtons[i]->Enabled = false;
			this->selectedButtons[i]->BackColor = Color::LightSalmon;
		}
	}

	void MyForm::addGuessedWord(){
		this->userGuessesBox->Text="";
		this->userGuessesBox->Text="GUESSES:\n~~~~~~~~\n";

		for(int i = this->wordCounter; i>0; i--){
			this->userGuessesBox->Text+=this->guessedWords[i-1]+"\n";
		}
	}

	// ~~~~~~~~ ACTION LISTENERS ~~~~~~~~~~ //

	// Die 0
	System::Void MyForm::die0_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die0->Text;
		this->userWordLabel->Text = this->userWordChoice;
		cornerDie(this->die0, this->die1, this->die4, this->die5);
		this->selectedButtons[this->buttonCounter]=this->die0;
		this->buttonCounter++;
		
	}

	// Die 1
	System::Void MyForm::die1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die1->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideEdgeDie(this->die1, this->die2, this->die5, this->die0, this->die6, this->die4);
		this->selectedButtons[this->buttonCounter]=this->die1;
		this->buttonCounter++;
		
	}

	// Die 2
	System::Void MyForm::die2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die2->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideEdgeDie(this->die2, this->die3, this->die6, this->die1, this->die7, this->die5);
		this->selectedButtons[this->buttonCounter]=this->die2;
		this->buttonCounter++;
	}

	// Die 3
	System::Void MyForm::die3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die3->Text;
		this->userWordLabel->Text = this->userWordChoice;
		cornerDie(this->die3, this->die2, this->die7, this->die6);
		this->selectedButtons[this->buttonCounter]=this->die3;
		this->buttonCounter++;
	}

	// Die 4
	System::Void MyForm::die4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die4->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideEdgeDie(this->die4, this->die0, this->die5, this->die8, this->die1, this->die9);
		this->selectedButtons[this->buttonCounter]=this->die4;
		this->buttonCounter++;
		
	}

	// Die 5
	System::Void MyForm::die5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die5->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideDie(this->die5, this->die1, this->die6, this->die9, this->die4, this->die2, this->die10, this->die8, this->die0);
		this->selectedButtons[this->buttonCounter]=this->die5;
		this->buttonCounter++;
		
	}

	// Die 6
	System::Void MyForm::die6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die6->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideDie(this->die6, this->die2, this->die7, this->die10, this->die5, this->die3, this->die11, this->die9, this->die1);
		this->selectedButtons[this->buttonCounter]=this->die6;
		this->buttonCounter++;
	}

	// Die 7
	System::Void MyForm::die7_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die7->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideEdgeDie(this->die7, this->die3, this->die11, this->die6, this->die10, this->die2);
		this->selectedButtons[this->buttonCounter]=this->die7;
		this->buttonCounter++;
	}

	// Die 8
	System::Void MyForm::die8_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die8->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideEdgeDie(this->die8, this->die4, this->die9, this->die12, this->die5, this->die13);
		this->selectedButtons[this->buttonCounter]=this->die8;
		this->buttonCounter++;
	}

	// Die 9
	System::Void MyForm::die9_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die9->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideDie(this->die9, this->die5, this->die10, this->die13, this->die8, this->die6, this->die14, this->die12, this->die4);
		this->selectedButtons[this->buttonCounter]=this->die9;
		this->buttonCounter++;
	}

	// Die 10
	System::Void MyForm::die10_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die10->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideDie(this->die10, this->die6, this->die11, this->die14, this->die9, this->die7, this->die15, this->die13, this->die5);
		this->selectedButtons[this->buttonCounter]=this->die10;
		this->buttonCounter++;
	}

	// Die 11
	System::Void MyForm::die11_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die11->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideEdgeDie(this->die11, this->die7, this->die15, this->die10, this->die14, this->die6);
		this->selectedButtons[this->buttonCounter]=this->die11;
		this->buttonCounter++;
	}

	// Die 12
	System::Void MyForm::die12_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die12->Text;
		this->userWordLabel->Text = this->userWordChoice;
		cornerDie(this->die12, this->die8, this->die13, this->die9);
		this->selectedButtons[this->buttonCounter]=this->die12;
		this->buttonCounter++;
	}

	// Die 13
	System::Void MyForm::die13_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die13->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideEdgeDie(this->die13, this->die9, this->die14, this->die12, this->die8, this->die10);
		this->selectedButtons[this->buttonCounter]=this->die13;
		this->buttonCounter++;
	}

	// Die 14
	System::Void MyForm::die14_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die14->Text;
		this->userWordLabel->Text = this->userWordChoice;
		insideEdgeDie(this->die14, this->die10, this->die15, this->die13, this->die9, this->die11);
		this->selectedButtons[this->buttonCounter]=this->die14;
		this->buttonCounter++;
	}

	// Die 15
	System::Void MyForm::die15_Click(System::Object^  sender, System::EventArgs^  e) {
		this->userWordChoice += this->die15->Text;
		this->userWordLabel->Text = this->userWordChoice;
		cornerDie(this->die15, this->die11, this->die14, this->die10);
		this->selectedButtons[this->buttonCounter]=this->die15;
		this->buttonCounter++;
	}

	// Submit Button
	System::Void MyForm::submitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if(this->userWordLabel->Text==""||this->userWordLabel->Text=="Please guess a word!"){
			this->userWordLabel->Text="Please guess a word!";
		}else{
			enableButtons();
			this->guessedWords[this->wordCounter]=this->userWordChoice;
			this->wordCounter++;
			this->userWordChoice = "";
			this->userWordLabel->Text = "";
			this->buttonCounter=0;
		//	this->selectedButtons->Clear;
			addGuessedWord();
		}
	}

	// New Game Button
	System::Void MyForm::newGameButton_Click(System::Object^  sender, System::EventArgs^  e){
		resetTimer();
		enableButtons();
		initializeDice();

		this->guessedWords->Clear;
		this->wordCounter = 0;
		this->buttonCounter = 0;
		this->guessedWords->Clear;

		this->userGuessesBox->Text = "GUESSES:\n~~~~~~~~\n";
		this->yourWordLabel->Text = "Your word:";
		this->userWordChoice = "";
		this->userWordLabel->Text = "";

		this->newGameButton->Enabled = false;
		this->newGameButton->BackColor = Color::DarkGray;
		this->highScoresButton->Enabled = false;
		this->highScoresButton->BackColor = Color::DarkGray;
		this->submitButton->Enabled = true;
		this->submitButton->BackColor = Color::White;
	}

	// Timer
	System::Void MyForm::countdownTimer_Tick(System::Object^  sender, System::EventArgs^  e){
		if(this->secondsRemaining == 0 && this->minutesRemaining > 0){
			this->minutesRemaining -= 1;
			this->secondsRemaining = 60;
		}

		this->secondsRemaining -= 1;

		String^ minutesRemainingStr = minutesRemaining.ToString();
		String^ secondsRemainingStr = secondsRemaining.ToString();

		if (secondsRemainingStr->Length == 1){
			secondsRemainingStr = "0" + secondsRemainingStr;
		}

		this->minutesLeftLabel->Text = minutesRemainingStr;
		this->secondsLeftLabel->Text = secondsRemainingStr;

		if(this->minutesRemaining == 0 && this->secondsRemaining == 0){
			endGame();
		}
	}

	void MyForm::endGame(){
		this->countdownTimer->Enabled = false;
		this->disableAllButtons();
		this->submitButton->Enabled = false;
		this->submitButton->BackColor = Color::DarkGray;
		this->countdownTimer->Enabled = false;
		this->yourWordLabel->Text = "";
		this->userWordLabel->Text = "Game over!";
		this->newGameButton->Enabled = true;
		this->newGameButton->BackColor = Color::White;
		this->highScoresButton->Enabled = true;
		this->highScoresButton->BackColor = Color::White;
	}

	void MyForm::resetTimer(){
		this->countdownTimer->Enabled = true;
		this->minutesRemaining = 3;
		this->secondsRemaining = 0;
	}

	MyForm::~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}
}