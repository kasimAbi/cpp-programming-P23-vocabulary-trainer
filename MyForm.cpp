#include "MyForm.h"

using namespace P10;


System::Void MyForm::button1_Click(System::Object^  sender, System::EventArgs^  e)
{

	if (textBox1->Text->IsNullOrEmpty(Text))
	{
		this->textBox1 = textBox2;
	}
}

System::Void MyForm::textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	
}

System::Void MyForm:: textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
{

}

System::Void MyForm::button2_Click(System::Object^  sender, System::EventArgs^  e)
{

}

System::Void MyForm::button3_Click(System::Object^  sender, System::EventArgs^  e)
{

}

System::Void MyForm::button4_Click(System::Object^  sender, System::EventArgs^  e)
{

}

System::Void MyForm::beenden_Click(System::Object^  sender, System::EventArgs^  e)
{

}