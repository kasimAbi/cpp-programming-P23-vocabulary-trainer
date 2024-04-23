#pragma once

namespace P10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für EingebenForm
	/// </summary>
	public ref class EingebenForm : public System::Windows::Forms::Form
	{
	public:
		EingebenForm(void)
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
		~EingebenForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  einfuegen;
	private: System::Windows::Forms::Button^  zurueck;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->einfuegen = (gcnew System::Windows::Forms::Button());
			this->zurueck = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(82, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &EingebenForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(83, 34);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &EingebenForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Deutsch:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Englisch:";
			// 
			// einfuegen
			// 
			this->einfuegen->Location = System::Drawing::Point(12, 62);
			this->einfuegen->Name = L"einfuegen";
			this->einfuegen->Size = System::Drawing::Size(90, 30);
			this->einfuegen->TabIndex = 4;
			this->einfuegen->Text = L"einfügen";
			this->einfuegen->UseVisualStyleBackColor = true;
			this->einfuegen->Click += gcnew System::EventHandler(this, &EingebenForm::einfuegen_Click);
			// 
			// zurueck
			// 
			this->zurueck->Location = System::Drawing::Point(108, 62);
			this->zurueck->Name = L"zurueck";
			this->zurueck->Size = System::Drawing::Size(90, 30);
			this->zurueck->TabIndex = 5;
			this->zurueck->Text = L"zurück";
			this->zurueck->UseVisualStyleBackColor = true;
			this->zurueck->Click += gcnew System::EventHandler(this, &EingebenForm::zurueck_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// EingebenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(210, 100);
			this->Controls->Add(this->zurueck);
			this->Controls->Add(this->einfuegen);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"EingebenForm";
			this->Text = L"EingebenForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// funktionsprototypen
	private: System::Void einfuegen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void zurueck_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e);
};
}
