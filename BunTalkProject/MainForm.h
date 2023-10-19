#pragma once
#include "user.h"
#include "Item.h"
#include "InstructionForm.h"
#include<List>
#include "LogInForm.h"
#include "RegisterForm.h"
#include "ShoppingCart.h"
#include "ShoppingCart.h"


namespace BunTalkProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;
	using namespace System::IO;


	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{





	private: List<Item^>^ selectedBreakfastItems = gcnew List<Item^>();

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ItemName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Select;





		   User^ user;

	public:
		MainForm(void)
		{
			InitializeComponent();
			
		}
		MainForm(User^ user)
		{
			InitializeComponent();

			this->user = user;

			lblUserInfo->Text = "Welcome " + user->UserName;
		}
		MainForm(List<Item^>^ selectedItemsList)
		{
			InitializeComponent();
			selectedBreakfastItems = gcnew List<Item^>();
			
		}

		MainForm(User^ user, List<Item^>^ selectedItemsList)
		{
			InitializeComponent();

			this->user = user;

			selectedItemsList = gcnew List<Item^>();

			lblUserInfo->Text = "Welcome " + user->UserName;

			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblUserInfo;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ lblBrekfastMenu;
	private: System::Windows::Forms::Label^ lblHelp;
	private: System::Windows::Forms::Label^ lblBevarages;



	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Button^ btnCheckOutCart;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblUserInfo = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblHelp = (gcnew System::Windows::Forms::Label());
			this->lblBevarages = (gcnew System::Windows::Forms::Label());
			this->lblBrekfastMenu = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnCheckOutCart = (gcnew System::Windows::Forms::Button());
			this->ItemName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Select = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(392, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome To Bun Talk";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblUserInfo
			// 
			this->lblUserInfo->AutoSize = true;
			this->lblUserInfo->BackColor = System::Drawing::Color::Transparent;
			this->lblUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserInfo->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->lblUserInfo->Location = System::Drawing::Point(27, 76);
			this->lblUserInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblUserInfo->Name = L"lblUserInfo";
			this->lblUserInfo->Size = System::Drawing::Size(12, 26);
			this->lblUserInfo->TabIndex = 1;
			this->lblUserInfo->Text = L"\r\n";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->lblHelp, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->lblBevarages, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->lblBrekfastMenu, 0, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tableLayoutPanel1->Location = System::Drawing::Point(1, 139);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(161, 546);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// lblHelp
			// 
			this->lblHelp->AutoSize = true;
			this->lblHelp->BackColor = System::Drawing::Color::Transparent;
			this->lblHelp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblHelp->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHelp->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->lblHelp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblHelp.Image")));
			this->lblHelp->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblHelp->Location = System::Drawing::Point(4, 364);
			this->lblHelp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblHelp->Name = L"lblHelp";
			this->lblHelp->Size = System::Drawing::Size(153, 182);
			this->lblHelp->TabIndex = 2;
			this->lblHelp->Text = L"Help";
			this->lblHelp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblHelp->Click += gcnew System::EventHandler(this, &MainForm::lblHelp_Click);
			// 
			// lblBevarages
			// 
			this->lblBevarages->AutoSize = true;
			this->lblBevarages->BackColor = System::Drawing::Color::Transparent;
			this->lblBevarages->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBevarages->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBevarages->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->lblBevarages->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblBevarages.Image")));
			this->lblBevarages->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblBevarages->Location = System::Drawing::Point(4, 182);
			this->lblBevarages->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblBevarages->Name = L"lblBevarages";
			this->lblBevarages->Size = System::Drawing::Size(153, 182);
			this->lblBevarages->TabIndex = 1;
			this->lblBevarages->Text = L"Beverages";
			this->lblBevarages->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblBevarages->Click += gcnew System::EventHandler(this, &MainForm::lblBevarages_Click);
			// 
			// lblBrekfastMenu
			// 
			this->lblBrekfastMenu->AutoSize = true;
			this->lblBrekfastMenu->BackColor = System::Drawing::Color::Transparent;
			this->lblBrekfastMenu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblBrekfastMenu->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBrekfastMenu->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->lblBrekfastMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblBrekfastMenu.Image")));
			this->lblBrekfastMenu->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblBrekfastMenu->Location = System::Drawing::Point(4, 0);
			this->lblBrekfastMenu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblBrekfastMenu->Name = L"lblBrekfastMenu";
			this->lblBrekfastMenu->Size = System::Drawing::Size(153, 182);
			this->lblBrekfastMenu->TabIndex = 0;
			this->lblBrekfastMenu->Text = L"Breakfast Menu";
			this->lblBrekfastMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblBrekfastMenu->Click += gcnew System::EventHandler(this, &MainForm::lblBrekfastMenu_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Menu;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ItemName,
					this->Description, this->Price, this->Select
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->Location = System::Drawing::Point(160, 139);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1045, 546);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			// 
			// btnCheckOutCart
			// 
			this->btnCheckOutCart->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnCheckOutCart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCheckOutCart.BackgroundImage")));
			this->btnCheckOutCart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCheckOutCart->Location = System::Drawing::Point(1240, 76);
			this->btnCheckOutCart->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCheckOutCart->Name = L"btnCheckOutCart";
			this->btnCheckOutCart->Size = System::Drawing::Size(49, 43);
			this->btnCheckOutCart->TabIndex = 4;
			this->btnCheckOutCart->UseVisualStyleBackColor = false;
			this->btnCheckOutCart->Click += gcnew System::EventHandler(this, &MainForm::btnCheckOutCart_Click);
			// 
			// ItemName
			// 
			this->ItemName->DataPropertyName = L"ItemName";
			this->ItemName->HeaderText = L"Item Name";
			this->ItemName->MinimumWidth = 6;
			this->ItemName->Name = L"ItemName";
			this->ItemName->Width = 125;
			// 
			// Description
			// 
			this->Description->DataPropertyName = L"Description";
			this->Description->HeaderText = L"Description";
			this->Description->MinimumWidth = 6;
			this->Description->Name = L"Description";
			this->Description->Width = 250;
			// 
			// Price
			// 
			this->Price->DataPropertyName = L"Price";
			this->Price->HeaderText = L"Price";
			this->Price->MinimumWidth = 6;
			this->Price->Name = L"Price";
			this->Price->Width = 125;
			// 
			// Select
			// 
			this->Select->HeaderText = L"Select";
			this->Select->MinimumWidth = 6;
			this->Select->Name = L"Select";
			this->Select->Width = 125;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1353, 713);
			this->Controls->Add(this->btnCheckOutCart);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lblUserInfo);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MinimumSize = System::Drawing::Size(1194, 750);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void lblHelp_Click(System::Object^ sender, System::EventArgs^ e) {

			BunTalkProject::InstructionForm^ instructForm =gcnew InstructionForm() ;
			instructForm->ShowDialog();
}
	private: System::Void lblBrekfastMenu_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=BunTalkDB;Integrated Security=True";
		SqlConnection sqlConn(connectionString);
		sqlConn.Open();

		try {
			
			String^ sqlQuery = "SELECT ItemName, Description, Price FROM BakeryItems WHERE ItemType='Food'";
			SqlCommand cmd(sqlQuery , % sqlConn);
			SqlDataReader^ reader = cmd.ExecuteReader();

			while (reader->Read()) {
				// Retrieve data from the reader
				String^ itemName = reader["ItemName"]->ToString();
				String^ description = reader["Description"]->ToString();
				Decimal price = Decimal::Parse(reader["Price"]->ToString()); // Convert to Decimal as needed


				// Add data to the DataGridView
				DataGridViewRow^ row = gcnew DataGridViewRow();
				row->CreateCells(dataGridView1);
				row->SetValues(itemName, description, price);
				dataGridView1->Rows->Add(row);
				
			}
		}
		catch (Exception^ ex) {
			// Handle exceptions here, e.g., show an error message
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			sqlConn.Close(); // Close the database connection
		}
	}
	
	private: System::Void lblBevarages_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=BunTalkDB;Integrated Security=True";
		SqlConnection sqlConn(connectionString);
		sqlConn.Open();

	try {

			String^ sqlQuery = "SELECT ItemName, Description, Price FROM BakeryItems WHERE ItemType='Beverage'";
			SqlCommand cmd(sqlQuery, % sqlConn);
			SqlDataReader^ reader = cmd.ExecuteReader();

			// Clear existing data in the DataGridView
			dataGridView1->Rows->Clear();

		while (reader->Read()) {
			// Retrieve data from the reader
			String^ itemName = reader["ItemName"]->ToString();
			String^ description = reader["Description"]->ToString();
			Decimal price = Decimal::Parse(reader["Price"]->ToString()); // Convert to Decimal as needed


			// Add data to the DataGridView
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView1);
			row->SetValues(itemName, description, price);
			dataGridView1->Rows->Add(row);
			
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally
	{
		sqlConn.Close(); // Close the database connection
	}
}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		try {
			if (e->ColumnIndex == dataGridView1->Columns["Select"]->Index && e->RowIndex >= 0) {

				DataGridViewCheckBoxCell^ checkboxCell = dynamic_cast<DataGridViewCheckBoxCell^>(dataGridView1["Select", e->RowIndex]);
				if (checkboxCell != nullptr && checkboxCell->Selected) {

					DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

					// Retrieve the values of the selected item's name, description, and price
					String^ itemName = selectedRow->Cells["ItemName"]->Value->ToString();
					String^ description = selectedRow->Cells["Description"]->Value->ToString();
					double price = System::Convert::ToDouble(selectedRow->Cells["Price"]->Value);


					Item^ selectedItem = gcnew Item();
					selectedItem->ItemName = itemName;
					selectedItem->Description = description;
					selectedItem->Price = price;


					selectedBreakfastItems->Add(selectedItem);
					//HandleCheckout(selectedBreakfastItems);

					dataGridView1->Refresh();


					MessageBox::Show("Item added to cart: " + itemName, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	private: System::Void btnCheckOutCart_Click(System::Object^ sender, System::EventArgs^ e) {

	if (selectedBreakfastItems != nullptr && selectedBreakfastItems->Count > 0)
	{
		BunTalkProject::ShoppingCart^ shoppingCart = gcnew ShoppingCart(user, selectedBreakfastItems);
		shoppingCart->ShowDialog();
    }
    else 
	{
        MessageBox::Show("Your cart is empty. Please select items to add to the cart first.", "Empty Cart", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
}
		  
};
}
