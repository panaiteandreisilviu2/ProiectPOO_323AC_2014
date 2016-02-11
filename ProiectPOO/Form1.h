#pragma once

#include "LineByLine.cpp"
#include "LatentSemanticAnalysis.cpp"
#include <vector>

namespace ProiectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Runtime::InteropServices;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  hrBottom2;
	protected: 

	private: System::Windows::Forms::Label^  upbText2;
	private: System::Windows::Forms::Label^  hrTop2;

	protected: 





	private: System::Windows::Forms::Button^  lsaButton;
	private: System::Windows::Forms::Button^  lineButton;









	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;

	private: System::Windows::Forms::Panel^  panel2Selection;
	private: System::Windows::Forms::Panel^  panel2_Header;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  title2;
	private: System::Windows::Forms::Button^  ExitPanel2;




	private: System::Windows::Forms::Panel^  panel1Start;
	private: System::Windows::Forms::Panel^  panel1_Header;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  projectTitle;

	private: System::Windows::Forms::Button^  BackPanel2;
	private: System::Windows::Forms::Button^  ExitPanel1;
	private: System::Windows::Forms::StatusStrip^  statusStrip2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::Button^  NextPanel1;
	private: System::Windows::Forms::Label^  ubpText1;
	private: System::Windows::Forms::Label^  hrTop1;
	private: System::Windows::Forms::Label^  hrBottom1;
	private: System::Windows::Forms::Panel^  panel3Lsa;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::StatusStrip^  statusStrip3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::Button^  AnalyzePanel3Lsa;

	private: System::Windows::Forms::Button^  ExitPanel3Lsa;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel3Lsa_Header;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel3Bit;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::StatusStrip^  statusStrip4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::Button^  NextPanel3Bit;

	private: System::Windows::Forms::Button^  ExitPanel3Bit;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel3Bit_Header;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label8;

















private: System::Windows::Forms::Button^  BackPanel3Lsa;
private: System::Windows::Forms::Button^  NextPanel2;
private: System::Windows::Forms::Button^  BackPanel3Bit;


private: System::Windows::Forms::RichTextBox^  richTextBox1;
private: System::Windows::Forms::RichTextBox^  richTextBox2;




private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::Panel^  panel3Line_Header;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Button^  ExitPanel3Line;
private: System::Windows::Forms::Button^  BackPanel3Line;
private: System::Windows::Forms::Button^  AnalyzePanel3Line;

private: System::Windows::Forms::StatusStrip^  statusStrip5;
private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::TextBox^  filePath2Line;

private: System::Windows::Forms::RichTextBox^  richTextBox4;
private: System::Windows::Forms::TextBox^  filePath1Line;
private: System::Windows::Forms::Panel^  panel3Line;
private: System::Windows::Forms::Button^  BrowsePanel3Line_File1;
private: System::Windows::Forms::Button^  BrowsePanel3Line_File2;



private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
private: System::Windows::Forms::Button^  ExitPanel4Line;
private: System::Windows::Forms::Panel^  panel4Line_Header;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Button^  tempButton;
private: System::Windows::Forms::RichTextBox^  richTextBox5;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Panel^  panel4Line;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::ProgressBar^  progressBar1;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Button^  ClearButton2_Panel3LSA;
private: System::Windows::Forms::Button^  ClearButton1_Panel3LSA;



private: System::Windows::Forms::Button^  AddFileButton1_Panel3LSA;
private: System::Windows::Forms::Button^  AddFileButton2_Panel3LSA;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::ListView^  listViewPanel3LSA_2;

private: System::Windows::Forms::ListView^  listViewPanel3LSA_1;
private: System::Windows::Forms::OpenFileDialog^  openFileDialogLSA_1;
private: System::Windows::Forms::OpenFileDialog^  openFileDialogLSA_2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::RichTextBox^  richTextBox3;
private: System::Windows::Forms::ProgressBar^  progressBar2;
private: System::Windows::Forms::Panel^  panel4Lsa;
private: System::Windows::Forms::Button^  ExitPanel4LSA;


private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::PictureBox^  pictureBox7;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Button^  OpenHTMLReportLSA;
private: System::Windows::Forms::Button^  OpenLogFileDetailedLSA;
private: System::Windows::Forms::Button^  OpenLogFileLSA;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::StatusStrip^  statusStrip6;
private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;

