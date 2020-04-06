#include "pch.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Lab2;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab2::MyForm form;
	Application::Run(% form);
	return 0;
}
