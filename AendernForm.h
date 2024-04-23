#pragma once

namespace P10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für AendernForm
	/// </summary>
	public ref class AendernForm : public System::Windows::Forms::Form
	{
	public:
		AendernForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~AendernForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  leer;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  zurueck;
	private: System::Windows::Forms::Button^  aendern;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->leer = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->zurueck = (gcnew System::Windows::Forms::Button());
			this->aendern = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// leer
			// 
			this->leer->FormattingEnabled = true;
			this->leer->ItemHeight = 16;
			this->leer->Location = System::Drawing::Point(12, 12);
			this->leer->Name = L"leer";
			this->leer->Size = System::Drawing::Size(270, 116);
			this->leer->TabIndex = 0;
			this->leer->SelectedIndexChanged += gcnew System::EventHandler(this, &AendernForm::leer_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(198, 134);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AendernForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Welches wollen sie ändern:";
			this->label1->Click += gcnew System::EventHandler(this, &AendernForm::label1_Click);
			// 
			// zurueck
			// 
			this->zurueck->Location = System::Drawing::Point(198, 218);
			this->zurueck->Name = L"zurueck";
			this->zurueck->Size = System::Drawing::Size(84, 45);
			this->zurueck->TabIndex = 3;
			this->zurueck->Text = L"zurück";
			this->zurueck->UseVisualStyleBackColor = true;
			this->zurueck->Click += gcnew System::EventHandler(this, &AendernForm::zurueck_Click);
			// 
			// aendern
			// 
			this->aendern->Location = System::Drawing::Point(12, 218);
			this->aendern->Name = L"aendern";
			this->aendern->Size = System::Drawing::Size(180, 45);
			this->aendern->TabIndex = 4;
			this->aendern->Text = L"ändern";
			this->aendern->UseVisualStyleBackColor = true;
			this->aendern->Click += gcnew System::EventHandler(this, &AendernForm::aendern_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Deutsches Wort:";
			this->label2->Click += gcnew System::EventHandler(this, &AendernForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Englisches Wort:";
			this->label3->Click += gcnew System::EventHandler(this, &AendernForm::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(182, 162);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &AendernForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(182, 190);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &AendernForm::textBox3_TextChanged);
			// 
			// AendernForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(294, 276);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->aendern);
			this->Controls->Add(this->zurueck);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->leer);
			this->Name = L"AendernForm";
			this->Text = L"AendernForm";
			this->Load += gcnew System::EventHandler(this, &AendernForm::AendernForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	// funktionsprototypen
	private: System::Void AendernForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void leer_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void aendern_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void zurueck_Click(System::Object^  sender, System::EventArgs^  e);
};
}
