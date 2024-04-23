#pragma once
#include"VokabelTrainer.h"
#include"header.h"
#include"DateiHaendling.h"
namespace P10
{
	class schnittstelle
	{
	private:
		int anzahl = 0;
		VoTrainer voTraining;
		dateiHaendling DH;
	public:
		void vokabeln_in_datei_hinzufuegen(Vokabeln);
		int get_anzahl();

		void aendern(int, int, Vokabeln);
		Vokabeln* vokabeln_bekommen(Vokabeln*);
		void zeile_loeschen_s(int);
	};
}