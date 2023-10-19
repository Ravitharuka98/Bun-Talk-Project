#pragma once

namespace BunTalkProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BillForm
	/// </summary>
	public ref class BillForm : public System::Windows::Forms::Form
	{
	public:
		BillForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BillForm(double totalSum) 
		{
			totalSum = totalSum;
			lblTotalAmount->Text = totalSum.ToString();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BillForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	public: System::Windows::Forms::Label^ lblCusName;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ lblCusAddress;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::DataGridView^ billGridView;

	public: System::Windows::Forms::DataGridViewTextBoxColumn^ ItemName;
	public: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	public: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	public: System::Windows::Forms::DataGridViewTextBoxColumn^ TotalPrice;
	public: System::Windows::Forms::Label^ lblTotalAmount;
	private: System::Windows::Forms::Button^ btnDownload;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog;
	private: System::Drawing::Printing::PrintDocument^ printDocument;


	public:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BillForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblCusName = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblCusAddress = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->billGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ItemName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblTotalAmount = (gcnew System::Windows::Forms::Label());
			this->btnDownload = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->printPreviewDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->billGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 105);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Customer Name";
			// 
			// lblCusName
			// 
			this->lblCusName->AutoSize = true;
			this->lblCusName->BackColor = System::Drawing::Color::Transparent;
			this->lblCusName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCusName->Location = System::Drawing::Point(180, 105);
			this->lblCusName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCusName->Name = L"lblCusName";
			this->lblCusName->Size = System::Drawing::Size(50, 19);
			this->lblCusName->TabIndex = 1;
			this->lblCusName->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(139, 11);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(260, 56);
			this->label3->TabIndex = 2;
			this->label3->Text = L"BUN TALK ";
			// 
			// lblCusAddress
			// 
			this->lblCusAddress->AutoSize = true;
			this->lblCusAddress->BackColor = System::Drawing::Color::Transparent;
			this->lblCusAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCusAddress->Location = System::Drawing::Point(180, 143);
			this->lblCusAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCusAddress->Name = L"lblCusAddress";
			this->lblCusAddress->Size = System::Drawing::Size(50, 19);
			this->lblCusAddress->TabIndex = 4;
			this->lblCusAddress->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(29, 143);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 19);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Address";
			// 
			// billGridView
			// 
			this->billGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->billGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->billGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ItemName,
					this->Price, this->Quantity, this->TotalPrice
			});
			this->billGridView->GridColor = System::Drawing::Color::LightGray;
			this->billGridView->Location = System::Drawing::Point(16, 201);
			this->billGridView->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->billGridView->Name = L"billGridView";
			this->billGridView->RowHeadersWidth = 51;
			this->billGridView->Size = System::Drawing::Size(524, 465);
			this->billGridView->TabIndex = 5;
			// 
			// ItemName
			// 
			this->ItemName->HeaderText = L"Item";
			this->ItemName->MinimumWidth = 6;
			this->ItemName->Name = L"ItemName";
			this->ItemName->Width = 125;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->MinimumWidth = 6;
			this->Price->Name = L"Price";
			this->Price->Width = 125;
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->MinimumWidth = 6;
			this->Quantity->Name = L"Quantity";
			this->Quantity->Width = 50;
			// 
			// TotalPrice
			// 
			this->TotalPrice->HeaderText = L"Total Price";
			this->TotalPrice->MinimumWidth = 6;
			this->TotalPrice->Name = L"TotalPrice";
			this->TotalPrice->Width = 125;
			// 
			// lblTotalAmount
			// 
			this->lblTotalAmount->AutoSize = true;
			this->lblTotalAmount->BackColor = System::Drawing::Color::Transparent;
			this->lblTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalAmount->Location = System::Drawing::Point(312, 718);
			this->lblTotalAmount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTotalAmount->Name = L"lblTotalAmount";
			this->lblTotalAmount->Size = System::Drawing::Size(73, 27);
			this->lblTotalAmount->TabIndex = 6;
			this->lblTotalAmount->Text = L"label2";
			// 
			// btnDownload
			// 
			this->btnDownload->Location = System::Drawing::Point(16, 705);
			this->btnDownload->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDownload->Name = L"btnDownload";
			this->btnDownload->Size = System::Drawing::Size(101, 55);
			this->btnDownload->TabIndex = 7;
			this->btnDownload->Text = L"Download Bill";
			this->btnDownload->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(395, 34);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 32);
			this->label2->TabIndex = 8;
			this->label2->Text = L"e-bill";
			// 
			// printPreviewDialog
			// 
			this->printPreviewDialog->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog->Enabled = true;
			this->printPreviewDialog->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog.Icon")));
			this->printPreviewDialog->Name = L"printPreviewDialog";
			this->printPreviewDialog->Visible = false;
			this->printPreviewDialog->Load += gcnew System::EventHandler(this, &BillForm::printPreviewDialog1_Load);
			// 
			// printDocument
			// 
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &BillForm::printDocument_PrintPage);
			// 
			// BillForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(604, 811);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnDownload);
			this->Controls->Add(this->lblTotalAmount);
			this->Controls->Add(this->billGridView);
			this->Controls->Add(this->lblCusAddress);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblCusName);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"BillForm";
			this->Text = L"BillForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->billGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void printPreviewDialog1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void printDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
}
};
}
