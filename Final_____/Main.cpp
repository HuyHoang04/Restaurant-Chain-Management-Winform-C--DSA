using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "MenuForm.h"
#include "File.h"


using namespace System::Windows::Forms;

[STAThread]

int main()
{
	readRestaurantFromCSV(fname);
	ReadHistoryListCSV(fname2);
	// open form
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Final::MenuForm);
	return 0;
}