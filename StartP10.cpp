#include"MainForm.h"
#include"EingebenForm.h"
#include"AendernForm.h"
#include"anzeigenForm.h"
#include"lernenForm.h"

using namespace System;
using namespace System::Windows::Forms;
// das ist in vorlesung vorgegeben
[STAThreadAttribute]
int main(array<String^ > ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	P10::MainForm form;
	Application::Run(%form);
	return 0;
}

namespace P10
{

	System::Void MainForm::eingabe_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// ruft die form vokabeln eingeben auf
		this->Visible = false;
		vokabeln_eingeben->ShowDialog();
		this->Visible = true;
	}
	System::Void MainForm::aendern_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// ruft funktion vokabeln ändern auf
		this->Visible = false;
		Vokabeln_aendern->ShowDialog();
		this->Visible = true;
	}
	System::Void MainForm::abfragen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// ruft funktion für abfrage auf
		this->Visible = false;
		Vokabeln_abfragen->ShowDialog();
		this->Visible = true;
	}
	System::Void MainForm::beenden_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// beendet programm
		MainForm::Close();
	}
	System::Void MainForm::anzeigen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// ruft funktion vokabeln anzeigen auf
		this->Visible = false;
		Vokabeln_anzeigen->ShowDialog();
		this->Visible = true;
	}
}