private: System::Windows::Forms::Label^  label30;




































	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->hrBottom2 = (gcnew System::Windows::Forms::Label());
			this->upbText2 = (gcnew System::Windows::Forms::Label());
			this->hrTop2 = (gcnew System::Windows::Forms::Label());
			this->lsaButton = (gcnew System::Windows::Forms::Button());
			this->lineButton = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->panel2Selection = (gcnew System::Windows::Forms::Panel());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->NextPanel2 = (gcnew System::Windows::Forms::Button());
			this->BackPanel2 = (gcnew System::Windows::Forms::Button());
			this->ExitPanel2 = (gcnew System::Windows::Forms::Button());
			this->panel2_Header = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->title2 = (gcnew System::Windows::Forms::Label());
			this->panel1Start = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->ubpText1 = (gcnew System::Windows::Forms::Label());
			this->statusStrip2 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->NextPanel1 = (gcnew System::Windows::Forms::Button());
			this->ExitPanel1 = (gcnew System::Windows::Forms::Button());
			this->hrTop1 = (gcnew System::Windows::Forms::Label());
			this->hrBottom1 = (gcnew System::Windows::Forms::Label());
			this->panel1_Header = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->projectTitle = (gcnew System::Windows::Forms::Label());
			this->panel3Lsa = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->listViewPanel3LSA_1 = (gcnew System::Windows::Forms::ListView());
			this->listViewPanel3LSA_2 = (gcnew System::Windows::Forms::ListView());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->ClearButton1_Panel3LSA = (gcnew System::Windows::Forms::Button());
			this->ClearButton2_Panel3LSA = (gcnew System::Windows::Forms::Button());
			this->AddFileButton1_Panel3LSA = (gcnew System::Windows::Forms::Button());
			this->AddFileButton2_Panel3LSA = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->statusStrip3 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->AnalyzePanel3Lsa = (gcnew System::Windows::Forms::Button());
			this->ExitPanel3Lsa = (gcnew System::Windows::Forms::Button());
			this->BackPanel3Lsa = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3Lsa_Header = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3Bit = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->statusStrip4 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->NextPanel3Bit = (gcnew System::Windows::Forms::Button());
			this->BackPanel3Bit = (gcnew System::Windows::Forms::Button());
			this->ExitPanel3Bit = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel3Bit_Header = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel3Line_Header = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ExitPanel3Line = (gcnew System::Windows::Forms::Button());
			this->BackPanel3Line = (gcnew System::Windows::Forms::Button());
			this->AnalyzePanel3Line = (gcnew System::Windows::Forms::Button());
			this->statusStrip5 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->filePath2Line = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->filePath1Line = (gcnew System::Windows::Forms::TextBox());
			this->panel3Line = (gcnew System::Windows::Forms::Panel());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BrowsePanel3Line_File1 = (gcnew System::Windows::Forms::Button());
			this->BrowsePanel3Line_File2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->ExitPanel4Line = (gcnew System::Windows::Forms::Button());
			this->panel4Line_Header = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tempButton = (gcnew System::Windows::Forms::Button());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel4Line = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->openFileDialogLSA_1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialogLSA_2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel4Lsa = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->OpenLogFileLSA = (gcnew System::Windows::Forms::Button());
			this->OpenHTMLReportLSA = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->OpenLogFileDetailedLSA = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->ExitPanel4LSA = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->statusStrip6 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->statusStrip1->SuspendLayout();
			this->panel2Selection->SuspendLayout();
			this->panel2_Header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel1Start->SuspendLayout();
			this->statusStrip2->SuspendLayout();
			this->panel1_Header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel3Lsa->SuspendLayout();
			this->statusStrip3->SuspendLayout();
			this->panel3Lsa_Header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->panel3Bit->SuspendLayout();
			this->statusStrip4->SuspendLayout();
			this->panel3Bit_Header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->panel3Line_Header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->statusStrip5->SuspendLayout();
			this->panel3Line->SuspendLayout();
			this->panel4Line_Header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->panel4Line->SuspendLayout();
			this->panel4Lsa->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->statusStrip6->SuspendLayout();
			this->SuspendLayout();
			// 
			// hrBottom2
			// 
			this->hrBottom2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->hrBottom2->Location = System::Drawing::Point(180, 361);
			this->hrBottom2->Name = L"hrBottom2";
			this->hrBottom2->Size = System::Drawing::Size(440, 2);
			this->hrBottom2->TabIndex = 0;
			this->hrBottom2->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// upbText2
			// 
			this->upbText2->AutoSize = true;
			this->upbText2->BackColor = System::Drawing::SystemColors::Control;
			this->upbText2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->upbText2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->upbText2->Location = System::Drawing::Point(9, 350);
			this->upbText2->Name = L"upbText2";
			this->upbText2->Size = System::Drawing::Size(171, 13);
			this->upbText2->TabIndex = 2;
			this->upbText2->Text = L"Universitatea Politehnica Bucuresti";
			this->upbText2->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// hrTop2
			// 
			this->hrTop2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->hrTop2->Location = System::Drawing::Point(0, 90);
			this->hrTop2->Name = L"hrTop2";
			this->hrTop2->Size = System::Drawing::Size(635, 2);
			this->hrTop2->TabIndex = 4;
			// 
			// lsaButton
			// 
			this->lsaButton->Location = System::Drawing::Point(19, 126);
			this->lsaButton->Name = L"lsaButton";
			this->lsaButton->Size = System::Drawing::Size(168, 74);
			this->lsaButton->TabIndex = 5;
			this->lsaButton->Text = L"Latent Semantic Analysis";
			this->lsaButton->UseVisualStyleBackColor = true;
			this->lsaButton->Click += gcnew System::EventHandler(this, &Form1::lsaButton_Click);
			this->lsaButton->MouseEnter += gcnew System::EventHandler(this, &Form1::lsaButton_MouseEnter);
			// 
			// lineButton
			// 
			this->lineButton->Location = System::Drawing::Point(19, 229);
			this->lineButton->Name = L"lineButton";
			this->lineButton->Size = System::Drawing::Size(168, 74);
			this->lineButton->TabIndex = 6;
			this->lineButton->Text = L"Line by Line Analysis";
			this->lineButton->UseVisualStyleBackColor = true;
			this->lineButton->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			this->lineButton->MouseEnter += gcnew System::EventHandler(this, &Form1::lineButton_MouseEnter);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 419);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(624, 22);
			this->statusStrip1->TabIndex = 9;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			this->toolStripStatusLabel1->Click += gcnew System::EventHandler(this, &Form1::toolStripStatusLabel1_Click);
			// 
			// panel2Selection
			// 
			this->panel2Selection->Controls->Add(this->richTextBox2);
			this->panel2Selection->Controls->Add(this->NextPanel2);
			this->panel2Selection->Controls->Add(this->BackPanel2);
			this->panel2Selection->Controls->Add(this->ExitPanel2);
			this->panel2Selection->Controls->Add(this->panel2_Header);
			this->panel2Selection->Controls->Add(this->upbText2);
			this->panel2Selection->Controls->Add(this->hrTop2);
			this->panel2Selection->Controls->Add(this->hrBottom2);
			this->panel2Selection->Controls->Add(this->lsaButton);
			this->panel2Selection->Controls->Add(this->lineButton);
			this->panel2Selection->Controls->Add(this->statusStrip1);
			this->panel2Selection->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2Selection->Location = System::Drawing::Point(0, 0);
			this->panel2Selection->Name = L"panel2Selection";
			this->panel2Selection->Size = System::Drawing::Size(624, 441);
			this->panel2Selection->TabIndex = 11;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(237, 117);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(346, 210);
			this->richTextBox2->TabIndex = 16;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// NextPanel2
			// 
			this->NextPanel2->Location = System::Drawing::Point(537, 384);
			this->NextPanel2->Name = L"NextPanel2";
			this->NextPanel2->Size = System::Drawing::Size(75, 23);
			this->NextPanel2->TabIndex = 15;
			this->NextPanel2->Text = L"Next";
			this->NextPanel2->UseVisualStyleBackColor = true;
			this->NextPanel2->Click += gcnew System::EventHandler(this, &Form1::button1_Click_2);
			// 
			// BackPanel2
			// 
			this->BackPanel2->Location = System::Drawing::Point(445, 384);
			this->BackPanel2->Name = L"BackPanel2";
			this->BackPanel2->Size = System::Drawing::Size(75, 23);
			this->BackPanel2->TabIndex = 12;
			this->BackPanel2->Text = L"Back";
			this->BackPanel2->UseVisualStyleBackColor = true;
			this->BackPanel2->Click += gcnew System::EventHandler(this, &Form1::BackPanel2_Click);
			// 
			// ExitPanel2
			// 
			this->ExitPanel2->Location = System::Drawing::Point(15, 384);
			this->ExitPanel2->Name = L"ExitPanel2";
			this->ExitPanel2->Size = System::Drawing::Size(75, 23);
			this->ExitPanel2->TabIndex = 8;
			this->ExitPanel2->Text = L"Exit";
			this->ExitPanel2->UseVisualStyleBackColor = true;
			this->ExitPanel2->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// panel2_Header
			// 
			this->panel2_Header->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2_Header->Controls->Add(this->pictureBox2);
			this->panel2_Header->Controls->Add(this->title2);
			this->panel2_Header->Location = System::Drawing::Point(0, 0);
			this->panel2_Header->Name = L"panel2_Header";
			this->panel2_Header->Size = System::Drawing::Size(629, 89);
			this->panel2_Header->TabIndex = 11;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(17, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(170, 74);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// title2
			// 
			this->title2->AutoSize = true;
			this->title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->title2->Location = System::Drawing::Point(441, 26);
			this->title2->Name = L"title2";
			this->title2->Size = System::Drawing::Size(161, 20);
			this->title2->TabIndex = 0;
			this->title2->Text = L"Selectati tipul analizei";
			// 
			// panel1Start
			// 
			this->panel1Start->Controls->Add(this->richTextBox1);
			this->panel1Start->Controls->Add(this->ubpText1);
			this->panel1Start->Controls->Add(this->statusStrip2);
			this->panel1Start->Controls->Add(this->NextPanel1);
			this->panel1Start->Controls->Add(this->ExitPanel1);
			this->panel1Start->Controls->Add(this->hrTop1);
			this->panel1Start->Controls->Add(this->hrBottom1);
			this->panel1Start->Controls->Add(this->panel1_Header);
			this->panel1Start->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1Start->Location = System::Drawing::Point(0, 0);
			this->panel1Start->Name = L"panel1Start";
			this->panel1Start->Size = System::Drawing::Size(624, 441);
			this->panel1Start->TabIndex = 11;
			this->panel1Start->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1Start_Paint);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(33, 117);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(550, 210);
			this->richTextBox1->TabIndex = 20;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// ubpText1
			// 
			this->ubpText1->AutoSize = true;
			this->ubpText1->BackColor = System::Drawing::SystemColors::Control;
			this->ubpText1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ubpText1->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->ubpText1->Location = System::Drawing::Point(9, 350);
			this->ubpText1->Name = L"ubpText1";
			this->ubpText1->Size = System::Drawing::Size(171, 13);
			this->ubpText1->TabIndex = 16;
			this->ubpText1->Text = L"Universitatea Politehnica Bucuresti";
			// 
			// statusStrip2
			// 
			this->statusStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel2});
			this->statusStrip2->Location = System::Drawing::Point(0, 419);
			this->statusStrip2->Name = L"statusStrip2";
			this->statusStrip2->Size = System::Drawing::Size(624, 22);
			this->statusStrip2->TabIndex = 15;
			this->statusStrip2->Text = L"statusStrip2";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(0, 17);
			// 
			// NextPanel1
			// 
			this->NextPanel1->Location = System::Drawing::Point(537, 384);
			this->NextPanel1->Name = L"NextPanel1";
			this->NextPanel1->Size = System::Drawing::Size(75, 23);
			this->NextPanel1->TabIndex = 14;
			this->NextPanel1->Text = L"Next";
			this->NextPanel1->UseVisualStyleBackColor = true;
			this->NextPanel1->Click += gcnew System::EventHandler(this, &Form1::NextPanel1_Click);
			// 
			// ExitPanel1
			// 
			this->ExitPanel1->Location = System::Drawing::Point(15, 384);
			this->ExitPanel1->Name = L"ExitPanel1";
			this->ExitPanel1->Size = System::Drawing::Size(75, 23);
			this->ExitPanel1->TabIndex = 9;
			this->ExitPanel1->Text = L"Exit";
			this->ExitPanel1->UseVisualStyleBackColor = true;
			this->ExitPanel1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// hrTop1
			// 
			this->hrTop1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->hrTop1->Location = System::Drawing::Point(0, 90);
			this->hrTop1->Name = L"hrTop1";
			this->hrTop1->Size = System::Drawing::Size(635, 2);
			this->hrTop1->TabIndex = 17;
			// 
			// hrBottom1
			// 
			this->hrBottom1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->hrBottom1->Location = System::Drawing::Point(180, 361);
			this->hrBottom1->Name = L"hrBottom1";
			this->hrBottom1->Size = System::Drawing::Size(440, 2);
			this->hrBottom1->TabIndex = 18;
			// 
			// panel1_Header
			// 
			this->panel1_Header->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1_Header->Controls->Add(this->pictureBox1);
			this->panel1_Header->Controls->Add(this->projectTitle);
			this->panel1_Header->Location = System::Drawing::Point(0, 0);
			this->panel1_Header->Name = L"panel1_Header";
			this->panel1_Header->Size = System::Drawing::Size(629, 89);
			this->panel1_Header->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(17, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(170, 74);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// projectTitle
			// 
			this->projectTitle->AutoSize = true;
			this->projectTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->projectTitle->Location = System::Drawing::Point(250, 26);
			this->projectTitle->Name = L"projectTitle";
			this->projectTitle->Size = System::Drawing::Size(371, 20);
			this->projectTitle->TabIndex = 0;
			this->projectTitle->Text = L"Evaluarea distantei dintre doua proiecte informatice";
			// 
			// panel3Lsa
			// 
			this->panel3Lsa->Controls->Add(this->button3);
			this->panel3Lsa->Controls->Add(this->richTextBox3);
			this->panel3Lsa->Controls->Add(this->progressBar2);
			this->panel3Lsa->Controls->Add(this->listViewPanel3LSA_1);
			this->panel3Lsa->Controls->Add(this->listViewPanel3LSA_2);
			this->panel3Lsa->Controls->Add(this->label24);
			this->panel3Lsa->Controls->Add(this->label23);
			this->panel3Lsa->Controls->Add(this->ClearButton1_Panel3LSA);
			this->panel3Lsa->Controls->Add(this->ClearButton2_Panel3LSA);
			this->panel3Lsa->Controls->Add(this->AddFileButton1_Panel3LSA);
			this->panel3Lsa->Controls->Add(this->AddFileButton2_Panel3LSA);
			this->panel3Lsa->Controls->Add(this->label1);
			this->panel3Lsa->Controls->Add(this->statusStrip3);
			this->panel3Lsa->Controls->Add(this->AnalyzePanel3Lsa);
			this->panel3Lsa->Controls->Add(this->ExitPanel3Lsa);
			this->panel3Lsa->Controls->Add(this->BackPanel3Lsa);
			this->panel3Lsa->Controls->Add(this->label2);
			this->panel3Lsa->Controls->Add(this->label3);
			this->panel3Lsa->Controls->Add(this->panel3Lsa_Header);
			this->panel3Lsa->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3Lsa->Location = System::Drawing::Point(0, 0);
			this->panel3Lsa->Name = L"panel3Lsa";
			this->panel3Lsa->Size = System::Drawing::Size(624, 441);
			this->panel3Lsa->TabIndex = 12;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(341, 319);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 23);
			this->button3->TabIndex = 32;
			this->button3->Text = L"Display Selected File";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(341, 117);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(261, 196);
			this->richTextBox3->TabIndex = 31;
			this->richTextBox3->Text = L"";
			this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox3_TextChanged);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(98, 384);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(341, 23);
			this->progressBar2->TabIndex = 30;
			this->progressBar2->Click += gcnew System::EventHandler(this, &Form1::progressBar2_Click);
			// 
			// listViewPanel3LSA_1
			// 
			this->listViewPanel3LSA_1->BackColor = System::Drawing::SystemColors::Window;
			this->listViewPanel3LSA_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listViewPanel3LSA_1->Location = System::Drawing::Point(17, 120);
			this->listViewPanel3LSA_1->Name = L"listViewPanel3LSA_1";
			this->listViewPanel3LSA_1->Size = System::Drawing::Size(294, 65);
			this->listViewPanel3LSA_1->TabIndex = 28;
			this->listViewPanel3LSA_1->TileSize = System::Drawing::Size(173, 28);
			this->listViewPanel3LSA_1->UseCompatibleStateImageBehavior = false;
			this->listViewPanel3LSA_1->View = System::Windows::Forms::View::List;
			this->listViewPanel3LSA_1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listViewPanel3LSA_1_SelectedIndexChanged);
			// 
			// listViewPanel3LSA_2
			// 
			this->listViewPanel3LSA_2->BackColor = System::Drawing::SystemColors::Window;
			this->listViewPanel3LSA_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listViewPanel3LSA_2->Location = System::Drawing::Point(17, 248);
			this->listViewPanel3LSA_2->Name = L"listViewPanel3LSA_2";
			this->listViewPanel3LSA_2->Size = System::Drawing::Size(294, 65);
			this->listViewPanel3LSA_2->TabIndex = 29;
			this->listViewPanel3LSA_2->UseCompatibleStateImageBehavior = false;
			this->listViewPanel3LSA_2->View = System::Windows::Forms::View::List;
			this->listViewPanel3LSA_2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listViewPanel3LSA_2_SelectedIndexChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(80, 229);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(162, 13);
			this->label24->TabIndex = 27;
			this->label24->Text = L"Fisierele celui de-al doilea proiect";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(95, 104);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(118, 13);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Fisierele primului proiect";
			// 
			// ClearButton1_Panel3LSA
			// 
			this->ClearButton1_Panel3LSA->Location = System::Drawing::Point(98, 191);
			this->ClearButton1_Panel3LSA->Name = L"ClearButton1_Panel3LSA";
			this->ClearButton1_Panel3LSA->Size = System::Drawing::Size(75, 23);
			this->ClearButton1_Panel3LSA->TabIndex = 24;
			this->ClearButton1_Panel3LSA->Text = L"Clear";
			this->ClearButton1_Panel3LSA->UseVisualStyleBackColor = true;
			this->ClearButton1_Panel3LSA->Click += gcnew System::EventHandler(this, &Form1::ClearButton1_Panel3LSA_Click);
			// 
			// ClearButton2_Panel3LSA
			// 
			this->ClearButton2_Panel3LSA->Location = System::Drawing::Point(98, 319);
			this->ClearButton2_Panel3LSA->Name = L"ClearButton2_Panel3LSA";
			this->ClearButton2_Panel3LSA->Size = System::Drawing::Size(75, 23);
			this->ClearButton2_Panel3LSA->TabIndex = 25;
			this->ClearButton2_Panel3LSA->Text = L"Clear";
			this->ClearButton2_Panel3LSA->UseVisualStyleBackColor = true;
			this->ClearButton2_Panel3LSA->Click += gcnew System::EventHandler(this, &Form1::ClearButton2_Panel3LSA_Click);
			// 
			// AddFileButton1_Panel3LSA
			// 
			this->AddFileButton1_Panel3LSA->Location = System::Drawing::Point(17, 191);
			this->AddFileButton1_Panel3LSA->Name = L"AddFileButton1_Panel3LSA";
			this->AddFileButton1_Panel3LSA->Size = System::Drawing::Size(75, 23);
			this->AddFileButton1_Panel3LSA->TabIndex = 21;
			this->AddFileButton1_Panel3LSA->Text = L"Add File";
			this->AddFileButton1_Panel3LSA->UseVisualStyleBackColor = true;
			this->AddFileButton1_Panel3LSA->Click += gcnew System::EventHandler(this, &Form1::AddFileButton1_Panel3LSA_Click);
			// 
			// AddFileButton2_Panel3LSA
			// 
			this->AddFileButton2_Panel3LSA->Location = System::Drawing::Point(17, 319);
			this->AddFileButton2_Panel3LSA->Name = L"AddFileButton2_Panel3LSA";
			this->AddFileButton2_Panel3LSA->Size = System::Drawing::Size(75, 23);
			this->AddFileButton2_Panel3LSA->TabIndex = 22;
			this->AddFileButton2_Panel3LSA->Text = L"Add File";
			this->AddFileButton2_Panel3LSA->UseVisualStyleBackColor = true;
			this->AddFileButton2_Panel3LSA->Click += gcnew System::EventHandler(this, &Form1::AddFileButton2_Panel3LSA_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label1->Location = System::Drawing::Point(9, 350);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Universitatea Politehnica Bucuresti";
			// 
			// statusStrip3
			// 
			this->statusStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel3});
			this->statusStrip3->Location = System::Drawing::Point(0, 419);
			this->statusStrip3->Name = L"statusStrip3";
			this->statusStrip3->Size = System::Drawing::Size(624, 22);
			this->statusStrip3->TabIndex = 15;
			this->statusStrip3->Text = L"statusStrip3";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(0, 17);
			// 
			// AnalyzePanel3Lsa
			// 
			this->AnalyzePanel3Lsa->Location = System::Drawing::Point(537, 384);
			this->AnalyzePanel3Lsa->Name = L"AnalyzePanel3Lsa";
			this->AnalyzePanel3Lsa->Size = System::Drawing::Size(75, 23);
			this->AnalyzePanel3Lsa->TabIndex = 14;
			this->AnalyzePanel3Lsa->Text = L"Analyze";
			this->AnalyzePanel3Lsa->UseVisualStyleBackColor = true;
			this->AnalyzePanel3Lsa->Click += gcnew System::EventHandler(this, &Form1::AnalyzePanel3Lsa_Click);
			// 
			// ExitPanel3Lsa
			// 
			this->ExitPanel3Lsa->Location = System::Drawing::Point(15, 384);
			this->ExitPanel3Lsa->Name = L"ExitPanel3Lsa";
			this->ExitPanel3Lsa->Size = System::Drawing::Size(75, 23);
			this->ExitPanel3Lsa->TabIndex = 9;
			this->ExitPanel3Lsa->Text = L"Exit";
			this->ExitPanel3Lsa->UseVisualStyleBackColor = true;
			this->ExitPanel3Lsa->Click += gcnew System::EventHandler(this, &Form1::ExitPanel3Lsa_Click);
			// 
			// BackPanel3Lsa
			// 
			this->BackPanel3Lsa->Location = System::Drawing::Point(445, 384);
			this->BackPanel3Lsa->Name = L"BackPanel3Lsa";
			this->BackPanel3Lsa->Size = System::Drawing::Size(75, 23);
			this->BackPanel3Lsa->TabIndex = 19;
			this->BackPanel3Lsa->Text = L"Back";
			this->BackPanel3Lsa->UseVisualStyleBackColor = true;
			this->BackPanel3Lsa->Click += gcnew System::EventHandler(this, &Form1::BackPanel3Lsa_Click);
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(0, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(635, 2);
			this->label2->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Location = System::Drawing::Point(180, 361);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(440, 2);
			this->label3->TabIndex = 18;
			// 
			// panel3Lsa_Header
			// 
			this->panel3Lsa_Header->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3Lsa_Header->Controls->Add(this->label22);
			this->panel3Lsa_Header->Controls->Add(this->pictureBox3);
			this->panel3Lsa_Header->Controls->Add(this->label4);
			this->panel3Lsa_Header->Location = System::Drawing::Point(0, 0);
			this->panel3Lsa_Header->Name = L"panel3Lsa_Header";
			this->panel3Lsa_Header->Size = System::Drawing::Size(629, 89);
			this->panel3Lsa_Header->TabIndex = 4;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(433, 50);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(99, 13);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Selectarea fisierelor";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(17, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(170, 74);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(432, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Latent Semantic Analysis";
			// 
			// panel3Bit
			// 
			this->panel3Bit->Controls->Add(this->label5);
			this->panel3Bit->Controls->Add(this->statusStrip4);
			this->panel3Bit->Controls->Add(this->NextPanel3Bit);
			this->panel3Bit->Controls->Add(this->BackPanel3Bit);
			this->panel3Bit->Controls->Add(this->ExitPanel3Bit);
			this->panel3Bit->Controls->Add(this->label6);
			this->panel3Bit->Controls->Add(this->label7);
			this->panel3Bit->Controls->Add(this->panel3Bit_Header);
			this->panel3Bit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3Bit->Location = System::Drawing::Point(0, 0);
			this->panel3Bit->Name = L"panel3Bit";
			this->panel3Bit->Size = System::Drawing::Size(624, 441);
			this->panel3Bit->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label5->Location = System::Drawing::Point(9, 350);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(171, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Universitatea Politehnica Bucuresti";
			// 
			// statusStrip4
			// 
			this->statusStrip4->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel4});
			this->statusStrip4->Location = System::Drawing::Point(0, 419);
			this->statusStrip4->Name = L"statusStrip4";
			this->statusStrip4->Size = System::Drawing::Size(624, 22);
			this->statusStrip4->TabIndex = 15;
			this->statusStrip4->Text = L"statusStrip4";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(0, 17);
			// 
			// NextPanel3Bit
			// 
			this->NextPanel3Bit->Location = System::Drawing::Point(537, 384);
			this->NextPanel3Bit->Name = L"NextPanel3Bit";
			this->NextPanel3Bit->Size = System::Drawing::Size(75, 23);
			this->NextPanel3Bit->TabIndex = 14;
			this->NextPanel3Bit->Text = L"Next";
			this->NextPanel3Bit->UseVisualStyleBackColor = true;
			// 
			// BackPanel3Bit
			// 
			this->BackPanel3Bit->Location = System::Drawing::Point(445, 384);
			this->BackPanel3Bit->Name = L"BackPanel3Bit";
			this->BackPanel3Bit->Size = System::Drawing::Size(75, 23);
			this->BackPanel3Bit->TabIndex = 19;
			this->BackPanel3Bit->Text = L"Back";
			this->BackPanel3Bit->UseVisualStyleBackColor = true;
			this->BackPanel3Bit->Click += gcnew System::EventHandler(this, &Form1::BackPanel3Bit_Click_1);
			// 
			// ExitPanel3Bit
			// 
			this->ExitPanel3Bit->Location = System::Drawing::Point(15, 384);
			this->ExitPanel3Bit->Name = L"ExitPanel3Bit";
			this->ExitPanel3Bit->Size = System::Drawing::Size(75, 23);
			this->ExitPanel3Bit->TabIndex = 9;
			this->ExitPanel3Bit->Text = L"Exit";
			this->ExitPanel3Bit->UseVisualStyleBackColor = true;
			this->ExitPanel3Bit->Click += gcnew System::EventHandler(this, &Form1::ExitPanel3Bit_Click);
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Location = System::Drawing::Point(0, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(635, 2);
			this->label6->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Location = System::Drawing::Point(180, 361);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(440, 2);
			this->label7->TabIndex = 18;
			// 
			// panel3Bit_Header
			// 
			this->panel3Bit_Header->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3Bit_Header->Controls->Add(this->pictureBox4);
			this->panel3Bit_Header->Controls->Add(this->label8);
			this->panel3Bit_Header->Location = System::Drawing::Point(0, 0);
			this->panel3Bit_Header->Name = L"panel3Bit_Header";
			this->panel3Bit_Header->Size = System::Drawing::Size(629, 89);
			this->panel3Bit_Header->TabIndex = 4;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(17, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(170, 74);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(481, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Bitwise Analysis";
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// panel3Line_Header
			// 
			this->panel3Line_Header->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3Line_Header->Controls->Add(this->label13);
			this->panel3Line_Header->Controls->Add(this->pictureBox5);
			this->panel3Line_Header->Controls->Add(this->label12);
			this->panel3Line_Header->Location = System::Drawing::Point(0, 0);
			this->panel3Line_Header->Name = L"panel3Line_Header";
			this->panel3Line_Header->Size = System::Drawing::Size(629, 89);
			this->panel3Line_Header->TabIndex = 4;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(482, 46);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(99, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Selectarea fisierelor";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(17, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(170, 74);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(481, 26);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 20);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Line by Line";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Location = System::Drawing::Point(180, 361);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(440, 2);
			this->label11->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Location = System::Drawing::Point(0, 90);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(635, 2);
			this->label10->TabIndex = 17;
			// 
			// ExitPanel3Line
			// 
			this->ExitPanel3Line->Location = System::Drawing::Point(15, 384);
			this->ExitPanel3Line->Name = L"ExitPanel3Line";
			this->ExitPanel3Line->Size = System::Drawing::Size(75, 23);
			this->ExitPanel3Line->TabIndex = 9;
			this->ExitPanel3Line->Text = L"Exit";
			this->ExitPanel3Line->UseVisualStyleBackColor = true;
			this->ExitPanel3Line->Click += gcnew System::EventHandler(this, &Form1::ExitPanel3Line_Click);
			// 
			// BackPanel3Line
			// 
			this->BackPanel3Line->Location = System::Drawing::Point(445, 384);
			this->BackPanel3Line->Name = L"BackPanel3Line";
			this->BackPanel3Line->Size = System::Drawing::Size(75, 23);
			this->BackPanel3Line->TabIndex = 19;
			this->BackPanel3Line->Text = L"Back";
			this->BackPanel3Line->UseVisualStyleBackColor = true;
			this->BackPanel3Line->Click += gcnew System::EventHandler(this, &Form1::BackPanel3Bit_Click);
			// 
			// AnalyzePanel3Line
			// 
			this->AnalyzePanel3Line->Location = System::Drawing::Point(537, 384);
			this->AnalyzePanel3Line->Name = L"AnalyzePanel3Line";
			this->AnalyzePanel3Line->Size = System::Drawing::Size(75, 23);
			this->AnalyzePanel3Line->TabIndex = 14;
			this->AnalyzePanel3Line->Text = L"Analyze";
			this->AnalyzePanel3Line->UseVisualStyleBackColor = true;
			this->AnalyzePanel3Line->Click += gcnew System::EventHandler(this, &Form1::NextPanel3Line_Click);
			// 
			// statusStrip5
			// 
			this->statusStrip5->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel5});
			this->statusStrip5->Location = System::Drawing::Point(0, 419);
			this->statusStrip5->Name = L"statusStrip5";
			this->statusStrip5->Size = System::Drawing::Size(624, 22);
			this->statusStrip5->TabIndex = 15;
			this->statusStrip5->Text = L"statusStrip5";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(0, 17);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label9->Location = System::Drawing::Point(9, 350);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(171, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Universitatea Politehnica Bucuresti";
			// 
			// filePath2Line
			// 
			this->filePath2Line->Location = System::Drawing::Point(96, 269);
			this->filePath2Line->Name = L"filePath2Line";
			this->filePath2Line->Size = System::Drawing::Size(194, 20);
			this->filePath2Line->TabIndex = 23;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(317, 114);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(285, 203);
			this->richTextBox4->TabIndex = 25;
			this->richTextBox4->Text = L"";
			this->richTextBox4->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox4_TextChanged);
			// 
			// filePath1Line
			// 
			this->filePath1Line->Location = System::Drawing::Point(96, 177);
			this->filePath1Line->Name = L"filePath1Line";
			this->filePath1Line->Size = System::Drawing::Size(194, 20);
			this->filePath1Line->TabIndex = 27;
			this->filePath1Line->TextChanged += gcnew System::EventHandler(this, &Form1::filePath1Line_TextChanged);
			// 
			// panel3Line
			// 
			this->panel3Line->Controls->Add(this->progressBar1);
			this->panel3Line->Controls->Add(this->label21);
			this->panel3Line->Controls->Add(this->button2);
			this->panel3Line->Controls->Add(this->button1);
			this->panel3Line->Controls->Add(this->filePath1Line);
			this->panel3Line->Controls->Add(this->BrowsePanel3Line_File1);
			this->panel3Line->Controls->Add(this->richTextBox4);
			this->panel3Line->Controls->Add(this->filePath2Line);
			this->panel3Line->Controls->Add(this->BrowsePanel3Line_File2);
			this->panel3Line->Controls->Add(this->label9);
			this->panel3Line->Controls->Add(this->statusStrip5);
			this->panel3Line->Controls->Add(this->AnalyzePanel3Line);
			this->panel3Line->Controls->Add(this->BackPanel3Line);
			this->panel3Line->Controls->Add(this->ExitPanel3Line);
			this->panel3Line->Controls->Add(this->label10);
			this->panel3Line->Controls->Add(this->label11);
			this->panel3Line->Controls->Add(this->panel3Line_Header);
			this->panel3Line->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3Line->Location = System::Drawing::Point(0, 0);
			this->panel3Line->Name = L"panel3Line";
			this->panel3Line->Size = System::Drawing::Size(624, 441);
			this->panel3Line->TabIndex = 14;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(96, 384);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(343, 23);
			this->progressBar1->TabIndex = 32;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(14, 120);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(238, 13);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Selectati cele doua fisiere ce doriti a fi comparate";
			this->label21->Click += gcnew System::EventHandler(this, &Form1::label21_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(398, 323);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Display file2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(317, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Display file1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_5);
			// 
			// BrowsePanel3Line_File1
			// 
			this->BrowsePanel3Line_File1->Location = System::Drawing::Point(15, 177);
			this->BrowsePanel3Line_File1->Name = L"BrowsePanel3Line_File1";
			this->BrowsePanel3Line_File1->Size = System::Drawing::Size(75, 23);
			this->BrowsePanel3Line_File1->TabIndex = 26;
			this->BrowsePanel3Line_File1->Text = L"Browse";
			this->BrowsePanel3Line_File1->UseVisualStyleBackColor = true;
			this->BrowsePanel3Line_File1->Click += gcnew System::EventHandler(this, &Form1::BrowsePanel3Line_Click_1);
			// 
			// BrowsePanel3Line_File2
			// 
			this->BrowsePanel3Line_File2->Location = System::Drawing::Point(15, 266);
			this->BrowsePanel3Line_File2->Name = L"BrowsePanel3Line_File2";
			this->BrowsePanel3Line_File2->Size = System::Drawing::Size(75, 23);
			this->BrowsePanel3Line_File2->TabIndex = 22;
			this->BrowsePanel3Line_File2->Text = L"Browse";
			this->BrowsePanel3Line_File2->UseVisualStyleBackColor = true;
			this->BrowsePanel3Line_File2->Click += gcnew System::EventHandler(this, &Form1::button1_Click_3);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			this->openFileDialog2->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog2_FileOk);
			// 
			// ExitPanel4Line
			// 
			this->ExitPanel4Line->Location = System::Drawing::Point(15, 384);
			this->ExitPanel4Line->Name = L"ExitPanel4Line";
			this->ExitPanel4Line->Size = System::Drawing::Size(75, 23);
			this->ExitPanel4Line->TabIndex = 10;
			this->ExitPanel4Line->Text = L"Exit";
			this->ExitPanel4Line->UseVisualStyleBackColor = true;
			this->ExitPanel4Line->Click += gcnew System::EventHandler(this, &Form1::ExitPanel4Line_Click);
			// 
			// panel4Line_Header
			// 
			this->panel4Line_Header->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel4Line_Header->Controls->Add(this->label14);
			this->panel4Line_Header->Controls->Add(this->pictureBox6);
			this->panel4Line_Header->Controls->Add(this->label15);
			this->panel4Line_Header->Location = System::Drawing::Point(0, 0);
			this->panel4Line_Header->Name = L"panel4Line_Header";
			this->panel4Line_Header->Size = System::Drawing::Size(629, 89);
			this->panel4Line_Header->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(482, 46);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(99, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Selectarea fisierelor";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(17, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(170, 74);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(481, 26);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(93, 20);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Line by Line";
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Location = System::Drawing::Point(0, 90);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(635, 2);
			this->label16->TabIndex = 18;
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Location = System::Drawing::Point(180, 361);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(440, 2);
			this->label17->TabIndex = 19;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Control;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label18->Location = System::Drawing::Point(9, 350);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(171, 13);
			this->label18->TabIndex = 20;
			this->label18->Text = L"Universitatea Politehnica Bucuresti";
			// 
			// tempButton
			// 
			this->tempButton->Location = System::Drawing::Point(485, 384);
			this->tempButton->Name = L"tempButton";
			this->tempButton->Size = System::Drawing::Size(75, 23);
			this->tempButton->TabIndex = 21;
			this->tempButton->Text = L"tempButton";
			this->tempButton->UseVisualStyleBackColor = true;
			this->tempButton->Click += gcnew System::EventHandler(this, &Form1::tempButton_Click);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(37, 111);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(394, 219);
			this->richTextBox5->TabIndex = 22;
			this->richTextBox5->Text = L"";
			this->richTextBox5->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox5_TextChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(437, 117);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(142, 13);
			this->label19->TabIndex = 23;
			this->label19->Text = L"Plagiarism percentage file1 : ";
			// 
			// panel4Line
			// 
			this->panel4Line->Controls->Add(this->label19);
			this->panel4Line->Controls->Add(this->label20);
			this->panel4Line->Controls->Add(this->richTextBox5);
			this->panel4Line->Controls->Add(this->tempButton);
			this->panel4Line->Controls->Add(this->label18);
			this->panel4Line->Controls->Add(this->label17);
			this->panel4Line->Controls->Add(this->label16);
			this->panel4Line->Controls->Add(this->panel4Line_Header);
			this->panel4Line->Controls->Add(this->ExitPanel4Line);
			this->panel4Line->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4Line->Location = System::Drawing::Point(0, 0);
			this->panel4Line->Name = L"panel4Line";
			this->panel4Line->Size = System::Drawing::Size(624, 441);
			this->panel4Line->TabIndex = 28;
			this->panel4Line->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel4Line_Paint);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(437, 138);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(142, 13);
			this->label20->TabIndex = 24;
			this->label20->Text = L"Plagiarism percentage file2 : ";
			this->label20->Click += gcnew System::EventHandler(this, &Form1::label20_Click);
			// 
			// openFileDialogLSA_1
			// 
			this->openFileDialogLSA_1->FileName = L"openFileDialog3";
			this->openFileDialogLSA_1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialogLSA_1_FileOk);
			// 
			// openFileDialogLSA_2
			// 
			this->openFileDialogLSA_2->FileName = L"openFileDialog4";
			this->openFileDialogLSA_2->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialogLSA_2_FileOk);
			// 
			// panel4Lsa
			// 
			this->panel4Lsa->Controls->Add(this->label30);
			this->panel4Lsa->Controls->Add(this->OpenLogFileLSA);
			this->panel4Lsa->Controls->Add(this->OpenHTMLReportLSA);
			this->panel4Lsa->Controls->Add(this->label29);
			this->panel4Lsa->Controls->Add(this->OpenLogFileDetailedLSA);
			this->panel4Lsa->Controls->Add(this->label28);
			this->panel4Lsa->Controls->Add(this->label27);
			this->panel4Lsa->Controls->Add(this->ExitPanel4LSA);
			this->panel4Lsa->Controls->Add(this->panel1);
			this->panel4Lsa->Controls->Add(this->statusStrip6);
			this->panel4Lsa->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4Lsa->Location = System::Drawing::Point(0, 0);
			this->panel4Lsa->Name = L"panel4Lsa";
			this->panel4Lsa->Size = System::Drawing::Size(624, 441);
			this->panel4Lsa->TabIndex = 33;
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::SystemColors::Control;
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)), 
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label30->Location = System::Drawing::Point(59, 146);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(479, 39);
			this->label30->TabIndex = 25;
			this->label30->Text = L"Analiza s-a incheiat cu succes";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// OpenLogFileLSA
			// 
			this->OpenLogFileLSA->Location = System::Drawing::Point(59, 217);
			this->OpenLogFileLSA->Name = L"OpenLogFileLSA";
			this->OpenLogFileLSA->Size = System::Drawing::Size(135, 46);
			this->OpenLogFileLSA->TabIndex = 21;
			this->OpenLogFileLSA->Text = L"Open Log";
			this->OpenLogFileLSA->UseVisualStyleBackColor = true;
			this->OpenLogFileLSA->Click += gcnew System::EventHandler(this, &Form1::OpenLogFileLSA_Click);
			// 
			// OpenHTMLReportLSA
			// 
			this->OpenHTMLReportLSA->Location = System::Drawing::Point(383, 217);
			this->OpenHTMLReportLSA->Name = L"OpenHTMLReportLSA";
			this->OpenHTMLReportLSA->Size = System::Drawing::Size(155, 46);
			this->OpenHTMLReportLSA->TabIndex = 23;
			this->OpenHTMLReportLSA->Text = L"Open Raport HTML";
			this->OpenHTMLReportLSA->UseVisualStyleBackColor = true;
			this->OpenHTMLReportLSA->Click += gcnew System::EventHandler(this, &Form1::OpenHTMLReportLSA_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::Control;
			this->label29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label29->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label29->Location = System::Drawing::Point(9, 350);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(171, 13);
			this->label29->TabIndex = 20;
			this->label29->Text = L"Universitatea Politehnica Bucuresti";
			// 
			// OpenLogFileDetailedLSA
			// 
			this->OpenLogFileDetailedLSA->Location = System::Drawing::Point(213, 217);
			this->OpenLogFileDetailedLSA->Name = L"OpenLogFileDetailedLSA";
			this->OpenLogFileDetailedLSA->Size = System::Drawing::Size(148, 46);
			this->OpenLogFileDetailedLSA->TabIndex = 22;
			this->OpenLogFileDetailedLSA->Text = L"Open Log Detaliat";
			this->OpenLogFileDetailedLSA->UseVisualStyleBackColor = true;
			this->OpenLogFileDetailedLSA->Click += gcnew System::EventHandler(this, &Form1::OpenLogFileDetailedLSA_Click);
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Location = System::Drawing::Point(180, 361);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(440, 2);
			this->label28->TabIndex = 19;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Location = System::Drawing::Point(0, 90);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(635, 2);
			this->label27->TabIndex = 18;
			// 
			// ExitPanel4LSA
			// 
			this->ExitPanel4LSA->Location = System::Drawing::Point(15, 384);
			this->ExitPanel4LSA->Name = L"ExitPanel4LSA";
			this->ExitPanel4LSA->Size = System::Drawing::Size(75, 23);
			this->ExitPanel4LSA->TabIndex = 1;
			this->ExitPanel4LSA->Text = L"Exit";
			this->ExitPanel4LSA->UseVisualStyleBackColor = true;
			this->ExitPanel4LSA->Click += gcnew System::EventHandler(this, &Form1::ExitPanel4LSA_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(629, 89);
			this->panel1->TabIndex = 5;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(433, 50);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(52, 13);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Rezultate";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(17, 3);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(170, 74);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(432, 26);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(188, 20);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Latent Semantic Analysis";
			// 
			// statusStrip6
			// 
			this->statusStrip6->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel6});
			this->statusStrip6->Location = System::Drawing::Point(0, 419);
			this->statusStrip6->Name = L"statusStrip6";
			this->statusStrip6->Size = System::Drawing::Size(624, 22);
			this->statusStrip6->TabIndex = 16;
			this->statusStrip6->Text = L"statusStrip6";
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(0, 17);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->panel2Selection);
			this->Controls->Add(this->panel1Start);
			this->Controls->Add(this->panel3Line);
			this->Controls->Add(this->panel4Line);
			this->Controls->Add(this->panel3Bit);
			this->Controls->Add(this->panel4Lsa);
			this->Controls->Add(this->panel3Lsa);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Proiect POO";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->panel2Selection->ResumeLayout(false);
			this->panel2Selection->PerformLayout();
			this->panel2_Header->ResumeLayout(false);
			this->panel2_Header->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel1Start->ResumeLayout(false);
			this->panel1Start->PerformLayout();
			this->statusStrip2->ResumeLayout(false);
			this->statusStrip2->PerformLayout();
			this->panel1_Header->ResumeLayout(false);
			this->panel1_Header->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel3Lsa->ResumeLayout(false);
			this->panel3Lsa->PerformLayout();
			this->statusStrip3->ResumeLayout(false);
			this->statusStrip3->PerformLayout();
			this->panel3Lsa_Header->ResumeLayout(false);
			this->panel3Lsa_Header->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->panel3Bit->ResumeLayout(false);
			this->panel3Bit->PerformLayout();
			this->statusStrip4->ResumeLayout(false);
			this->statusStrip4->PerformLayout();
			this->panel3Bit_Header->ResumeLayout(false);
			this->panel3Bit_Header->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->panel3Line_Header->ResumeLayout(false);
			this->panel3Line_Header->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->statusStrip5->ResumeLayout(false);
			this->statusStrip5->PerformLayout();
			this->panel3Line->ResumeLayout(false);
			this->panel3Line->PerformLayout();
			this->panel4Line_Header->ResumeLayout(false);
			this->panel4Line_Header->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->panel4Line->ResumeLayout(false);
			this->panel4Line->PerformLayout();
			this->panel4Lsa->ResumeLayout(false);
			this->panel4Lsa->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->statusStrip6->ResumeLayout(false);
			this->statusStrip6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 panel2Selection->Hide();
			 panel3Line->Show();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 panel2Selection->Hide();
			 panel3Bit->Show();
		 }
