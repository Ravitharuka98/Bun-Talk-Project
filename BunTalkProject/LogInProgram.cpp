#include "LogInForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
#include "AdminForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true)
	{
		BunTalkProject::LogInForm logInForm;
		logInForm.ShowDialog();

		if (logInForm.switchToRegister) {
			BunTalkProject::RegisterForm regForm;
			regForm.ShowDialog();

		}
		else if (logInForm.switchToAdmin) {
			BunTalkProject::AdminForm adminForm;
			adminForm.ShowDialog();
		}
		else
		{
			user = logInForm.user;
			break;
		}
		
	}

	if (user != nullptr) {
		BunTalkProject::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else
	{
		MessageBox::Show("Authentication Canceled " + user->UserName
			, "Log In Error", MessageBoxButtons::OK);
	}
	

	
	
}