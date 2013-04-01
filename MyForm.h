#pragma once

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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  lblTimeName;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  lblTime;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblTimeName = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(121, 17);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 66);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(219, 17);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 66);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(24, 108);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(74, 66);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(121, 108);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(74, 66);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(219, 108);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(74, 66);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(24, 194);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(74, 66);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(121, 194);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(74, 66);
			this->button8->TabIndex = 7;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(219, 194);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(74, 66);
			this->button9->TabIndex = 8;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(178, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 39);
			this->label1->TabIndex = 9;
			this->label1->Text = L"BOGGLE!";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(484, 71);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(147, 368);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(24, 280);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(74, 66);
			this->button10->TabIndex = 11;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(121, 280);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(74, 66);
			this->button11->TabIndex = 12;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(219, 280);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(74, 66);
			this->button12->TabIndex = 13;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(314, 280);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(74, 66);
			this->button13->TabIndex = 14;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(314, 194);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(74, 66);
			this->button14->TabIndex = 15;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(314, 108);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(74, 66);
			this->button15->TabIndex = 16;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(314, 17);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(74, 66);
			this->button16->TabIndex = 17;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Location = System::Drawing::Point(49, 71);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(411, 369);
			this->panel1->TabIndex = 18;
			// 
			// lblTimeName
			// 
			this->lblTimeName->AutoSize = true;
			this->lblTimeName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTimeName->ForeColor = System::Drawing::SystemColors::Control;
			this->lblTimeName->Location = System::Drawing::Point(3, 4);
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
			this->panel2->Location = System::Drawing::Point(485, 445);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(147, 74);
			this->panel2->TabIndex = 20;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblTime->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblTime->Location = System::Drawing::Point(42, 30);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(59, 31);
			this->lblTime->TabIndex = 0;
			this->lblTime->Text = L"test";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(314, 3);
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
			this->panel3->Location = System::Drawing::Point(49, 446);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(411, 73);
			this->panel3->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(28, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 31);
			this->label2->TabIndex = 20;
			this->label2->Text = L"test";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(674, 544);
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

		}
#pragma endregion
	private: System::Void lblTimeName_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
};
}
