#pragma once

namespace ProiectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  LogFileLSA;
	protected: 
	private: System::Windows::Forms::Button^  ExitButtonForm2;
	private: System::Windows::Forms::Button^  ViewLogButton;


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
			this->LogFileLSA = (gcnew System::Windows::Forms::RichTextBox());
			this->ExitButtonForm2 = (gcnew System::Windows::Forms::Button());
			this->ViewLogButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LogFileLSA
			// 
			this->LogFileLSA->Location = System::Drawing::Point(12, 12);
			this->LogFileLSA->Name = L"LogFileLSA";
			this->LogFileLSA->Size = System::Drawing::Size(460, 367);
			this->LogFileLSA->TabIndex = 0;
			this->LogFileLSA->Text = L"";
			this->LogFileLSA->TextChanged += gcnew System::EventHandler(this, &Form2::LogFileLSA_TextChanged);
			// 
			// ExitButtonForm2
			// 
			this->ExitButtonForm2->Location = System::Drawing::Point(12, 396);
			this->ExitButtonForm2->Name = L"ExitButtonForm2";
			this->ExitButtonForm2->Size = System::Drawing::Size(75, 23);
			this->ExitButtonForm2->TabIndex = 1;
			this->ExitButtonForm2->Text = L"Exit";
			this->ExitButtonForm2->UseVisualStyleBackColor = true;
			this->ExitButtonForm2->Click += gcnew System::EventHandler(this, &Form2::ExitButtonForm2_Click);
			// 
			// ViewLogButton
			// 
			this->ViewLogButton->Location = System::Drawing::Point(397, 396);
			this->ViewLogButton->Name = L"ViewLogButton";
			this->ViewLogButton->Size = System::Drawing::Size(75, 23);
			this->ViewLogButton->TabIndex = 2;
			this->ViewLogButton->Text = L"View Log";
			this->ViewLogButton->UseVisualStyleBackColor = true;
			this->ViewLogButton->Click += gcnew System::EventHandler(this, &Form2::ViewLogButton_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 431);
			this->Controls->Add(this->ViewLogButton);
			this->Controls->Add(this->ExitButtonForm2);
			this->Controls->Add(this->LogFileLSA);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {

				 
			 }

	private: System::Void LogFileLSA_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void ExitButtonForm2_Click(System::Object^  sender, System::EventArgs^  e) {

				 Application::Exit();
			 }
	private: System::Void ViewLogButton_Click(System::Object^  sender, System::EventArgs^  e) {

				 
			 }
};
}
