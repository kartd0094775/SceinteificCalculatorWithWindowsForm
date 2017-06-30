#pragma once
#include "Calculation.h"
namespace Sceinteific_Calculator_WindowsForm {

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
	private:
		int index;
		array<String^ >^ equation;
	public:
		MyForm(void)
		{
			index = 0;
			equation = gcnew array<String^ >(20);
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


	private: System::Windows::Forms::Button^  equalButton;
	private: System::Windows::Forms::Button^  zeroButton;
	private: System::Windows::Forms::Button^  dotButton;
	private: System::Windows::Forms::Button^  plusButton;
	private: System::Windows::Forms::Button^  oneButton;
	private: System::Windows::Forms::Button^  twoButton;
	private: System::Windows::Forms::Button^  threeButton;
	private: System::Windows::Forms::Button^  minusButton;
	private: System::Windows::Forms::Button^  fourButton;
	private: System::Windows::Forms::Button^  multipleButton;
	private: System::Windows::Forms::Button^  sixButton;
	private: System::Windows::Forms::Button^  fiveButton;
	private: System::Windows::Forms::Button^  sevenButton;
	private: System::Windows::Forms::Button^  divideButton;
	private: System::Windows::Forms::Button^  eightButton;
	private: System::Windows::Forms::Button^  nightButton;
	private: System::Windows::Forms::Button^  sinButton;
	private: System::Windows::Forms::Button^  cosButton;
	private: System::Windows::Forms::Button^  tanButton;
	private: System::Windows::Forms::Button^  deleteButton;

	private: System::Windows::Forms::Button^  cscButton;
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::Button^  cotButton;
	private: System::Windows::Forms::Button^  secButton;
	private: System::Windows::Forms::Button^  modButton;
	private: System::Windows::Forms::Button^  powerButton;
	private: System::Windows::Forms::Button^  factorialButton;
	private: System::Windows::Forms::Button^  logButton;
	private: System::Windows::Forms::Button^  sqrtButton;
	private: System::Windows::Forms::Button^  leftButton;

	private: System::Windows::Forms::Button^  powButton;
	private: System::Windows::Forms::Button^  rightButton;
	private: System::Windows::Forms::Button^  backButton;
	private: System::Windows::Forms::Button^  moveButton;
	private: System::Windows::Forms::Button^  exponentialButton;

	private: System::Windows::Forms::Button^  intervalButton;
	private: System::Windows::Forms::TextBox^  resultText;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;


	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitializeComponent(void)
		{
			this->equalButton = (gcnew System::Windows::Forms::Button());
			this->zeroButton = (gcnew System::Windows::Forms::Button());
			this->dotButton = (gcnew System::Windows::Forms::Button());
			this->plusButton = (gcnew System::Windows::Forms::Button());
			this->oneButton = (gcnew System::Windows::Forms::Button());
			this->twoButton = (gcnew System::Windows::Forms::Button());
			this->threeButton = (gcnew System::Windows::Forms::Button());
			this->minusButton = (gcnew System::Windows::Forms::Button());
			this->fourButton = (gcnew System::Windows::Forms::Button());
			this->multipleButton = (gcnew System::Windows::Forms::Button());
			this->sixButton = (gcnew System::Windows::Forms::Button());
			this->fiveButton = (gcnew System::Windows::Forms::Button());
			this->sevenButton = (gcnew System::Windows::Forms::Button());
			this->divideButton = (gcnew System::Windows::Forms::Button());
			this->eightButton = (gcnew System::Windows::Forms::Button());
			this->nightButton = (gcnew System::Windows::Forms::Button());
			this->sinButton = (gcnew System::Windows::Forms::Button());
			this->cosButton = (gcnew System::Windows::Forms::Button());
			this->tanButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->cscButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->cotButton = (gcnew System::Windows::Forms::Button());
			this->secButton = (gcnew System::Windows::Forms::Button());
			this->modButton = (gcnew System::Windows::Forms::Button());
			this->powerButton = (gcnew System::Windows::Forms::Button());
			this->factorialButton = (gcnew System::Windows::Forms::Button());
			this->logButton = (gcnew System::Windows::Forms::Button());
			this->sqrtButton = (gcnew System::Windows::Forms::Button());
			this->leftButton = (gcnew System::Windows::Forms::Button());
			this->powButton = (gcnew System::Windows::Forms::Button());
			this->rightButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->moveButton = (gcnew System::Windows::Forms::Button());
			this->exponentialButton = (gcnew System::Windows::Forms::Button());
			this->intervalButton = (gcnew System::Windows::Forms::Button());
			this->resultText = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// equalButton
			// 
			this->equalButton->Location = System::Drawing::Point(193, 337);
			this->equalButton->Name = L"equalButton";
			this->equalButton->Size = System::Drawing::Size(39, 30);
			this->equalButton->TabIndex = 2;
			this->equalButton->Text = L"=";
			this->equalButton->UseVisualStyleBackColor = true;
			this->equalButton->Click += gcnew System::EventHandler(this, &MyForm::equalButton_Click_1);
			// 
			// zeroButton
			// 
			this->zeroButton->Location = System::Drawing::Point(12, 337);
			this->zeroButton->Name = L"zeroButton";
			this->zeroButton->Size = System::Drawing::Size(85, 30);
			this->zeroButton->TabIndex = 3;
			this->zeroButton->Text = L"0";
			this->zeroButton->UseVisualStyleBackColor = true;
			this->zeroButton->Click += gcnew System::EventHandler(this, &MyForm::zeroButton_Click);
			// 
			// dotButton
			// 
			this->dotButton->Location = System::Drawing::Point(103, 337);
			this->dotButton->Name = L"dotButton";
			this->dotButton->Size = System::Drawing::Size(39, 30);
			this->dotButton->TabIndex = 6;
			this->dotButton->Text = L".";
			this->dotButton->UseVisualStyleBackColor = true;
			this->dotButton->Click += gcnew System::EventHandler(this, &MyForm::dotButton_Click);
			// 
			// plusButton
			// 
			this->plusButton->Location = System::Drawing::Point(148, 337);
			this->plusButton->Name = L"plusButton";
			this->plusButton->Size = System::Drawing::Size(39, 30);
			this->plusButton->TabIndex = 7;
			this->plusButton->Text = L"+";
			this->plusButton->UseVisualStyleBackColor = true;
			this->plusButton->Click += gcnew System::EventHandler(this, &MyForm::plusButton_Click);
			// 
			// oneButton
			// 
			this->oneButton->Location = System::Drawing::Point(13, 301);
			this->oneButton->Name = L"oneButton";
			this->oneButton->Size = System::Drawing::Size(39, 30);
			this->oneButton->TabIndex = 8;
			this->oneButton->Text = L"1";
			this->oneButton->UseVisualStyleBackColor = true;
			this->oneButton->Click += gcnew System::EventHandler(this, &MyForm::oneButton_Click);
			// 
			// twoButton
			// 
			this->twoButton->Location = System::Drawing::Point(58, 301);
			this->twoButton->Name = L"twoButton";
			this->twoButton->Size = System::Drawing::Size(39, 30);
			this->twoButton->TabIndex = 9;
			this->twoButton->Text = L"2";
			this->twoButton->UseVisualStyleBackColor = true;
			this->twoButton->Click += gcnew System::EventHandler(this, &MyForm::twoButton_Click);
			// 
			// threeButton
			// 
			this->threeButton->Location = System::Drawing::Point(103, 301);
			this->threeButton->Name = L"threeButton";
			this->threeButton->Size = System::Drawing::Size(39, 30);
			this->threeButton->TabIndex = 10;
			this->threeButton->Text = L"3";
			this->threeButton->UseVisualStyleBackColor = true;
			this->threeButton->Click += gcnew System::EventHandler(this, &MyForm::threeButton_Click);
			// 
			// minusButton
			// 
			this->minusButton->Location = System::Drawing::Point(148, 301);
			this->minusButton->Name = L"minusButton";
			this->minusButton->Size = System::Drawing::Size(39, 30);
			this->minusButton->TabIndex = 11;
			this->minusButton->Text = L"-";
			this->minusButton->UseVisualStyleBackColor = true;
			this->minusButton->Click += gcnew System::EventHandler(this, &MyForm::minusButton_Click);
			// 
			// fourButton
			// 
			this->fourButton->Location = System::Drawing::Point(12, 265);
			this->fourButton->Name = L"fourButton";
			this->fourButton->Size = System::Drawing::Size(39, 30);
			this->fourButton->TabIndex = 12;
			this->fourButton->Text = L"4";
			this->fourButton->UseVisualStyleBackColor = true;
			this->fourButton->Click += gcnew System::EventHandler(this, &MyForm::fourButton_Click);
			// 
			// multipleButton
			// 
			this->multipleButton->Location = System::Drawing::Point(148, 265);
			this->multipleButton->Name = L"multipleButton";
			this->multipleButton->Size = System::Drawing::Size(39, 30);
			this->multipleButton->TabIndex = 13;
			this->multipleButton->Text = L"*";
			this->multipleButton->UseVisualStyleBackColor = true;
			this->multipleButton->Click += gcnew System::EventHandler(this, &MyForm::multipleButton_Click);
			// 
			// sixButton
			// 
			this->sixButton->Location = System::Drawing::Point(103, 265);
			this->sixButton->Name = L"sixButton";
			this->sixButton->Size = System::Drawing::Size(39, 30);
			this->sixButton->TabIndex = 14;
			this->sixButton->Text = L"6";
			this->sixButton->UseVisualStyleBackColor = true;
			this->sixButton->Click += gcnew System::EventHandler(this, &MyForm::sixButton_Click);
			// 
			// fiveButton
			// 
			this->fiveButton->Location = System::Drawing::Point(57, 265);
			this->fiveButton->Name = L"fiveButton";
			this->fiveButton->Size = System::Drawing::Size(39, 30);
			this->fiveButton->TabIndex = 15;
			this->fiveButton->Text = L"5";
			this->fiveButton->UseVisualStyleBackColor = true;
			this->fiveButton->Click += gcnew System::EventHandler(this, &MyForm::fiveButton_Click);
			// 
			// sevenButton
			// 
			this->sevenButton->Location = System::Drawing::Point(13, 229);
			this->sevenButton->Name = L"sevenButton";
			this->sevenButton->Size = System::Drawing::Size(39, 30);
			this->sevenButton->TabIndex = 16;
			this->sevenButton->Text = L"7";
			this->sevenButton->UseVisualStyleBackColor = true;
			this->sevenButton->Click += gcnew System::EventHandler(this, &MyForm::sevenButton_Click);
			// 
			// divideButton
			// 
			this->divideButton->Location = System::Drawing::Point(148, 229);
			this->divideButton->Name = L"divideButton";
			this->divideButton->Size = System::Drawing::Size(39, 30);
			this->divideButton->TabIndex = 17;
			this->divideButton->Text = L"/";
			this->divideButton->UseVisualStyleBackColor = true;
			this->divideButton->Click += gcnew System::EventHandler(this, &MyForm::divideButton_Click);
			// 
			// eightButton
			// 
			this->eightButton->Location = System::Drawing::Point(57, 229);
			this->eightButton->Name = L"eightButton";
			this->eightButton->Size = System::Drawing::Size(39, 30);
			this->eightButton->TabIndex = 18;
			this->eightButton->Text = L"8";
			this->eightButton->UseVisualStyleBackColor = true;
			this->eightButton->Click += gcnew System::EventHandler(this, &MyForm::eightButton_Click);
			// 
			// nightButton
			// 
			this->nightButton->Location = System::Drawing::Point(103, 229);
			this->nightButton->Name = L"nightButton";
			this->nightButton->Size = System::Drawing::Size(39, 30);
			this->nightButton->TabIndex = 19;
			this->nightButton->Text = L"9";
			this->nightButton->UseVisualStyleBackColor = true;
			this->nightButton->Click += gcnew System::EventHandler(this, &MyForm::nightButton_Click);
			// 
			// sinButton
			// 
			this->sinButton->Location = System::Drawing::Point(12, 193);
			this->sinButton->Name = L"sinButton";
			this->sinButton->Size = System::Drawing::Size(39, 30);
			this->sinButton->TabIndex = 20;
			this->sinButton->Text = L"sin";
			this->sinButton->UseVisualStyleBackColor = true;
			this->sinButton->Click += gcnew System::EventHandler(this, &MyForm::sinButton_Click);
			// 
			// cosButton
			// 
			this->cosButton->Location = System::Drawing::Point(58, 193);
			this->cosButton->Name = L"cosButton";
			this->cosButton->Size = System::Drawing::Size(39, 30);
			this->cosButton->TabIndex = 21;
			this->cosButton->Text = L"cos";
			this->cosButton->UseVisualStyleBackColor = true;
			this->cosButton->Click += gcnew System::EventHandler(this, &MyForm::cosButton_Click);
			// 
			// tanButton
			// 
			this->tanButton->Location = System::Drawing::Point(103, 193);
			this->tanButton->Name = L"tanButton";
			this->tanButton->Size = System::Drawing::Size(39, 30);
			this->tanButton->TabIndex = 22;
			this->tanButton->Text = L"tan";
			this->tanButton->UseVisualStyleBackColor = true;
			this->tanButton->Click += gcnew System::EventHandler(this, &MyForm::tanButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(13, 121);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(39, 30);
			this->deleteButton->TabIndex = 23;
			this->deleteButton->Text = L"DEL";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &MyForm::deleteButton_Click);
			// 
			// cscButton
			// 
			this->cscButton->Location = System::Drawing::Point(12, 157);
			this->cscButton->Name = L"cscButton";
			this->cscButton->Size = System::Drawing::Size(39, 30);
			this->cscButton->TabIndex = 24;
			this->cscButton->Text = L"csc";
			this->cscButton->UseVisualStyleBackColor = true;
			this->cscButton->Click += gcnew System::EventHandler(this, &MyForm::cscButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->Location = System::Drawing::Point(58, 121);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(39, 30);
			this->cancelButton->TabIndex = 25;
			this->cancelButton->Text = L"CE";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &MyForm::cancelButton_Click);
			// 
			// cotButton
			// 
			this->cotButton->Location = System::Drawing::Point(103, 157);
			this->cotButton->Name = L"cotButton";
			this->cotButton->Size = System::Drawing::Size(39, 30);
			this->cotButton->TabIndex = 26;
			this->cotButton->Text = L"cot";
			this->cotButton->UseVisualStyleBackColor = true;
			this->cotButton->Click += gcnew System::EventHandler(this, &MyForm::cotButton_Click);
			// 
			// secButton
			// 
			this->secButton->Location = System::Drawing::Point(57, 157);
			this->secButton->Name = L"secButton";
			this->secButton->Size = System::Drawing::Size(39, 30);
			this->secButton->TabIndex = 27;
			this->secButton->Text = L"sec";
			this->secButton->UseVisualStyleBackColor = true;
			this->secButton->Click += gcnew System::EventHandler(this, &MyForm::secButton_Click);
			// 
			// modButton
			// 
			this->modButton->Location = System::Drawing::Point(193, 301);
			this->modButton->Name = L"modButton";
			this->modButton->Size = System::Drawing::Size(39, 30);
			this->modButton->TabIndex = 29;
			this->modButton->Text = L"%";
			this->modButton->UseVisualStyleBackColor = true;
			this->modButton->Click += gcnew System::EventHandler(this, &MyForm::modButton_Click);
			// 
			// powerButton
			// 
			this->powerButton->Location = System::Drawing::Point(193, 265);
			this->powerButton->Name = L"powerButton";
			this->powerButton->Size = System::Drawing::Size(39, 30);
			this->powerButton->TabIndex = 30;
			this->powerButton->Text = L"^";
			this->powerButton->UseVisualStyleBackColor = true;
			this->powerButton->Click += gcnew System::EventHandler(this, &MyForm::powerButton_Click);
			// 
			// factorialButton
			// 
			this->factorialButton->Location = System::Drawing::Point(193, 229);
			this->factorialButton->Name = L"factorialButton";
			this->factorialButton->Size = System::Drawing::Size(39, 30);
			this->factorialButton->TabIndex = 31;
			this->factorialButton->Text = L"!";
			this->factorialButton->UseVisualStyleBackColor = true;
			this->factorialButton->Click += gcnew System::EventHandler(this, &MyForm::factorialButton_Click);
			// 
			// logButton
			// 
			this->logButton->Location = System::Drawing::Point(148, 157);
			this->logButton->Name = L"logButton";
			this->logButton->Size = System::Drawing::Size(39, 30);
			this->logButton->TabIndex = 32;
			this->logButton->Text = L"log";
			this->logButton->UseVisualStyleBackColor = true;
			this->logButton->Click += gcnew System::EventHandler(this, &MyForm::logButton_Click);
			// 
			// sqrtButton
			// 
			this->sqrtButton->Location = System::Drawing::Point(193, 157);
			this->sqrtButton->Name = L"sqrtButton";
			this->sqrtButton->Size = System::Drawing::Size(39, 30);
			this->sqrtButton->TabIndex = 33;
			this->sqrtButton->Text = L"sqrt";
			this->sqrtButton->UseVisualStyleBackColor = true;
			this->sqrtButton->Click += gcnew System::EventHandler(this, &MyForm::sqrtButton_Click);
			// 
			// leftButton
			// 
			this->leftButton->Location = System::Drawing::Point(103, 121);
			this->leftButton->Name = L"leftButton";
			this->leftButton->Size = System::Drawing::Size(39, 30);
			this->leftButton->TabIndex = 34;
			this->leftButton->Text = L"(";
			this->leftButton->UseVisualStyleBackColor = true;
			this->leftButton->Click += gcnew System::EventHandler(this, &MyForm::leftButton_Click);
			// 
			// powButton
			// 
			this->powButton->Location = System::Drawing::Point(193, 193);
			this->powButton->Name = L"powButton";
			this->powButton->Size = System::Drawing::Size(39, 30);
			this->powButton->TabIndex = 35;
			this->powButton->Text = L"pow";
			this->powButton->UseVisualStyleBackColor = true;
			this->powButton->Click += gcnew System::EventHandler(this, &MyForm::powButton_Click);
			// 
			// rightButton
			// 
			this->rightButton->Location = System::Drawing::Point(148, 121);
			this->rightButton->Name = L"rightButton";
			this->rightButton->Size = System::Drawing::Size(39, 30);
			this->rightButton->TabIndex = 36;
			this->rightButton->Text = L")";
			this->rightButton->UseVisualStyleBackColor = true;
			this->rightButton->Click += gcnew System::EventHandler(this, &MyForm::rightButton_Click);
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(148, 85);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(84, 30);
			this->backButton->TabIndex = 37;
			this->backButton->Text = L"¡÷";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &MyForm::backButton_Click);
			// 
			// moveButton
			// 
			this->moveButton->Location = System::Drawing::Point(12, 85);
			this->moveButton->Name = L"moveButton";
			this->moveButton->Size = System::Drawing::Size(84, 30);
			this->moveButton->TabIndex = 38;
			this->moveButton->Text = L"¡ö";
			this->moveButton->UseVisualStyleBackColor = true;
			this->moveButton->Click += gcnew System::EventHandler(this, &MyForm::moveButton_Click);
			// 
			// exponentialButton
			// 
			this->exponentialButton->Location = System::Drawing::Point(148, 193);
			this->exponentialButton->Name = L"exponentialButton";
			this->exponentialButton->Size = System::Drawing::Size(39, 30);
			this->exponentialButton->TabIndex = 39;
			this->exponentialButton->Text = L"e";
			this->exponentialButton->UseVisualStyleBackColor = true;
			this->exponentialButton->Click += gcnew System::EventHandler(this, &MyForm::exponentialButton_Click);
			// 
			// intervalButton
			// 
			this->intervalButton->Location = System::Drawing::Point(193, 121);
			this->intervalButton->Name = L"intervalButton";
			this->intervalButton->Size = System::Drawing::Size(39, 30);
			this->intervalButton->TabIndex = 40;
			this->intervalButton->Text = L",";
			this->intervalButton->UseVisualStyleBackColor = true;
			this->intervalButton->Click += gcnew System::EventHandler(this, &MyForm::intervalButton_Click);
			// 
			// resultText
			// 
			this->resultText->Font = (gcnew System::Drawing::Font(L"PMingLiU", 24));
			this->resultText->Location = System::Drawing::Point(12, 40);
			this->resultText->Multiline = true;
			this->resultText->Name = L"resultText";
			this->resultText->Size = System::Drawing::Size(219, 39);
			this->resultText->TabIndex = 41;
			this->resultText->Text = L"0";
			this->resultText->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(249, 24);
			this->menuStrip1->TabIndex = 42;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(249, 379);
			this->Controls->Add(this->resultText);
			this->Controls->Add(this->intervalButton);
			this->Controls->Add(this->exponentialButton);
			this->Controls->Add(this->moveButton);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->rightButton);
			this->Controls->Add(this->powButton);
			this->Controls->Add(this->leftButton);
			this->Controls->Add(this->sqrtButton);
			this->Controls->Add(this->logButton);
			this->Controls->Add(this->factorialButton);
			this->Controls->Add(this->powerButton);
			this->Controls->Add(this->modButton);
			this->Controls->Add(this->secButton);
			this->Controls->Add(this->cotButton);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->cscButton);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->tanButton);
			this->Controls->Add(this->cosButton);
			this->Controls->Add(this->sinButton);
			this->Controls->Add(this->nightButton);
			this->Controls->Add(this->eightButton);
			this->Controls->Add(this->divideButton);
			this->Controls->Add(this->sevenButton);
			this->Controls->Add(this->fiveButton);
			this->Controls->Add(this->sixButton);
			this->Controls->Add(this->multipleButton);
			this->Controls->Add(this->fourButton);
			this->Controls->Add(this->minusButton);
			this->Controls->Add(this->threeButton);
			this->Controls->Add(this->twoButton);
			this->Controls->Add(this->oneButton);
			this->Controls->Add(this->plusButton);
			this->Controls->Add(this->dotButton);
			this->Controls->Add(this->zeroButton);
			this->Controls->Add(this->equalButton);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"Sceintific Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// add a number to the equation
	protected:
		void addNumber(String^ num) {
			String^ temp = this->resultText->Text;
			if (temp != L"0") {
				temp += num;
			}
			else {
				temp = num;
			}
			this->resultText->Text = temp;
		}
		// add a operator to the equation
	protected:
		void addOperator(String^ op) {
			String^ temp = this->resultText->Text;
			String^ all_operators = L"+-*/%^!";
			int LastIndex = temp->Length - 1;
			if (all_operators->Contains(temp->Substring(LastIndex))) {	// if there is operator, removing it
				temp = temp->Remove(LastIndex);
			}
			temp += op;	// assign a new operator
			
			this->resultText->Text = temp;

		}
	protected:
		void addScientificOp(String^ SciOp) {
			String^ temp = this->resultText->Text;
			if (temp == L"0") {
				this->resultText->Text = SciOp;
				return;
			}
			temp += SciOp;
			this->resultText->Text = temp;
		}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void equalButton_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void zeroButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ temp = this->resultText->Text;
		if (temp != L"0") {
			temp += L"0";
		}
		this->resultText->Text = temp;
	}
	private: System::Void oneButton_Click(System::Object^  sender, System::EventArgs^  e) {
		addNumber(L"1");
	}
	private: System::Void twoButton_Click(System::Object^  sender, System::EventArgs^  e) {
		addNumber(L"2");
	}
	private: System::Void threeButton_Click(System::Object^  sender, System::EventArgs^  e) {
		addNumber(L"3");
	}
	private: System::Void fourButton_Click(System::Object^ sender, System::EventArgs^ e) {
		addNumber(L"4");
	}
	private: System::Void fiveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		addNumber(L"5");
	}
	private: System::Void sixButton_Click(System::Object^  sender, System::EventArgs^  e) {
		addNumber(L"6");
	}
	private: System::Void sevenButton_Click(System::Object^  sender, System::EventArgs^  e) {
		addNumber(L"7");
	}
	private: System::Void eightButton_Click(System::Object^  sender, System::EventArgs^  e) {
		addNumber(L"8");
	}
	private: System::Void nightButton_Click(System::Object^  sender, System::EventArgs^  e) {
		addNumber(L"9");
	}
	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->resultText->Text = L"0";
	}
