#define _CRT_SECURE_NO_WARNINGS
#include"VokabelTrainer.h"
#include"header.h"
// in die datei schreiben
namespace P10
{
	// in vokabeln in klasse (array) einf�gen
	Vokabeln* VoTrainer::vokabel_einfuegen_in_main_und_klasse_array(int anzahl, Vokabeln *vokabel_array)
	{
		int erfolg = 0, ok = 1, index = 1, index2 = 0;
		Vokabeln zwischenspeicher;
		char eingabe[GROESSE];
		free(vokabeln);
		if (anzahl == 0)
		{
			// f�r den fall das datei nicht ge�ffnet werden k�nnte und damit das programm dann nciht abst�rzt
			vokabeln = new Vokabeln[1];
			vokabel_array = new Vokabeln[1];
		}
		else
		{
			// ansonsten soll er pl�tze reservieren
			vokabeln = new Vokabeln[anzahl];
			vokabel_array = new Vokabeln[anzahl];
			// in: datei wird zum lesen ge�ffnet.
			datei_schreiben.open("test.txt", ios::in);
			erfolg = datei_schreiben.good();
			if (erfolg == 0)
			{
				
			}
			else
			{
				while (erfolg != 0)
				{
					// speichert eine variable von datei in gr��e als zeichenkette und dateipositionszeiger geht dann weiter runter
					datei_schreiben.getline(eingabe, GROESSE);
					erfolg = datei_schreiben.good();
					if (erfolg != 0)
					{
						if (index % 2 == 0)
						{
							// speichert eingabe in struktur
							strcpy(zwischenspeicher.englisch, eingabe);
							// dann f�gt es zwischenspeicher(struktur Vokabeln) in variabeln(struktur Vokabeln als array in klasse)
							vokabeln[index2] = zwischenspeicher;
							vokabel_array[index2] = zwischenspeicher;
							// index2 weil er nur jedesmal index2 hochz�hlt wenn er in variabeln array etwas reinschreibt
							index2++;
						}
						else
						{
							//speichert eingabe (welches von datei geholt wurde) in struktur
							strcpy(zwischenspeicher.deutsch, eingabe);
						}
					}
					index++;
				}
				// datei schlie�en
				datei_schreiben.close();
			}
		}
		return vokabel_array;
	}

	// anzahl der zeichenketten in der datei z�hlen
	void VoTrainer::anzahl_vokabeln(int* anzahl)
	{
		int erfolg = 0, ok = 1, zahl = 0, index = 0;
		char eingabe[GROESSE];
		datei_schreiben.open("test.txt", ios::in);
		erfolg = datei_schreiben.good();
		if (erfolg == 0)
		{
			*anzahl = 0;
		}
		else
		{
			while (erfolg != 0)
			{
				//liest kompletten String
				//datei_schreiben >> eingabe;             
				//liest nur bis zum ersten Leerzeichen
				datei_schreiben.getline(eingabe, GROESSE);
				//Pr�fen, ob lesen erfolgreich
				//erfolg = 0 bei Erreichen Fileende
				erfolg = datei_schreiben.good();
				//wenn Dateende nicht erreicht
				// zahl erh�hen f�r anzahl
				if (erfolg != 0)
				{
					zahl++;
				}
			}
			datei_schreiben.close();
			// geteilt durch zwei weil oben jede zeile dazu addiert wird.
			zahl /= 2;
			*anzahl = zahl;
			datei_schreiben.close();
		}
	}
}