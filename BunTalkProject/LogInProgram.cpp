#include "LogInForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
#include "AdminForm.h"
#include "ShoppingCart.h"
using namespace System::Collections::Generic;

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	/*List<Item^>^ selectedItems = gcnew List<Item^>();
	Item^ selectedItem = gcnew Item();
	selectedItem->ItemName = "Test item 1";
	selectedItem->Description = "test";
	selectedItem->Price = 100;
	selectedItems->Add(selectedItem);
	
	Item^ selectedItem2 = gcnew Item();
	selectedItem2->ItemName = "Test item 2";
	selectedItem2->Description = "test";
	selectedItem2->Price = 200;
	selectedItems->Add(selectedItem2);

	User^ usr = gcnew User();
	usr->UserName = "dummy user";
	usr->Address = String::Empty;

	auto x = gcnew BunTalkProject::ShoppingCart(usr, selectedItems);
	x->ShowDialog();*/

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