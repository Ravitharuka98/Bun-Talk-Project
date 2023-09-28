#pragma once
#include "User.h"

namespace BunTalkProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LogInForm
	/// </summary>
	public ref class LogInForm : public System::Windows::Forms::Form
	{
	public:
		
		LogInForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogInForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::TextBox^ txtUserName;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnCancle;
	private: System::Windows::Forms::Button^ btnLogIn;
	private: System::Windows::Forms::LinkLabel^ linkCreateAcc;
	private: System::Windows::Forms::LinkLabel^ LinkAdmin;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogInForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->LinkAdmin = (gcnew System::Windows::Forms::LinkLabel());
			this->linkCreateAcc = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnCancle = (gcnew System::Windows::Forms::Button());
			this->btnLogIn = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(166, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(481, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"\"Start Your Day with a Sweet Sunrise ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(337, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(394, 35);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Breakfast Bliss with Bun Talk\"";
			this->label2->Click += gcnew System::EventHandler(this, &LogInForm::label2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->LinkAdmin);
			this->groupBox1->Controls->Add(this->linkCreateAcc);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->btnCancle);
			this->groupBox1->Controls->Add(this->btnLogIn);
			this->groupBox1->Controls->Add(this->txtPassword);
			this->groupBox1->Controls->Add(this->txtUserName);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(181, 153);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(480, 299);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Log In";
			// 
			// LinkAdmin
			// 
			this->LinkAdmin->AutoSize = true;
			this->LinkAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LinkAdmin->LinkColor = System::Drawing::Color::Teal;
			this->LinkAdmin->Location = System::Drawing::Point(252, 245);
			this->LinkAdmin->Name = L"LinkAdmin";
			this->LinkAdmin->Size = System::Drawing::Size(118, 19);
			this->LinkAdmin->TabIndex = 8;
			this->LinkAdmin->TabStop = true;
			this->LinkAdmin->Text = L"Log In As Admin";
			this->LinkAdmin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LogInForm::LinkAdmin_LinkClicked);
			// 
			// linkCreateAcc
			// 
			this->linkCreateAcc->AutoSize = true;
			this->linkCreateAcc->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkCreateAcc->Location = System::Drawing::Point(251, 211);
			this->linkCreateAcc->Name = L"linkCreateAcc";
			this->linkCreateAcc->Size = System::Drawing::Size(116, 19);
			this->linkCreateAcc->TabIndex = 7;
			this->linkCreateAcc->TabStop = true;
			this->linkCreateAcc->Text = L"Create Account";
			this->linkCreateAcc->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LogInForm::linkCreateAcc_LinkClicked);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Are you a New User\?";
			// 
			// btnCancle
			// 
			this->btnCancle->ForeColor = System::Drawing::Color::IndianRed;
			this->btnCancle->Location = System::Drawing::Point(292, 136);
			this->btnCancle->Name = L"btnCancle";
			this->btnCancle->Size = System::Drawing::Size(75, 23);
			this->btnCancle->TabIndex = 5;
			this->btnCancle->Text = L"Cancle";
			this->btnCancle->UseVisualStyleBackColor = true;
			this->btnCancle->Click += gcnew System::EventHandler(this, &LogInForm::btnCancle_Click);
			// 
			// btnLogIn
			// 
			this->btnLogIn->Location = System::Drawing::Point(211, 136);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(75, 23);
			this->btnLogIn->TabIndex = 4;
			this->btnLogIn->Text = L"Log In";
			this->btnLogIn->UseVisualStyleBackColor = true;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &LogInForm::btnLogIn_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(121, 90);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(246, 24);
			this->txtPassword->TabIndex = 3;
			// 
			// txtUserName
			// 
			this->txtUserName->Location = System::Drawing::Point(121, 51);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(246, 24);
			this->txtUserName->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"User Name";
			// 
			// LogInForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 581);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(900, 620);
			this->Name = L"LogInForm";
			this->Text = L"c";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}


	public: User^ user = nullptr;

	private: System::Void btnLogIn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ UserName = this->txtUserName->Text;
		String^ Password = this->txtPassword->Text;

		if (UserName->Length == 0 || Password->Length == 0) {
			MessageBox::Show("Please enter a valid user name and password", "Error", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=BunTalkDB;Integrated Security=True";
			SqlConnection sqlConn(connectionString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM Users WHERE UserName= @UserName AND Password= @Password";
			SqlCommand cmd(sqlQuery, % sqlConn);
			cmd.Parameters->AddWithValue("@UserName", UserName);
			cmd.Parameters->AddWithValue("@Password", Password);

			SqlDataReader^ reader = cmd.ExecuteReader();
			if (reader->Read()) {

				user = gcnew User;
				user->Userid = reader->GetInt32(0);
				user->UserName = reader->GetString(1);
				user->Address = reader->GetString(2);
				user->Email = reader->GetString(3);
				user->Password = reader->GetString(4);

				this->Close();
			}
			else {
				MessageBox::Show("You have entered invalid credentials", "Error", MessageBoxButtons::OK);
				return;
			}

		}
		catch (Exception^ e)
		{
			MessageBox::Show("Unable to connect to database", "Error", MessageBoxButtons::OK);
			return;
		}
	}
	
	public: bool switchToRegister = false;
	private: System::Void linkCreateAcc_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		this->switchToRegister = true;
		this->Close();
	}

	public: bool switchToAdmin = false;
	private: System::Void LinkAdmin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToAdmin = true;
		this->Close();
	};
	};

}