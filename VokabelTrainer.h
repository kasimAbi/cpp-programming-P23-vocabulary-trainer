#pragma once
#ifndef VokabelTrainer_h
#define VokabelTrainer_h
#include"header.h"
#include<fstream>
namespace P10
{
	class VoTrainer
	{
	private:
		Vokabeln *vokabeln;
		fstream datei_schreiben;		//deklaration eines Objektes datei_schreiben der Klasse fstream

	public:
		Vokabeln* vokabel_einfuegen_in_main_und_klasse_array(int, Vokabeln*);
		void anzahl_vokabeln(int*);
	};
}
#endif