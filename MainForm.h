#pragma once
#include"EingebenForm.h"
#include"VokabelTrainer.h"
#include"Schnittstelle.h"
#include"AendernForm.h"
#include"anzeigenForm.h"
#include"lernenForm.h"

namespace P10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			//Speicher für neue Form dynamisch anlegen. (von der Vorlesung)
			vokabeln_eingeben = gcnew EingebenForm();
			Vokabeln_anzeigen = gcnew anzeigenForm();
			Vokabeln_aendern = gcnew AendernForm();
			Vokabeln_abfragen = gcnew lernenForm();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  eingabe;
	private: System::Windows::Forms::Button^  aendern;
	private: System::Windows::Forms::Button^  abfragen;
	private: System::Windows::Forms::Button^  beenden;
	private: System::Windows::Forms::Button^  anzeigen;

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
			this->eingabe = (gcnew System::Windows::Forms::Button());
			this->aendern = (gcnew System::Windows::Forms::Button());
			this->abfragen = (gcnew System::Windows::Forms::Button());
			this->beenden = (gcnew System::Windows::Forms::Button());
			this->anzeigen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// eingabe
			// 
			this->eingabe->Location = System::Drawing::Point(12, 12);
			this->eingabe->Name = L"eingabe";
			this->eingabe->Size = System::Drawing::Size(200, 45);
			this->eingabe->TabIndex = 0;
			this->eingabe->Text = L"Vokabeln eingeben";
			this->eingabe->UseVisualStyleBackColor = true;
			this->eingabe->Click += gcnew System::EventHandler(this, &MainForm::eingabe_Click);
			// 
			// aendern
			// 
			this->aendern->Location = System::Drawing::Point(223, 12);
			this->aendern->Name = L"aendern";
			this->aendern->Size = System::Drawing::Size(100, 45);
			this->aendern->TabIndex = 1;
			this->aendern->Text = L"Aendern";
			this->aendern->UseVisualStyleBackColor = true;
			this->aendern->Click += gcnew System::EventHandler(this, &MainForm::aendern_Click);
			// 
			// abfragen
			// 
			this->abfragen->Location = System::Drawing::Point(12, 63);
			this->abfragen->Name = L"abfragen";
			this->abfragen->Size = System::Drawing::Size(200, 45);
			this->abfragen->TabIndex = 2;
			this->abfragen->Text = L"Vokabeln lernen";
			this->abfragen->UseVisualStyleBackColor = true;
			this->abfragen->Click += gcnew System::EventHandler(this, &MainForm::abfragen_Click);
			// 
			// beenden
			// 
			this->beenden->Location = System::Drawing::Point(223, 63);
			this->beenden->Name = L"beenden";
			this->beenden->Size = System::Drawing::Size(100, 45);
			this->beenden->TabIndex = 3;
			this->beenden->Text = L"Beenden";
			this->beenden->UseVisualStyleBackColor = true;
			this->beenden->Click += gcnew System::EventHandler(this, &MainForm::beenden_Click);
			// 
			// anzeigen
			// 
			this->anzeigen->Location = System::Drawing::Point(12, 114);
			this->anzeigen->Name = L"anzeigen";
			this->anzeigen->Size = System::Drawing::Size(311, 45);
			this->anzeigen->TabIndex = 4;
			this->anzeigen->Text = L"Vokabeln anzeigen";
			this->anzeigen->UseVisualStyleBackColor = true;
			this->anzeigen->Click += gcnew System::EventHandler(this, &MainForm::anzeigen_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 167);
			this->Controls->Add(this->anzeigen);
			this->Controls->Add(this->beenden);
			this->Controls->Add(this->abfragen);
			this->Controls->Add(this->aendern);
			this->Controls->Add(this->eingabe);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	// sowas wie Funktionsprototypen für die buttons und textboxen.
	private: System::Void eingabe_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void aendern_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void abfragen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void beenden_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void anzeigen_Click(System::Object^  sender, System::EventArgs^  e);
	// Variable als Zeiger für neue Form(von Vorlesung). oben in "void MainForm()" lege ich speicher dynamisch an.
	private: EingebenForm^ vokabeln_eingeben;
	private: anzeigenForm^ Vokabeln_anzeigen;
	private: AendernForm^ Vokabeln_aendern;
	private: lernenForm^ Vokabeln_abfragen;
};
}
