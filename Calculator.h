#pragma once
#include "Stackk.h"
#include <msclr\marshal_cppstd.h>

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button20;
	protected: 
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  display;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::TextBox^  display2;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;


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
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->display2 = (gcnew System::Windows::Forms::TextBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Red;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(469, 9);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(31, 21);
			this->button20->TabIndex = 43;
			this->button20->Text = L"X";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Calculator::button20_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Silver;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(211, 228);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(49, 34);
			this->button19->TabIndex = 42;
			this->button19->Text = L"F";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Calculator::button19_Click);
			this->button19->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Silver;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(46, 228);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(49, 34);
			this->button18->TabIndex = 41;
			this->button18->Text = L"B";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Calculator::button18_Click);
			this->button18->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Silver;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(127, 227);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 34);
			this->button17->TabIndex = 40;
			this->button17->Text = L"M";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Calculator::button17_Click);
			this->button17->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Silver;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(332, 352);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(49, 34);
			this->button16->TabIndex = 39;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Calculator::button16_Click);
			this->button16->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Silver;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(413, 352);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 34);
			this->button15->TabIndex = 38;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Calculator::button15_Click);
			this->button15->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Silver;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(332, 415);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(49, 34);
			this->button14->TabIndex = 37;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Calculator::button14_Click);
			this->button14->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Silver;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(413, 415);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(49, 34);
			this->button13->TabIndex = 36;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Calculator::button13_Click);
			this->button13->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Silver;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(381, 470);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(81, 34);
			this->button12->TabIndex = 35;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Calculator::button12_Click);
			this->button12->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Silver;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(332, 228);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(49, 34);
			this->button11->TabIndex = 34;
			this->button11->Text = L"C";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			this->button11->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Silver;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(46, 470);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(64, 34);
			this->button10->TabIndex = 33;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::button10_Click);
			this->button10->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Silver;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(127, 287);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 34);
			this->button9->TabIndex = 32;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::button9_Click);
			this->button9->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Silver;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(127, 352);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 34);
			this->button8->TabIndex = 31;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::button8_Click);
			this->button8->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Silver;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(127, 415);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 34);
			this->button7->TabIndex = 30;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::button7_Click);
			this->button7->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Silver;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(211, 415);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 34);
			this->button6->TabIndex = 29;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::button6_Click);
			this->button6->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(211, 352);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 34);
			this->button5->TabIndex = 28;
			this->button5->Text = L"6";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::button5_Click);
			this->button5->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Silver;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(211, 287);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 34);
			this->button4->TabIndex = 27;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button4_Click);
			this->button4->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(46, 415);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 34);
			this->button3->TabIndex = 26;
			this->button3->Text = L"7";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
			this->button3->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(46, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 34);
			this->button2->TabIndex = 25;
			this->button2->Text = L"4";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			this->button2->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(46, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 32);
			this->label1->TabIndex = 24;
			this->label1->Text = L"HP-35";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// display
			// 
			this->display->Enabled = false;
			this->display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->display->Location = System::Drawing::Point(50, 137);
			this->display->Multiline = true;
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(416, 30);
			this->display->TabIndex = 23;
			this->display->WordWrap = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(46, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 34);
			this->button1->TabIndex = 22;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			this->button1->Enter += gcnew System::EventHandler(this, &Calculator::button19_Enter);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Silver;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(413, 227);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(49, 34);
			this->button21->TabIndex = 44;
			this->button21->Text = L"(-)";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Calculator::button21_Click);
			// 
			// display2
			// 
			this->display2->Enabled = false;
			this->display2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->display2->Location = System::Drawing::Point(50, 78);
			this->display2->Multiline = true;
			this->display2->Name = L"display2";
			this->display2->Size = System::Drawing::Size(416, 30);
			this->display2->TabIndex = 45;
			this->display2->WordWrap = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Silver;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(127, 470);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(49, 34);
			this->button22->TabIndex = 46;
			this->button22->Text = L".";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Calculator::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Silver;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(413, 287);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(49, 34);
			this->button23->TabIndex = 47;
			this->button23->Text = L")";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Calculator::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Silver;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(332, 287);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(49, 34);
			this->button24->TabIndex = 48;
			this->button24->Text = L"(";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Calculator::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Silver;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(201, 470);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(59, 34);
			this->button25->TabIndex = 49;
			this->button25->Text = L"space";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Calculator::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Silver;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(284, 470);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(78, 34);
			this->button26->TabIndex = 50;
			this->button26->Text = L"RPN";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->ClientSize = System::Drawing::Size(512, 546);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->display2);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->display);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Name = L"Calculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HP-35";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//close calculator
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->Close();
			 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text=" ";
			 display2->Text="";
		 }
//1
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="1";
		 }
//2
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="2";
		 }
//3
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="3";
		 }
//4
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="4";
		 }
//5
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="5";
		 }
//6
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="6";
		 }
//7
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="7";
		 }
//8
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="8";
		 }
//9 
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="9";
		 }
//0
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="0";
		 }
//addition
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+=" +";
			 display2->Text+=display->Text;
			 display->Text=" ";

		 }
//minus
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+=" -";
			 display2->Text+=display->Text;
			 display->Text=" ";
		 }
//multiply
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+=" *";
			 display2->Text+=display->Text;
			 display->Text=" ";
		 }
//divide
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+=" /";
			 display2->Text+=display->Text;
			 display->Text=" ";
		 }
private: System::Void button19_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
//minus
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+="-";
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(display->Text=="" && display2->Text=="")
				 return;
			 else if(display->Text=="")
				 display2->Text = display2->Text->Substring(0, display2->Text->Length - 2);
			 else
				 display->Text = display->Text->Substring(0, display->Text->Length - 2);
				 
		 }
//equal
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {

			 Stackk calculate;
			 display2->Text+=display->Text;
			 if(marshal_as<String^>(calculate.validFormat(marshal_as<std::string>(display2->Text)))=="No")
			 {
				 display->Text="Invalid Expression";
				 display2->Text="";
			 }
			 else
			 {
			 display->Text=marshal_as<String^>(calculate.rpnEvaluation(marshal_as<std::string>(display2->Text)));
			 display2->Text="";
			 }

		 }
//left bracket
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+=" (";
			 display2->Text+=display->Text;
			 display->Text=" ";
		 }
//right bracket
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+=" )";
			 display2->Text+=display->Text;
			 display->Text=" ";
		 }
//decimal
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+=".";
		 }
//space button
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {

			 display->Text+=" ";
		 }
//memory button
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {

			 Stackk Record;

			 if(display2->Text=="" && display->Text==" "||display->Text=="")
				 return;
			 else
				Record.store(marshal_as<std::string>(display2->Text+display->Text));
		 }

private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(display->Text==" ")
			 {
				 if(display2->Text=="")
					 return;
				 else
				 {
					 display->Text = display2->Text->Substring(0, display2->Text->Length - 2);
					 display2->Text="";
				 }
			 }

			 else
			 {
				 display->Text = display->Text->Substring(0, display->Text->Length - 2);
				 display2->Text="";
			 }

		 }
};
}