private: System::Void plusButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addOperator(L"+");
}
private: System::Void minusButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addOperator(L"-");
}
private: System::Void multipleButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addOperator(L"*");
}
private: System::Void divideButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addOperator(L"/");
}
private: System::Void exponentialButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addScientificOp(L"e");
}
private: System::Void dotButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->resultText->Text += L".";
}
private: System::Void sinButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addScientificOp(L"sin(");
}
private: System::Void cosButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addScientificOp(L"cos(");
}
private: System::Void tanButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addScientificOp(L"tan(");
}
private: System::Void cscButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addScientificOp(L"csc(");
}
private: System::Void secButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addScientificOp(L"sec(");
}
private: System::Void cotButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addScientificOp(L"cot(");
}
private: System::Void logButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addScientificOp(L"log(");
}
private: System::Void sqrtButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addScientificOp(L"sqrt(");
}
private: System::Void rightButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->resultText->Text != L"0") {
		this->resultText->Text += L")";
	}
}
private: System::Void leftButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addNumber(L"(");
}
private: System::Void powButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addScientificOp(L"pow(");
}
private: System::Void deleteButton_Click(System::Object^  sender, System::EventArgs^  e) {
	int LastIndex = this->resultText->Text->Length - 1;
	if (LastIndex >= 0)
	this->resultText->Text = this->resultText->Text->Substring(0, LastIndex);
}
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			StreamReader^ streamReader = gcnew StreamReader(openFileDialog1->FileName);
			while (streamReader->Peek() > 0) {
				equation[Calculation::equation_count] = Calculation::calculate(streamReader->ReadLine());
			}
			streamReader->Close();
			this->resultText->Text = equation[0];
		}
		catch (Exception^ e) {
			Console::WriteLine("Failed to open file");
		}
	}
}
private: System::Void powerButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->resultText->Text += L"^";
}
private: System::Void factorialButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->resultText->Text += L"!";
}
private: System::Void modButton_Click(System::Object^  sender, System::EventArgs^  e) {
	addOperator(L"%");
}
private: System::Void intervalButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->resultText->Text += L",";
}
private: System::Void equalButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ temp = this->resultText->Text;
	this->resultText->Text = Calculation::calculate(temp);
}
private: System::Void moveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (index + 1 < Calculation::equation_count) {
		this->resultText->Text = equation[++index];
	}
}
private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (index - 1 > -1) {
		this->resultText->Text = equation[--index];
	}
}
};
}
