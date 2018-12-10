#include "crypter.h"

/* Crypter (version  0.0.1)
 * Copyright © 2018 Mihails Šilovs
 * License: MIT
 */

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	crypter::crypter form;
	Application::Run(%form);






}



			 

