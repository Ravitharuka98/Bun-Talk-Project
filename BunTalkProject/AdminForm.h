#pragma once
#include "AdminDashBoardForm.h"

namespace BunTalkProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::TextBox^ txtAdminPassword;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtAdminUserName;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtAdminPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtAdminUserName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->btnLogin);
			this->groupBox1->Controls->Add(this->txtAdminPassword);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtAdminUserName);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Location = System::Drawing::Point(121, 105);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(479, 437);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Admin Log In";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 28);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(44, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::DarkGray;
			this->btnLogin->Location = System::Drawing::Point(232, 239);
			this->btnLogin->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(117, 39);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Log In";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &AdminForm::btnLogin_Click);
			// 
			// txtAdminPassword
			// 
			this->txtAdminPassword->Location = System::Drawing::Point(201, 178);
			this->txtAdminPassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtAdminPassword->Name = L"txtAdminPassword";
			this->txtAdminPassword->PasswordChar = '*';
			this->txtAdminPassword->Size = System::Drawing::Size(184, 32);
			this->txtAdminPassword->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 183);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// txtAdminUserName
			// 
			this->txtAdminUserName->Location = System::Drawing::Point(201, 127);
			this->txtAdminUserName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtAdminUserName->Name = L"txtAdminUserName";
			this->txtAdminUserName->Size = System::Drawing::Size(184, 32);
			this->txtAdminUserName->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 130);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Name";
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1179, 715);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ adminUsername = "admin";
		String^ adminPassword = "admin12345";

		String^ enteredUsername = txtAdminUserName->Text;
		String^ enteredPassword = txtAdminPassword->Text;

		if (enteredUsername == adminUsername && enteredPassword == adminPassword) {
			MessageBox::Show("Welcome...Successfully LogIn", "Log In", MessageBoxButtons::OK);

			
			BunTalkProject::AdminDashBoardForm adminDashboardForm;
			adminDashboardForm.ShowDialog();

			AdminForm^ adminform = gcnew AdminForm; 
			adminform->Close();
		}
		else {
			MessageBox::Show("You have entered invalid credentials", "Error", MessageBoxButtons::OK);
		}
	}
};
}
