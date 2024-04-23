#pragma once
#include"header.h"
#include<fstream>
namespace P10
{
	class dateiHaendling
	{
	private:
		fstream datei_schreiben;		//deklaration eines Objektes datei_schreiben der Klasse fstream
		Vokabeln *vokabeln;

	public:
		void vokabel_in_datei(Vokabeln);
		void zeile_loeschen(int, int, Vokabeln*);
		void vokabeln_aendern(int, int, Vokabeln, Vokabeln*);
	};
}