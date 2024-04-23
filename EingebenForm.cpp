#include"EingebenForm.h"
#include"Schnittstelle.h"
#include"header.h"
#include"MainForm.h"
#include <msclr\marshal_cppstd.h>
namespace P10
{
	// schnittstelle klasse
	schnittstelle vokabel_hinzufuegen;

	System::Void EingebenForm::einfuegen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// struktur
		Vokabeln vokabel;
		// wenn in textboxen etwas drinn steh
		if (textBox1->Text->Length != 0 && textBox2->Text->Length != 0)
		{
			// für marshal funktion
			msclr::interop::marshal_context c;
			const char *deutsch = c.marshal_as<const char*>(textBox1->Text);
			const char *englisch = c.marshal_as<const char*>(textBox2->Text);
			strcpy(vokabel.deutsch, deutsch);
			strcpy(vokabel.englisch, englisch);
			// vokabeln in datei hinzufügen
			vokabel_hinzufuegen.vokabeln_in_datei_hinzufuegen(vokabel);
			textBox1->Text = "";
			textBox2->Text = "";
			MessageBox::Show("Die Vokabel wurde hinzugefügt!");
		}
		else
		{	
			MessageBox::Show("Die Vokabel konnte nicht hinzugefügt werden!");
		}
	}
	System::Void EingebenForm::zurueck_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// beendet die form
		this->Close();
	}
	System::Void EingebenForm::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void EingebenForm::textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
}