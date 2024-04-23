#include"VokabelTrainer.h"
#include"header.h"
#include<time.h>
#include"Schnittstelle.h"
#include"DateiHaendling.h"

namespace P10
{
	void schnittstelle::vokabeln_in_datei_hinzufuegen(Vokabeln vokabel)
	{
		DH.vokabel_in_datei(vokabel);
	}
	// wenn anzahl = 0 dann konnte die datei nciht geöffnet werden.
	int schnittstelle::get_anzahl()
	{
		voTraining.anzahl_vokabeln(&anzahl);
		return anzahl;
	}

	Vokabeln* schnittstelle::vokabeln_bekommen(Vokabeln *vokabel_array)
	{
		// speicher füllen. also array in klasse füllen so gesehen. die daten werden von der datei rausgeholt
		voTraining.anzahl_vokabeln(&anzahl);
		vokabel_array = voTraining.vokabel_einfuegen_in_main_und_klasse_array(anzahl, vokabel_array);
		return vokabel_array;
	}

	void schnittstelle::aendern(int reihenwahl,int anzahl, Vokabeln vokabel)
	{
		Vokabeln *vokabel_array;
		voTraining.anzahl_vokabeln(&anzahl);
		vokabel_array = voTraining.vokabel_einfuegen_in_main_und_klasse_array(anzahl, vokabel_array);
		DH.vokabeln_aendern(reihenwahl, anzahl, vokabel, vokabel_array);
	}

	void schnittstelle::zeile_loeschen_s(int zufall_reihe)
	{
		Vokabeln *vokabeln;
		int anzahl = 0;
		voTraining.anzahl_vokabeln(&anzahl);
		vokabeln = voTraining.vokabel_einfuegen_in_main_und_klasse_array(anzahl, vokabeln);
		DH.zeile_loeschen(zufall_reihe, anzahl, vokabeln);
	}
}