private: System::Void toolStripStatusLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void projectTitle_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void whiteHeader_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void BackPanel2_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel2Selection->Hide();
			 panel1Start->Show();
		 }
private: System::Void NextPanel2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
		 }
private: System::Void NextPanel1_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel1Start->Hide();
			 panel2Selection->Show();
			 NextPanel2->Enabled = false;
		 }
private: System::Void panel1Start_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }


private: System::Void lsaButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel2Selection->Hide();
			 panel3Lsa->Show();
			 
			 ofstream file1("filesLSA1.dat" , ios::trunc);
			 ofstream file2("filesLSA2.dat" , ios::trunc);

			 file1.close();
			 file2.close();
		 }
private: System::Void BackPanel3Lsa_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel3Lsa->Hide();
			 panel2Selection->Show();
		 }
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void BackPanel3Bit_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel3Line->Hide();
			 panel2Selection->Show();
		 }
private: System::Void BackPanel3Bit_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 panel3Bit->Hide();
			 panel2Selection->Show();
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 panel2Selection->Hide();
			 panel3Bit->Hide();
			 panel3Line->Hide();
			 panel3Lsa->Hide();
			 panel4Lsa->Hide();
			 panel4Line->Hide();

			
			 
		 }
private: System::Void ExitPanel3Line_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void ExitPanel3Bit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void ExitPanel3Lsa_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void lsaButton_Enter(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void lsaButton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {

			 richTextBox2->Text  = "\
Folosind interfata grafica , utilizatorul selecteaza multiple fisiere ce vor fi analizate.\n\nIn \
momentul inceperii analizei se creaza o instanta a clasei “LSA” si sunt apelate pe rand\
metodele sale.\n\n\
Folosind functia “strtok” se extrag termenii fiecarui fisier , se introduc intr­o lista si se\
calculeaza frecventa aparitiei fiecarui termen.\n\n\
In urma extragerii informatiilor necesare , se creaza o noua lista ce contine frecventa de\
aparitie a fiecarui termen din fiecare fisier. Informatiile listei vor fi copiate ulterior intr­o matrice\
pentru a facilita calculul algebric asupra componentelor sale. Se aplica apoi normalizarea\
matricii A , rezultand astfel matricea B.\n\n\
Se apeleaza metoda “ApplySVD” ce aplica algoritmul DVS (descompunerea valorilor\
singulare).\n\n\
Aceasta va suprascrie matricea U peste matricea B , va returna matricea V si vectorul\
valorilor singulare (acestea sunt pasate prin referinta) si va calcula matricea file­by­file.\
Nota : Functia SVD a fost extrasa dintr­o librarie.\n\n\
Pe parcursul rularii se creaza doua fisiere Log , unul “detaliat” , care contine informatii legate\
de fiecare pas al analizei si unul “simplificat” ce contine doar informatiile strict necesare .\n\n\
Se creaza de asemenea un raport HTML a carui menire este de a afisa rezultatul analizei\
intr­un format user­friendly.";
		 }
private: System::Void lineButton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox2->Text = "\
Folosind interfata grafica , utilizatorul selecteaza cele doua fisiere ce vor fi analizate. In\
momentul inceperii analizei se creaza o instanta a clasei “LineByLine” si sunt apelate pe rand\
cele doua metode ale sale.\n\n\
In cadrul metodei \“removeWhitespaceAndComments\” ambele fisiere sunt parcurse de trei ori\
pentru a elimina comentariile , whitespace­ul si pentru a elimina liniile cu mai putin de doua\
caractere si pentru a numara liniile celor doua fisiere.\n\n\
In urma procesarii initiale , se creaza cate trei fisiere corespunzatoare fiecarei parcurgeri a\
fisierelor. Fisierele “LineByLine_file1_out3.txt” si “LineByLine_file2_out3.txt” contin rezultatul\
procesarii initiale.\n\n\
Metoda “calculateSimilarity” verifica daca cele doua fisiere contin linii similare prin calcularea\
distantei Levenshtein dintre oricare doua linii. O linie este considerata similara cu alta daca\
distanta dintre aceasta si alta linie este mai mica de 5 (valoare aleasa in mod arbitrar).\n\n\
Atunci cand o linie este gasita a fi similara , indexului corespunzator acesteia din vectorul\
“plagiarisedLines” ii este atribuita valoarea 1 .\n\n\
Ulterior finalizarii analizei , in cadrul interfetei grafice , se va afisa fisierul\
“LineByLine_file1_out3.txt” si procentajul de similitudine dintre cele doua fisiere\
(liniile suspectate a fi similare vor fi de culoare rosie).";
		 }
