#include"AendernForm.h"
#include"MainForm.h"
#include <msclr\marshal_cppstd.h>
namespace P10
{
	// klasse schnittstelle
	schnittstelle vokabel_aendern;
	// ladet wenn es geöffnet wird
	System::Void AendernForm::AendernForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		// initialisierungen/deklarationen
		Vokabeln *vokabeln;
		int anzahl = 0;
		// vokabeln von datei bekommen. und anzahl der vokabeln auch.
		vokabeln = vokabel_aendern.vokabeln_bekommen(vokabeln);
		anzahl = vokabel_aendern.get_anzahl();
		// inhalt löschen.
		this->leer->Items->Clear();
		// inhalthinzufügen.
		for (int index = 0; index < anzahl; index++)
		{
			System::String ^deutsch = gcnew System::String(vokabeln[index].deutsch);
			System::String ^englisch = gcnew System::String(vokabeln[index].englisch);
			this->leer->Items->Add(index + 1 + ":  " + deutsch + " :      " + englisch + "\n");
		}
		// array leeren.
		free(vokabeln);
	}
	System::Void AendernForm::leer_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void AendernForm::label3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void AendernForm::label2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void AendernForm::label1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void AendernForm::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void AendernForm::textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void AendernForm::textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void AendernForm::aendern_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// initialisierungen/ deklarationen
		Vokabeln vokabel;
		int anzahl = 0, index = 0, fehler = 0, reihenwahl = 0;
		Vokabeln *vokabeln;
		// ist für die marshal funktion.
		msclr::interop::marshal_context c;
		// erstellt eine konstante variabel und mit der marshal funktion speichert es eine textbox dann da rein
		const char *reihe = c.marshal_as<const char*>(textBox1->Text);
		// überprüft ob der eingegebene wert eine zahl ist
		for (index = 0; index < textBox1->Text->Length; index++)
		{
			if (!isdigit(reihe[index]))
			{
				fehler = 1;
				index = textBox1->Text->Length + 1;
			}
		}
		// wenn fehler != 1 ist dann ist es eine zahl gewesen.
		if (fehler != 1)
		{
			reihenwahl = atoi(reihe);
			anzahl = vokabel_aendern.get_anzahl();
		}
		// wenn etwas eingegeben wurde bei beiden textboxen
		if (textBox2->Text->Length != 0 && textBox3->Text->Length != 0)
		{
			// wenn eine gültige reihe und eine vorhandene gewählt wurde
			if (reihenwahl != 0 && reihenwahl <= anzahl)
			{
				// erstellt eine konstante variabel und mit der marshal funktion speichert es eine textbox dann da rein
				const char *deutsch = c.marshal_as<const char*>(textBox2->Text);
				const char *englisch = c.marshal_as<const char*>(textBox3->Text);
				// speichert das was in deutsch steht in die struktur(deutsch und englisch).
				strcpy(vokabel.deutsch, deutsch);
				strcpy(vokabel.englisch, englisch);
				// ruft funktion auf von der schnittstelle
				vokabel_aendern.aendern(reihenwahl, anzahl, vokabel);
				MessageBox::Show("Vokabel wurde geändert!");
			}
			else
			{
				MessageBox::Show("Keine Vokabeln an dieser Stelle vorhanden!");
			}
		}
		else
		{
			MessageBox::Show("Die Vokabel konnte nicht geändert werden!");
		}
		// vokabeln bekommen von schnittstelle/ VokabelTrainer klasse
		vokabeln = vokabel_aendern.vokabeln_bekommen(vokabeln);
		anzahl = vokabel_aendern.get_anzahl();
		// löscht inhaltvon listbox(leer)
		this->leer->Items->Clear();
		//speichert die werte wieder rein in leer
		for (int index = 0; index < anzahl; index++)
		{
			System::String ^deutsch = gcnew System::String(vokabeln[index].deutsch);
			System::String ^englisch = gcnew System::String(vokabeln[index].englisch);
			this->leer->Items->Add(index + 1 + ":  " + deutsch + " :      " + englisch + "\n");
		}
		free(vokabeln);
		// leert textboxen alle.
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
	}
	System::Void AendernForm::zurueck_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Close();
	}
}
