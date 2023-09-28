#pragma once
#include "user.h"
#include "Item.h"
#include "PrintBillForm.h"
#include "MainForm.h"
#include "LogInForm.h"
#include "RegisterForm.h"

namespace BunTalkProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for ShoppingCart
	/// </summary>
	public ref class ShoppingCart : public System::Windows::Forms::Form
	{
		User^ currentUser;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ItemName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TotalPrice;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Remove;
	private: System::Windows::Forms::Button^ btnPrintBill;


		   List<Item^>^ selectedBreakfastItems;

	public:
		ShoppingCart(void)
		{

		}
		ShoppingCart(User^ user, List<Item^>^ selectedItems)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->currentUser = user;
			this->selectedBreakfastItems = selectedItems;

			PopulateShoppingCart(selectedItems);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ShoppingCart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ cartGridView;



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnPrintBill = (gcnew System::Windows::Forms::Button());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->cartGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ItemName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Remove = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnPrintBill);
			this->groupBox1->Controls->Add(this->lblName);
			this->groupBox1->Controls->Add(this->cartGridView);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(75, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(689, 506);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Shopping Cart";
			// 
			// btnPrintBill
			// 
			this->btnPrintBill->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrintBill->Location = System::Drawing::Point(539, 449);
			this->btnPrintBill->Name = L"btnPrintBill";
			this->btnPrintBill->Size = System::Drawing::Size(94, 30);
			this->btnPrintBill->TabIndex = 2;
			this->btnPrintBill->Text = L"Print Bill";
			this->btnPrintBill->UseVisualStyleBackColor = true;
			this->btnPrintBill->Click += gcnew System::EventHandler(this, &ShoppingCart::btnPrintBill_Click);
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(32, 28);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(0, 22);
			this->lblName->TabIndex = 1;
			// 
			// cartGridView
			// 
			this->cartGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->cartGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->cartGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ItemName,
					this->Price, this->Quantity, this->TotalPrice, this->Remove
			});
			this->cartGridView->Location = System::Drawing::Point(36, 70);
			this->cartGridView->Name = L"cartGridView";
			this->cartGridView->Size = System::Drawing::Size(597, 357);
			this->cartGridView->TabIndex = 0;
			this->cartGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ShoppingCart::cartGridView_CellContentClick);
			// 
			// ItemName
			// 
			this->ItemName->HeaderText = L"Item";
			this->ItemName->Name = L"ItemName";
			this->ItemName->Width = 200;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->Name = L"Price";
			// 
			// Quantity
			// 
			this->Quantity->DataPropertyName = L"quantity";
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->Name = L"Quantity";
			// 
			// TotalPrice
			// 
			this->TotalPrice->HeaderText = L"Total Amount";
			this->TotalPrice->Name = L"TotalPrice";
			// 
			// Remove
			// 
			this->Remove->DataPropertyName = L"Remove";
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Red;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Remove->DefaultCellStyle = dataGridViewCellStyle1;
			this->Remove->HeaderText = L"";
			this->Remove->Name = L"Remove";
			this->Remove->Text = L"Remove item";
			this->Remove->ToolTipText = L"Remove";
			this->Remove->UseColumnTextForButtonValue = true;
			this->Remove->Width = 150;
			// 
			// ShoppingCart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 585);
			this->Controls->Add(this->groupBox1);
			this->Name = L"ShoppingCart";
			this->Text = L"ShoppingCart";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void PopulateShoppingCart(List<Item^>^ selectedItems)
		{
			// Display user information
			lblName->Text = "User: " + currentUser->UserName + " Address" + currentUser->Address;

			DataGridViewRow^ row = gcnew DataGridViewRow();

			for each (Item ^ breakfastItem in selectedBreakfastItems)
			{

				DataGridViewTextBoxCell^ itemNameCell = gcnew DataGridViewTextBoxCell();
				DataGridViewTextBoxCell^ priceCell = gcnew DataGridViewTextBoxCell();
				DataGridViewTextBoxCell^ quantityColumn = gcnew DataGridViewTextBoxCell();

				// Set the values of the cells
				itemNameCell->Value = breakfastItem->ItemName;
				priceCell->Value = breakfastItem->Price;

				// Add cells to the row
				row->Cells->Add(itemNameCell);
				row->Cells->Add(priceCell);

				// Add the row to the DataGridView
				cartGridView->Rows->Add(row);
			}



		}

	private: System::Void cartGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			if (e->ColumnIndex == cartGridView->Columns["Remove"]->Index && e->RowIndex >= 0) {
				// A "Remove" button was clicked in a valid row
				DataGridViewRow^ selectedRow = cartGridView->Rows[e->RowIndex];

				// Retrieve the item you want to remove (assuming you have stored the items)
				Item^ itemToRemove = dynamic_cast<Item^>(selectedRow->DataBoundItem);

				if (itemToRemove != nullptr) {
					selectedBreakfastItems->Remove(itemToRemove);

					cartGridView->DataSource = nullptr;
					cartGridView->DataSource = selectedBreakfastItems;

					cartGridView->Refresh();
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, DataGridViewCellEventArgs^ e) {
		try {
			// Check if the cell that changed is in the "Quantity" column
			if (e->ColumnIndex == cartGridView->Columns["Quantity"]->Index && e->RowIndex >= 0) {
				DataGridViewRow^ selectedRow = cartGridView->Rows[e->RowIndex];

				// Retrieve the item and quantity from the selected row
				Item^ selectedItem = dynamic_cast<Item^>(selectedRow->DataBoundItem);
				int newQuantity = System::Convert::ToInt32(selectedRow->Cells["Quantity"]->Value);

				// Update the calculations based on the new quantity
				double totalPrice = selectedItem->Price * newQuantity;

				// Update the "Total Price" column in the same row
				selectedRow->Cells["TotalPrice"]->Value = totalPrice;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void btnPrintBill_Click(System::Object^ sender, System::EventArgs^ e) {

		/*BunTalkProject::PrintBillForm^ printBill = gcnew BunTalkProject::PrintBillForm(currentUser, selectedBreakfastItems);
		printBill->ShowDialog();*/

		
	}
	};
}
