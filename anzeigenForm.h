#pragma once

namespace P10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Vokabeln_anzeigen_Form
	/// </summary>
	public ref class anzeigenForm : public System::Windows::Forms::Form
	{
	public:
		anzeigenForm(void)
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
		~anzeigenForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  leer;
	private: System::Windows::Forms::Button^  zurueck;
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
			this->zurueck = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// leer
			// 
			this->leer->FormattingEnabled = true;
			this->leer->ItemHeight = 16;
			this->leer->Location = System::Drawing::Point(12, 18);
			this->leer->Name = L"leer";
			this->leer->Size = System::Drawing::Size(376, 308);
			this->leer->TabIndex = 0;
			this->leer->SelectedIndexChanged += gcnew System::EventHandler(this, &anzeigenForm::leer_SelectedIndexChanged);
			// 
			// zurueck
			// 
			this->zurueck->Location = System::Drawing::Point(188, 346);
			this->zurueck->Name = L"zurueck";
			this->zurueck->Size = System::Drawing::Size(200, 45);
			this->zurueck->TabIndex = 1;
			this->zurueck->Text = L"zurück";
			this->zurueck->UseVisualStyleBackColor = true;
			this->zurueck->Click += gcnew System::EventHandler(this, &anzeigenForm::zurueck_Click);
			// 
			// anzeigenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 403);
			this->Controls->Add(this->zurueck);
			this->Controls->Add(this->leer);
			this->Name = L"anzeigenForm";
			this->Text = L"anzeigenForm";
			this->Load += gcnew System::EventHandler(this, &anzeigenForm::anzeigenForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	// funktionsprototypen
	private: System::Void anzeigenForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void leer_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void zurueck_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