private: System::Void bitButton_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void BrowsePanel3Line_Click(System::Object^  sender, System::EventArgs^  e) {

			 openFileDialog1->ShowDialog();
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 filePath1Line->Text = openFileDialog1->FileName;
			 
		 }
private: System::Void BrowsePanel3Line_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 openFileDialog1->ShowDialog();
		 }
private: System::Void button1_Click_3(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog2->ShowDialog();
		 }
private: System::Void openFileDialog2_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 filePath2Line->Text = openFileDialog2->FileName;
			 
		 }
private: System::Void NextPanel3Line_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 LineByLine lineObj;

			 char* filename1 = (char*)(void*)Marshal::StringToHGlobalAnsi(openFileDialog1->FileName);
			 char* filename2 = (char*)(void*)Marshal::StringToHGlobalAnsi(openFileDialog2->FileName);
			 lineObj.removeWhitespaceAndComments(filename1 , filename2);
			 lineObj.calculateSimilarity();
			 richTextBox5->LoadFile("LineByLine_file1_out3.txt" , RichTextBoxStreamType::PlainText);

			 for(int i = 0 ; i < lineObj.numberOfLines[0]-1; i++)
			 {
				 if(lineObj.plagiarisedLines[i])
				 {
					 richTextBox5->SelectionStart = richTextBox5->GetFirstCharIndexFromLine(i);
					 richTextBox5->SelectionLength = richTextBox5->GetFirstCharIndexFromLine(i+1) - richTextBox5->GetFirstCharIndexFromLine(i); 
					 richTextBox5->SelectionBackColor = Color::Red;
					 richTextBox5->SelectionColor = Color::White;
				 }
			 }

			 float p1 = float(lineObj.numberOfPlagiarisedLines) /float(lineObj.numberOfLines[0]) *100; 
			 float p2 = float(lineObj.numberOfPlagiarisedLines) / float(lineObj.numberOfLines[1]) *100;

			 p1 = floor(p1*100)/100;
			 p2 = floor(p2*100)/100;

			 label19->Text += p1;
			 label19->Text += "%";

			 label20->Text += p2;
			 label20->Text += "%";
			 
			 panel3Line->Hide();
			 panel4Line->Show();
		 }
