#include "MyForm.h"
#include <iostream>
using namespace std;
using namespace Project1;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	Application::Run(gcnew MyForm());
	return 0;
}