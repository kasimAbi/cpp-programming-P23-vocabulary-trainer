#pragma once

namespace P10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für lernenForm
	/// </summary>
	public ref class lernenForm : public System::Windows::Forms::Form
	{
	public:
		lernenForm(void)
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
		~lernenForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"prüfen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &lernenForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(150, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"zurueck";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &lernenForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &lernenForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(170, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &lernenForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(170, 40);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &lernenForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(12, 68);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(258, 22);
			this->textBox4->TabIndex = 5;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &lernenForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(16, 119);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(26, 22);
			this->textBox5->TabIndex = 6;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &lernenForm::textBox5_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Ihre Antwort lautet:";
			this->label1->Click += gcnew System::EventHandler(this, &lernenForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Sie haben diese Frage";
			this->label2->Click += gcnew System::EventHandler(this, &lernenForm::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"mal richtig beantwortet.";
			this->label4->Click += gcnew System::EventHandler(this, &lernenForm::label4_Click);
			// 
			// lernenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"lernenForm";
			this->Text = L"lernenForm";
			this->Load += gcnew System::EventHandler(this, &lernenForm::lernenForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	// funktionsprototypen
	private: System::Void lernenForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e);
	};
}