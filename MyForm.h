#pragma once
#include "Dice.h"
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
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  die0;
	private: System::Windows::Forms::Button^  die1;
	private: System::Windows::Forms::Button^  die2;
	private: System::Windows::Forms::Button^  die4;
	private: System::Windows::Forms::Button^  die5;
	private: System::Windows::Forms::Button^  die6;
	private: System::Windows::Forms::Button^  die8;
	private: System::Windows::Forms::Button^  die9;
	private: System::Windows::Forms::Button^  die10;
	protected: 



	protected: 

	protected: 








	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  die12;
	private: System::Windows::Forms::Button^  die13;
	private: System::Windows::Forms::Button^  die14;
	private: System::Windows::Forms::Button^  die15;




	private: System::Windows::Forms::Button^  die11;

	private: System::Windows::Forms::Button^  die7;

	private: System::Windows::Forms::Button^  die3;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  lblTimeName;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  lblTime;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;


	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ADDED BY DANIEL ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	private: Dice dice = Dice();
	 // Want to create a Dice list, so that we can access them to set the text of each Die block to a random letter.




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// die0
			// 
			this->die0->Location = System::Drawing::Point(24, 17);
			this->die0->Name = L"die0";
			this->die0->Size = System::Drawing::Size(74, 66);
			this->die0->TabIndex = 0;
			//this->die0->Text = L"button1";
			this->die0->Text = L"button1";
			this->die0->UseVisualStyleBackColor = true;
			// 
			// die1
			// 
			this->die1->Location = System::Drawing::Point(121, 17);
			this->die1->Name = L"die1";
			this->die1->Size = System::Drawing::Size(74, 66);
			this->die1->TabIndex = 1;
			this->die1->Text = L"button2";
			this->die1->UseVisualStyleBackColor = true;
			// 
			// die2
			// 
			this->die2->Location = System::Drawing::Point(219, 17);
			this->die2->Name = L"die2";
			this->die2->Size = System::Drawing::Size(74, 66);
			this->die2->TabIndex = 2;
			this->die2->Text = L"button3";
			this->die2->UseVisualStyleBackColor = true;
			// 
			// die4
			// 
			this->die4->Location = System::Drawing::Point(24, 102);
			this->die4->Name = L"die4";
			this->die4->Size = System::Drawing::Size(74, 66);
			this->die4->TabIndex = 3;
			this->die4->Text = L"button4";
			this->die4->UseVisualStyleBackColor = true;
			// 
			// die5
			// 
			this->die5->Location = System::Drawing::Point(121, 102);
			this->die5->Name = L"die5";
			this->die5->Size = System::Drawing::Size(74, 66);
			this->die5->TabIndex = 4;
			this->die5->Text = L"button5";
			this->die5->UseVisualStyleBackColor = true;
			// 
			// die6
			// 
			this->die6->Location = System::Drawing::Point(219, 102);
			this->die6->Name = L"die6";
			this->die6->Size = System::Drawing::Size(74, 66);
			this->die6->TabIndex = 5;
			this->die6->Text = L"button6";
			this->die6->UseVisualStyleBackColor = true;
			// 
			// die8
			// 
			this->die8->Location = System::Drawing::Point(24, 187);
			this->die8->Name = L"die8";
			this->die8->Size = System::Drawing::Size(74, 66);
			this->die8->TabIndex = 6;
			this->die8->Text = L"button7";
			this->die8->UseVisualStyleBackColor = true;
			// 
			// die9
			// 
			this->die9->Location = System::Drawing::Point(121, 187);
			this->die9->Name = L"die9";
			this->die9->Size = System::Drawing::Size(74, 66);
			this->die9->TabIndex = 7;
			this->die9->Text = L"button8";
			this->die9->UseVisualStyleBackColor = true;
			// 
			// die10
			// 
			this->die10->Location = System::Drawing::Point(219, 187);
			this->die10->Name = L"die10";
			this->die10->Size = System::Drawing::Size(74, 66);
			this->die10->TabIndex = 8;
			this->die10->Text = L"button9";
			this->die10->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightCyan;
			this->label1->Location = System::Drawing::Point(166, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 39);
			this->label1->TabIndex = 9;
			this->label1->Text = L"BOGGLE!";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(484, 71);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(147, 268);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// die12
			// 
			this->die12->Location = System::Drawing::Point(24, 274);
			this->die12->Name = L"die12";
			this->die12->Size = System::Drawing::Size(74, 66);
			this->die12->TabIndex = 11;
			this->die12->Text = L"button10";
			this->die12->UseVisualStyleBackColor = true;
			// 
			// die13
			// 
			this->die13->Location = System::Drawing::Point(121, 274);
			this->die13->Name = L"die13";
			this->die13->Size = System::Drawing::Size(74, 66);
			this->die13->TabIndex = 12;
			this->die13->Text = L"button11";
			this->die13->UseVisualStyleBackColor = true;
			// 
			// die14
			// 
			this->die14->Location = System::Drawing::Point(219, 274);
			this->die14->Name = L"die14";
			this->die14->Size = System::Drawing::Size(74, 66);
			this->die14->TabIndex = 13;
			this->die14->Text = L"button12";
			this->die14->UseVisualStyleBackColor = true;
			// 
			// die15
			// 
			this->die15->Location = System::Drawing::Point(314, 274);
			this->die15->Name = L"die15";
			this->die15->Size = System::Drawing::Size(74, 66);
			this->die15->TabIndex = 14;
			this->die15->Text = L"button13";
			this->die15->UseVisualStyleBackColor = true;
			// 
			// die11
			// 
			this->die11->Location = System::Drawing::Point(314, 187);
			this->die11->Name = L"die11";
			this->die11->Size = System::Drawing::Size(74, 66);
			this->die11->TabIndex = 15;
			this->die11->Text = L"button14";
			this->die11->UseVisualStyleBackColor = true;
			// 
			// die7
			// 
			this->die7->Location = System::Drawing::Point(314, 102);
			this->die7->Name = L"die7";
			this->die7->Size = System::Drawing::Size(74, 66);
			this->die7->TabIndex = 16;
			this->die7->Text = L"button15";
			this->die7->UseVisualStyleBackColor = true;
			// 
			// die3
			// 
			this->die3->Location = System::Drawing::Point(314, 17);
			this->die3->Name = L"die3";
			this->die3->Size = System::Drawing::Size(74, 66);
			this->die3->TabIndex = 17;
			this->die3->Text = L"button16";
			this->die3->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
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
			this->panel1->Location = System::Drawing::Point(49, 71);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(411, 360);
			this->panel1->TabIndex = 18;
			// 
			// lblTimeName
			// 
			this->lblTimeName->AutoSize = true;
			this->lblTimeName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTimeName->ForeColor = System::Drawing::SystemColors::Control;
			this->lblTimeName->Location = System::Drawing::Point(3, 13);
			this->lblTimeName->Name = L"lblTimeName";
			this->lblTimeName->Size = System::Drawing::Size(43, 15);
			this->lblTimeName->TabIndex = 19;
			this->lblTimeName->Text = L"Time:";
			this->lblTimeName->Click += gcnew System::EventHandler(this, &MyForm::lblTimeName_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Controls->Add(this->lblTime);
			this->panel2->Controls->Add(this->lblTimeName);
			this->panel2->Location = System::Drawing::Point(484, 437);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(148, 95);
			this->panel2->TabIndex = 20;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblTime->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblTime->Location = System::Drawing::Point(10, 39);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(67, 31);
			this->lblTime->TabIndex = 0;
			this->lblTime->Text = L"3.00";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(314, 13);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(74, 66);
			this->button17->TabIndex = 18;
			this->button17->Text = L"Submit";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->button17);
			this->panel3->Location = System::Drawing::Point(49, 437);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(411, 95);
			this->panel3->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(27, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 31);
			this->label2->TabIndex = 20;
			this->label2->Text = L"test";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(484, 345);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(147, 85);
			this->panel4->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(3, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 15);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Score:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(10, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 31);
			this->label3->TabIndex = 20;
			this->label3->Text = L"0000";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGreen;
			this->ClientSize = System::Drawing::Size(674, 566);
			this->Controls->Add(this->panel4);
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
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lblTimeName_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
};
}