private: System::Void ExitPanel4Line_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
		 }
private: System::Void panel4Line_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {


		 }
private: System::Void backgroundWorker2_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

		 }
private: System::Void button1_Click_4(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tempButton_Click(System::Object^  sender, System::EventArgs^  e) {


		 }
private: System::Void richTextBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void filePath1Line_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_5(System::Object^  sender, System::EventArgs^  e) {

			 richTextBox4->LoadFile(openFileDialog1->FileName , RichTextBoxStreamType::PlainText);
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 richTextBox4->LoadFile(openFileDialog2->FileName , RichTextBoxStreamType::PlainText);
		 }
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void ClearButton1_Panel3LSA_Click(System::Object^  sender, System::EventArgs^  e) {

			 listViewPanel3LSA_1->Clear();
			 ofstream file1("filesLSA1.dat" , ios::trunc);
			 file1.close();
		 }
private: System::Void richTextBoxPanel3LSA1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBoxPanel3LSA2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ClearButton2_Panel3LSA_Click(System::Object^  sender, System::EventArgs^  e) {

			 listViewPanel3LSA_2->Clear();
			 ofstream file2("filesLSA2.dat" , ios::trunc);
			 file2.close();
		 }
private: System::Void AddFileButton1_Panel3LSA_Click(System::Object^  sender, System::EventArgs^  e) {

			 openFileDialogLSA_1->ShowDialog();

		 }
private: System::Void listViewPanel3LSA_1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listViewPanel3LSA_2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void openFileDialogLSA_1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {


			 listViewPanel3LSA_1->Items->Add(openFileDialogLSA_1->FileName);
			 
			 char *fisierPath = (char*)(void*)Marshal::StringToHGlobalAnsi(openFileDialogLSA_1->FileName);
			 ofstream fisier1;
			 fisier1.open ("filesLSA1.dat",ios::app);
			 fisier1 << fisierPath;
			 fisier1 << endl;
			 fisier1.close();

			 
			 
		 }
private: System::Void openFileDialogLSA_2_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 
			 listViewPanel3LSA_2->Items->Add(openFileDialogLSA_2->FileName);

			 char *fisierPath = (char*)(void*)Marshal::StringToHGlobalAnsi(openFileDialogLSA_2->FileName);
			 ofstream fisier2;
			 fisier2.open ("filesLSA2.dat",ios::app);
			 fisier2 << fisierPath;
			 fisier2 << endl;
			 fisier2.close();
		 }
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {


			 if (listViewPanel3LSA_1->SelectedItems->Count > 0)
			 {
				 richTextBox3->Text = "";
				 richTextBox3->LoadFile(listViewPanel3LSA_1->FocusedItem->Text , RichTextBoxStreamType::PlainText);
				 listViewPanel3LSA_1->SelectedItems->Clear();
			 }


			 if (listViewPanel3LSA_2->SelectedItems->Count > 0)
			 {
				 richTextBox3->Text = "";
				 richTextBox3->LoadFile(listViewPanel3LSA_2->FocusedItem->Text , RichTextBoxStreamType::PlainText);
				 listViewPanel3LSA_2->SelectedItems->Clear();
			 }

		 }

