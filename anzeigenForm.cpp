#include"anzeigenForm.h"
#include"Schnittstelle.h"
namespace P10
{
	// schnittstelle klasse
	schnittstelle vokabeln_anzeigen;
	// ladet fenster zum laden 
	System::Void anzeigenForm::anzeigenForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		// initialisierung/ deklaration
		Vokabeln *vokabeln;
		int anzahl = 0;
		// vokabeln von dateibekommen und anzahl auch
		vokabeln = vokabeln_anzeigen.vokabeln_bekommen(vokabeln);
		anzahl = vokabeln_anzeigen.get_anzahl();
		// listbox leeren
		this->leer->Items->Clear();
		// werte in listbox einfügen
		for (int index = 0; index < anzahl; index++)
		{
			System::String ^deutsch = gcnew System::String(vokabeln[index].deutsch);
			System::String ^englisch = gcnew System::String(vokabeln[index].englisch);
			this->leer->Items->Add(deutsch + " :      " + englisch + "\n");
		}
		// array leeren
		free(vokabeln);
	}
	System::Void anzeigenForm::leer_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void anzeigenForm::zurueck_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Close();
	}
}