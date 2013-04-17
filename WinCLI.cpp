#include "BoggleGUI.h"
#include <time.h>
#include <iostream>
using namespace std;
using namespace Project1;

	/*
	Main method
	Predcondition: none
	Postcondition: none
	*/
[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	srand((unsigned) time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	Application::Run(gcnew BoggleGUI());
	return 0;
}