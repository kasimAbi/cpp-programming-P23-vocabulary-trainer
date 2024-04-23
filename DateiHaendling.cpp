#define _CRT_SECURE_NO_WARNINGS
#include"VokabelTrainer.h"
#include"header.h"
#include"DateiHaendling.h"

namespace P10
{
	
	void dateiHaendling::vokabel_in_datei(Vokabeln vokabel)
	{
		int erfolg = 0, ok = 1;
		// app: datei zum schreiben/ erstellen öffnen. neue daten werden hinten angehängt.
		datei_schreiben.open("test.txt", ios::app);
		// gibt rückgabewert (true/false/1/0) an erfolg zurück ob es geöffnet werden konnte oder nciht
		erfolg = datei_schreiben.good();
		if (erfolg == 0)
		{

		}
		else
		{
			// wenn geöffnet werden konnte dann wird das in die datei geschrieben
			datei_schreiben << vokabel.deutsch << "\n";
			datei_schreiben << vokabel.englisch << "\n";
			// datei schließen
			datei_schreiben.close();
		}
	}
	// ändern von einem fehler
	void dateiHaendling::vokabeln_aendern(int reihenwahl, int anzahl, Vokabeln vokabel, Vokabeln* vokabeln)
	{
		int erfolg = 0, ok = 0, index = 0;
		datei_schreiben.open("test.txt", ios::out);
		erfolg = datei_schreiben.good();
		if (erfolg == 0)
		{
			;
		}
		else
		{
			for (index = 0; index < anzahl; index++)
			{
				// reihenwahl ist das welche vokabel geändert werden soll und de/eng ist das ob deutsches oder englisches wort geändert werden soll
				if (index == reihenwahl - 1)
				{
					datei_schreiben << vokabel.deutsch << "\n";
					datei_schreiben << vokabel.englisch << "\n";
				}
				else
				{
					// daten reinschreiben
					datei_schreiben << vokabeln[index].deutsch << "\n";
					datei_schreiben << vokabeln[index].englisch << "\n";
				}
			}
			datei_schreiben.close();
		}
	}

	void dateiHaendling::zeile_loeschen(int zufall_reihe, int anzahl, Vokabeln *vokabeln)
	{
		int erfolg = 0, ok = 1, index = 0;
		char eingabe_de[GROESSE];
		char eingabe_eng[GROESSE];
		Vokabeln zwischenspeicher;
		// out: löscht inhalt und öffnet zum schreiben.
		datei_schreiben.open("test.txt", ios::out);
		erfolg = datei_schreiben.good();
		if (erfolg == 0)
		{

		}
		else
		{
			for (index = 0; index < anzahl - 1; index++)
			{
				if (index >= zufall_reihe)
				{
					vokabeln[index] = vokabeln[index + 1];
				}
			}
			for (index = 0; index < anzahl - 1; index++)
			{
				zwischenspeicher = vokabeln[index];
				datei_schreiben << zwischenspeicher.deutsch << "\n";
				datei_schreiben << zwischenspeicher.englisch << "\n";
			}
			anzahl--;
			free(vokabeln);
			vokabeln = new Vokabeln[anzahl + 1];
			datei_schreiben.close();
			// in: öffnet zum lesen.
			datei_schreiben.open("test.txt", ios::in);
			erfolg = datei_schreiben.good();
			if (erfolg == 0)
			{

			}
			else
			{
				index = 0;
				while (erfolg != 0)
				{
					//liest kompletten String
					//datei_schreiben >> eingabe;             
					//liest nur bis zum ersten Leerzeichen
					datei_schreiben.getline(eingabe_de, GROESSE);
					datei_schreiben.getline(eingabe_eng, GROESSE);
					//Prüfen, ob lesen erfolgreich
					//erfolg = 0 bei Erreichen Fileende
					erfolg = datei_schreiben.good();
					//wenn Dateende nicht erreicht
					// zahl erhöhen für anzahl
					if (erfolg != 0)
					{
						strcpy(vokabeln[index].deutsch, eingabe_de);
						strcpy(vokabeln[index].englisch, eingabe_eng);
					}
					index++;
				}
				datei_schreiben.close();
			}
		}
	}
}