private: System::Void richTextBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void AddFileButton2_Panel3LSA_Click(System::Object^  sender, System::EventArgs^  e) {

			 openFileDialogLSA_2->ShowDialog();
		 }
private: System::Void AnalyzePanel3Lsa_Click(System::Object^  sender, System::EventArgs^  e) {
				
			 int *fileNumber;
			 fileNumber = new int [2];

			 ifstream fisier1 ("filesLSA1.dat");
			 ifstream fisier2 ("filesLSA2.dat");

			 fileNumber[0] = listViewPanel3LSA_1->Items->Count;
			 fileNumber[1] = listViewPanel3LSA_2->Items->Count;
			 int fileNumberSum = fileNumber[0] + fileNumber[1];

			 vector<char*>filePaths(10);

			 for(int i = 0  ; i < fileNumber[0]; i++)
			 {
				 filePaths[i] = new char[50];
				 fisier1.getline(filePaths[i] , 256);
			 }

			 for(int i = fileNumber[0]  ; i < fileNumber[0] + fileNumber[1] ; i++)
			 {
				 filePaths[i] = new char[50];
				 fisier2.getline(filePaths[i] , 256);
			 }

			 for(int i = 0 ; i < fileNumber[0] + fileNumber[1]; i++)
			 {
				 String^ temp = gcnew String(filePaths[i]);
				 richTextBox3->Text += temp + "\r\n";
			 }

			 fisier1.close();
			 fisier2.close();


			 LSA objectLSA(fileNumber , filePaths);
			 objectLSA.GetLsaMatrix();
			 objectLSA.NormalizeMatrix();
			 objectLSA.ApplySVD();

			 //Process::Start("notepad.exe", "logFile_LSA.txt" );

			 panel3Lsa->Hide();
			 panel4Lsa->Show();

		 }

public: System::Void progressBar2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void LogFileViewer_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void ExitPanel4LSA_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
		 }
private: System::Void ViewLogPanel4LSA_Click(System::Object^  sender, System::EventArgs^  e) {

			 
		 }
private: System::Void OpenLogFileDetailedLSA_Click(System::Object^  sender, System::EventArgs^  e) {

			 Process::Start("notepad.exe", "logFileDetailed_LSA.txt" );
		 }
private: System::Void OpenLogFileLSA_Click(System::Object^  sender, System::EventArgs^  e) {

			 Process::Start("notepad.exe", "logFileSimple_LSA.txt" );
		 }
private: System::Void OpenHTMLReportLSA_Click(System::Object^  sender, System::EventArgs^  e) {

			 Process::Start("chrome.exe", "d:\\raport_html.html" );

		 }
};
}

