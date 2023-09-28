#pragma once
#include"User.h"

namespace BunTalkProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtUserName;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPassword;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::TextBox^ txtAddress;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::LinkLabel^ linkLogIn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLogIn = (gcnew System::Windows::Forms::LinkLabel());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->linkLogIn);
			this->groupBox1->Controls->Add(this->btnRegister);
			this->groupBox1->Controls->Add(this->txtPassword);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txtEmail);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->txtAddress);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtUserName);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Linen;
			this->groupBox1->Location = System::Drawing::Point(230, 121);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(467, 388);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Register Form";
			// 
			// linkLogIn
			// 
			this->linkLogIn->AutoSize = true;
			this->linkLogIn->Location = System::Drawing::Point(303, 257);
			this->linkLogIn->Name = L"linkLogIn";
			this->linkLogIn->Size = System::Drawing::Size(56, 19);
			this->linkLogIn->TabIndex = 11;
			this->linkLogIn->TabStop = true;
			this->linkLogIn->Text = L"Log In";
			this->linkLogIn->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::linkLogIn_LinkClicked);
			// 
			// btnRegister
			// 
			this->btnRegister->ForeColor = System::Drawing::Color::DimGray;
			this->btnRegister->Location = System::Drawing::Point(199, 252);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(89, 29);
			this->btnRegister->TabIndex = 10;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &RegisterForm::btnRegister_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(164, 209);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(198, 27);
			this->txtPassword->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(46, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 19);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Password";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(164, 166);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(198, 27);
			this->txtEmail->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 19);
			this->label4->TabIndex = 6;
			this->label4->Text = L"email";
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(164, 128);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(198, 27);
			this->txtAddress->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Address";
			// 
			// txtUserName
			// 
			this->txtUserName->Location = System::Drawing::Point(164, 89);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(198, 27);
			this->txtUserName->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Full Name";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 581);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->MinimumSize = System::Drawing::Size(900, 620);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   public:User^ user = nullptr;

private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ UserName = txtUserName->Text;
	String^ Address = txtAddress->Text;
	String^ Email = txtEmail->Text;
	String^ Password = txtPassword->Text;

	if (UserName->Length==0|| Address->Length == 0 ||  Email->Length == 0 || Password->Length == 0) {
		MessageBox::Show("Please fill all the input fields", "one or more empty fields", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=BunTalkDB;Integrated Security=True";
		SqlConnection sqlConn(connectionString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO users(UserName,Address,Email,Password) VALUES " +
			"(@UserName,@Address,@Email,@Password)";

		SqlCommand cmd(sqlQuery, % sqlConn);
		cmd.Parameters->AddWithValue("@UserName", UserName);
		cmd.Parameters->AddWithValue("@Address", Address);
		cmd.Parameters->AddWithValue("@Email", Email);
		cmd.Parameters->AddWithValue("@Password", Password);

		cmd.ExecuteNonQuery();

		user = gcnew User;
		user->UserName = UserName;
		user->Address = Address;
		user->Email = Email;
		user->Password = Password;

		MessageBox::Show("Registration successfull.", "Registation successfull", MessageBoxButtons::OK);

		this->Close();

	}
	catch(Exception^ e){
		MessageBox::Show("Failed to Register new user.", "Registation failed", MessageBoxButtons::OK);
	}

}
	   public: bool switchToLogin = false;
private: System::Void linkLogIn_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->switchToLogin = true;
	this->Close();
}
};
}
