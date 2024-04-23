#include"lernenForm.h"
#include"MainForm.h"
#include<time.h>
#include <msclr\marshal_cppstd.h>

namespace P10
{
	// initialisierungen/ deklarationen
	schnittstelle vokabeln_lernen;
	time_t zeit;
	int richtige[255] = { 0 };
	int reihe = 0, de_eng = 0;
	Vokabeln *vokabeln;
	System::Void lernenForm::lernenForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		// Zufallsgenerator initialisieren
		srand(time(&zeit));
		int anzahl = 0;
		char eingabe[GROESSE];
		// anzahl der vokabeln bekommen
		anzahl = vokabeln_lernen.get_anzahl();
		if (anzahl != 0)
		{
			reihe = rand() % anzahl;
			de_eng = rand() % 2;
		}
		else
		{
			MessageBox::Show("Keine Einträge vorhanden!");
			this->Close();
		}
		// vokabeln bekommen
		vokabeln = vokabeln_lernen.vokabeln_bekommen(vokabeln);
		if (de_eng == 0)
		{
			textBox2->Text = "";
			textBox1->Text = "Deutsch:";
			// die vokabel in textbox2 anzeigen
			System::String ^deutsch = gcnew System::String(vokabeln[reihe].deutsch);
			textBox2->SelectedText = deutsch;
		}
		else
		{
			textBox2->Text = "";
			textBox1->Text = "Englisch:";
			// die vokabel in textbox2 anzeigen
			System::String ^englisch = gcnew System::String(vokabeln[reihe].englisch);
			textBox2->SelectedText = englisch;
		}
	}
	System::Void lernenForm::button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// Zufallsgenerator initialisieren
		srand(time(&zeit));
		int anzahl = 0;
		char eingabe[GROESSE];
		int laenge_1 = 0, laenge_2 = 0, index = 0, fehler = 0;
		// wenn in textbox3 was drinne steht
		if (textBox3->Text->Length != 0)
		{
			// für marshal funktion
			msclr::interop::marshal_context c;
			const char *eingabe = c.marshal_as<const char*>(textBox3->Text);
			if (de_eng == 0)
			{
				// länge der vokabeln und das was man eingegeben hat prüfen
				laenge_1 = strlen(eingabe);
				laenge_2 = strlen(vokabeln[reihe].englisch);
				// wenn länge der beiden gleich groß sind
				if (laenge_1 == laenge_2)
				{
					// prüft ob die zeichen übereinstimmen
					for (index = 0; index < laenge_1; index++)
					{
						if (toupper(eingabe[index]) == toupper(vokabeln[reihe].englisch[index]))
						{
							;
						}
						else
						{
							textBox4->Text = "";
							textBox4->Text = "FALSCH!_2";
							fehler = 1;
							richtige[reihe] = 0;
						}
					}
					if (fehler == 0)
					{
						richtige[reihe]++;
						textBox4->Text = "";
						textBox4->Text = "RICHTIG!";
						// wenn die vokabel 3 mal richtig beantwortetwurde dann soll er die vokabel löschen
						if (richtige[reihe] >= 3)
						{
							vokabeln_lernen.zeile_loeschen_s(reihe);
							for (index = reihe; index < anzahl + 1; index++)
							{
								// die richtigen variablen sortieren und den platz für die eine entfernte variable mit der danach ersetzen
								richtige[index] = richtige[index + 1];
							}
						}
					}
				}
				// wenn englische vokabel abgefragt werden soll dann genauso wie bei deutsch nur mit englischen vokabeln prüfen und so
				else
				{
					textBox4->Text = "";
					textBox4->Text = "FALSCH!";
					richtige[reihe] = 0;
				}
				textBox5->Text = "";
				// wert in string conventieren und in texbox5 speichern und ausgeben
				textBox5->Text = Convert::ToString(richtige[reihe]);
			}
			else
			{
				laenge_1 = strlen(eingabe);
				laenge_2 = strlen(vokabeln[reihe].deutsch);
				if (laenge_1 == laenge_2)
				{
					for (index = 0; index < laenge_1; index++)
					{
						if (toupper(eingabe[index]) == toupper(vokabeln[reihe].deutsch[index]))
						{
							;
						}
						else
						{
							textBox4->Text = "";
							textBox4->Text = "FALSCH!_2";
							fehler = 1;
							richtige[reihe] = 0;
						}
					}
					if (fehler == 0)
					{
						richtige[reihe]++;
						textBox4->Text = "";
						textBox4->Text = "RICHTIG!";
						if (richtige[reihe] >= 3)
						{
							vokabeln_lernen.zeile_loeschen_s(reihe);
							for (index = reihe; index < anzahl + 1; index++)
							{
								// die richtigen variablen sortieren und den platz für die eine entfernte variable mit der danach ersetzen
								richtige[index] = richtige[index + 1];
							}
						}
					}
				}
				else
				{
					textBox4->Text = "";
					textBox4->Text = "FALSCH!";
					richtige[reihe] = 0;
				}
				textBox5->Text = "";
				textBox5->Text = Convert::ToString(richtige[reihe]);
			}
			// anzahl der vokabeln bekommen
			anzahl = vokabeln_lernen.get_anzahl();
			if (anzahl != 0)
			{
				reihe = rand() % anzahl;
				de_eng = rand() % 2;
			}
			// wenn anzahl 0 (keine vokabeln vorhanden)
			else
			{
				MessageBox::Show("Keine Einträge mehr vorhanden!");
				this->Close();
			}
			//vokabeln bekommen
			vokabeln = vokabeln_lernen.vokabeln_bekommen(vokabeln);
			if (de_eng == 0)
			{
				textBox2->Text = "";
				textBox1->Text = "Deutsch:";
				System::String ^deutsch = gcnew System::String(vokabeln[reihe].deutsch);
				textBox2->SelectedText = deutsch;
			}
			else
			{
				textBox2->Text = "";
				textBox1->Text = "Englisch:";
				System::String ^englisch = gcnew System::String(vokabeln[reihe].englisch);
				textBox2->SelectedText = englisch;
			}
		}
		else
		{
			MessageBox::Show("Geben sie etwas ein!");
		}
		textBox3->Text = "";
	}
	System::Void lernenForm::button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// form beenden
		this->Close();
	}
	System::Void lernenForm::textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void lernenForm::textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void lernenForm::textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void lernenForm::textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void lernenForm::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void lernenForm::label1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void lernenForm::label2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	System::Void lernenForm::label4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
}