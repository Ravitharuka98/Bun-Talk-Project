#pragma once


namespace BunTalkProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for AdminDashBoardForm
	/// </summary>

	public ref class AdminDashBoardForm : public System::Windows::Forms::Form
	{
	public:
		AdminDashBoardForm(void)
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
		~AdminDashBoardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPrice;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtItemName;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::RichTextBox^ txtDescription;

	private: System::Windows::Forms::Button^ btnInsert;


	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;



	private: System::Windows::Forms::ComboBox^ comboFoodType;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btbEdit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ItemName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ItemType;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashBoardForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btbEdit = (gcnew System::Windows::Forms::Button());
			this->comboFoodType = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->txtDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtItemName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ItemName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ItemType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->btnDelete);
			this->groupBox1->Controls->Add(this->btbEdit);
			this->groupBox1->Controls->Add(this->comboFoodType);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->btnInsert);
			this->groupBox1->Controls->Add(this->txtDescription);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtPrice);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtItemName);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(278, 399);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Food Items";
			// 
			// btnDelete
			// 
			this->btnDelete->ForeColor = System::Drawing::Color::Red;
			this->btnDelete->Location = System::Drawing::Point(182, 324);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 30);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &AdminDashBoardForm::btnDelete_Click);
			// 
			// btbEdit
			// 
			this->btbEdit->Location = System::Drawing::Point(101, 324);
			this->btbEdit->Name = L"btbEdit";
			this->btbEdit->Size = System::Drawing::Size(75, 30);
			this->btbEdit->TabIndex = 13;
			this->btbEdit->Text = L"Edit";
			this->btbEdit->UseVisualStyleBackColor = true;
			this->btbEdit->Click += gcnew System::EventHandler(this, &AdminDashBoardForm::btbEdit_Click);
			// 
			// comboFoodType
			// 
			this->comboFoodType->FormattingEnabled = true;
			this->comboFoodType->Location = System::Drawing::Point(114, 248);
			this->comboFoodType->Name = L"comboFoodType";
			this->comboFoodType->Size = System::Drawing::Size(139, 27);
			this->comboFoodType->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 19);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Item Type";
			// 
			// btnInsert
			// 
			this->btnInsert->ForeColor = System::Drawing::Color::Green;
			this->btnInsert->Location = System::Drawing::Point(20, 324);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(75, 30);
			this->btnInsert->TabIndex = 8;
			this->btnInsert->Text = L"Insert Data";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &AdminDashBoardForm::btnInsert_Click);
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(114, 92);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(142, 79);
			this->txtDescription->TabIndex = 5;
			this->txtDescription->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Description";
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(114, 198);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(142, 24);
			this->txtPrice->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 205);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Price";
			// 
			// txtItemName
			// 
			this->txtItemName->Location = System::Drawing::Point(114, 47);
			this->txtItemName->Name = L"txtItemName";
			this->txtItemName->Size = System::Drawing::Size(142, 24);
			this->txtItemName->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Item Name";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ItemName,
					this->Description, this->Price, this->ItemType
			});
			this->dataGridView1->Location = System::Drawing::Point(296, 84);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(581, 403);
			this->dataGridView1->TabIndex = 1;
			// 
			// ItemName
			// 
			this->ItemName->DataPropertyName = L"ItemName";
			this->ItemName->HeaderText = L"Item Name";
			this->ItemName->Name = L"ItemName";
			// 
			// Description
			// 
			this->Description->DataPropertyName = L"Description";
			this->Description->HeaderText = L"Description";
			this->Description->Name = L"Description";
			this->Description->Width = 300;
			// 
			// Price
			// 
			this->Price->DataPropertyName = L"Price";
			this->Price->HeaderText = L"Price";
			this->Price->Name = L"Price";
			// 
			// ItemType
			// 
			this->ItemType->DataPropertyName = L"ItemType";
			this->ItemType->HeaderText = L"Item Type";
			this->ItemType->Name = L"ItemType";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// AdminDashBoardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 581);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->MinimumSize = System::Drawing::Size(900, 620);
			this->Name = L"AdminDashBoardForm";
			this->Text = L"AdminDashBoardForm";
			this->Load += gcnew System::EventHandler(this, &AdminDashBoardForm::AdminDashBoardForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

	private: System::Void AdminDashBoardForm_Load(System::Object^ sender, System::EventArgs^ e) {

		comboFoodType->Items->Add("Food");
		comboFoodType->Items->Add("Beverage");

		try {
			String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=BunTalkDB;Integrated Security=True";
			SqlConnection sqlConn(connectionString);
			sqlConn.Open();

			// Prepare SQL SELECT query to retrieve all items
			String^ sqlQuery = "SELECT ItemName, Description, Price, ItemType FROM bakeryItems";
			SqlCommand cmd(sqlQuery, % sqlConn);

			SqlDataReader^ reader = cmd.ExecuteReader();

			while (reader->Read()) {
				// Retrieve data from the reader
				String^ itemName = reader["ItemName"]->ToString();
				String^ description = reader["Description"]->ToString();
				Decimal price = Decimal::Parse(reader["Price"]->ToString()); // Convert to Decimal as needed
				String^ foodType = reader["ItemType"]->ToString();

				// Add data to the DataGridView
				DataGridViewRow^ row = gcnew DataGridViewRow();
				row->CreateCells(dataGridView1);
				row->SetValues(itemName, description, price,foodType);
				dataGridView1->Rows->Add(row);
			}

			// Close the SqlDataReader and database connection
			reader->Close();
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while loading data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void btnInsert_Click(System::Object^ sender, System::EventArgs^ e) {


		try {
			String^ itemName = txtItemName->Text;
			String^ description = txtDescription->Text;
			double price = System::Convert::ToDouble(txtPrice->Text);
			String^ selectedFoodType = comboFoodType->Text;

			// Insert data into the database
			String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=BunTalkDB;Integrated Security=True";
			SqlConnection sqlConn(connectionString);
			sqlConn.Open();

			// Prepare SQL INSERT query
			String^ sqlQuery = "INSERT INTO bakeryItems (ItemName, Description, Price,ItemType) VALUES (@ItemName, @Description, @Price,@ItemType)";
			SqlCommand cmd(sqlQuery, % sqlConn);
			cmd.Parameters->AddWithValue("@ItemName", itemName);
			cmd.Parameters->AddWithValue("@Description", description);
			cmd.Parameters->AddWithValue("@Price", price);
			cmd.Parameters->AddWithValue("@ItemType", selectedFoodType);

			//SqlDataReader^ r = cmd.ExecuteReader();
			cmd.ExecuteNonQuery();



			// Close the database connection
			sqlConn.Close();

			// Optionally, display a success message
			MessageBox::Show("Item inserted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);


			//Clear text boxes
			txtItemName->Text = "";
			txtDescription->Text = "";
			txtPrice->Text = "";
			comboFoodType->Text = "";
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	private: System::Void btbEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			// Get the selected row
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

			// Retrieve the values from the selected row
			String^ itemName = selectedRow->Cells["ItemName"]->Value->ToString();
			String^ description = selectedRow->Cells["Description"]->Value->ToString();
			Decimal price = Decimal::Parse(selectedRow->Cells["Price"]->Value->ToString());
			String^ foodType = selectedRow->Cells["ItemType"]->Value->ToString();

			
			txtItemName->Text = itemName;
			txtDescription->Text = description;
			txtPrice->Text = price.ToString();
			comboFoodType->Text = foodType;

			UpdateItemInDatabase( itemName, description, price, foodType);

		}
		else {
			MessageBox::Show("Please select a row to edit.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
		   void UpdateItemInDatabase(String^ itemName, String^ description, Decimal price, String^ foodType) {
			   try {
				   String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=BunTalkDB;Integrated Security=True";
				   SqlConnection sqlConn(connectionString);
				   sqlConn.Open();

				   // Prepare SQL UPDATE query
				   String^ sqlQuery = "UPDATE bakeryItems SET ItemName = @ItemName, Description = @Description, Price = @Price, ItemType = @ItemType WHERE ItemID = @ItemID";
				   SqlCommand cmd(sqlQuery, % sqlConn);
				   //cmd.Parameters->AddWithValue("@ItemID", itemId);
				   cmd.Parameters->AddWithValue("@ItemName", itemName);
				   cmd.Parameters->AddWithValue("@Description", description);
				   cmd.Parameters->AddWithValue("@Price", price);
				   cmd.Parameters->AddWithValue("@ItemType", foodType);

				   cmd.ExecuteNonQuery();

				   // Close the database connection
				   sqlConn.Close();
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("An error occurred while updating the item in the database: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			// Confirm the deletion with a message box
			System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to proceed?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				// Get the selected row
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

				String^ itemName = selectedRow->Cells["ItemName"]->Value->ToString();


				// Delete the item from the DataGridView
				dataGridView1->Rows->Remove(selectedRow);

				// Delete the item from the database based on the unique identifier (itemID)
				DeleteItemFromDatabase(itemName);
			}
		}
		else {
			MessageBox::Show("Please select a row to delete.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
		   void DeleteItemFromDatabase(String^ itemName) {
			   try {
				   String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=BunTalkDB;Integrated Security=True";
				   SqlConnection sqlConn(connectionString);
				   sqlConn.Open();

				   // Prepare SQL DELETE query
				   String^ sqlQuery = "DELETE FROM bakeryItems WHERE ItemName = @ItemName";
				   SqlCommand cmd(sqlQuery, % sqlConn);
				   cmd.Parameters->AddWithValue("@ItemName", itemName);

				   cmd.ExecuteNonQuery();

				   // Close the database connection
				   sqlConn.Close();

				   MessageBox::Show("Item deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("An error occurred while deleting the item: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
};


}
