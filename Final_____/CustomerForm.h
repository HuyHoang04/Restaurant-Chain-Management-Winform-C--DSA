#pragma once
#include "Fuction.h"
#include "File.h"
namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ CusGirdView;

	private: System::Windows::Forms::TextBox^ DayBox;

	private: System::Windows::Forms::TextBox^ idtextbox;

	private: System::Windows::Forms::TextBox^ nametextbox;







	private: System::Windows::Forms::Button^ listbutton;



	private: System::Windows::Forms::Button^ clearbutton;
	private: System::Windows::Forms::Button^ donebutton;







	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ ResidBox;
	private: System::Windows::Forms::TextBox^ CusnumBox;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ MothBox;
	private: System::Windows::Forms::TextBox^ YearBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ phonetextbox;
	private: System::Windows::Forms::TextBox^ MothDel;
	private: System::Windows::Forms::TextBox^ YearDel;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ NumDel;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ ResDel;
	private: System::Windows::Forms::Button^ buttondone;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ DayDel;
	private: System::Windows::Forms::TextBox^ TableDel;

	private: System::Windows::Forms::TextBox^ PhoneDel;
	private: System::Windows::Forms::TextBox^ NameDel;
	private: System::Windows::Forms::Button^ ViewRes;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ finalbox;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ cupponbox;



















	protected:



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->finalbox = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->cupponbox = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ViewRes = (gcnew System::Windows::Forms::Button());
			this->MothBox = (gcnew System::Windows::Forms::TextBox());
			this->YearBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->CusnumBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ResidBox = (gcnew System::Windows::Forms::TextBox());
			this->donebutton = (gcnew System::Windows::Forms::Button());
			this->clearbutton = (gcnew System::Windows::Forms::Button());
			this->listbutton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CusGirdView = (gcnew System::Windows::Forms::DataGridView());
			this->DayBox = (gcnew System::Windows::Forms::TextBox());
			this->idtextbox = (gcnew System::Windows::Forms::TextBox());
			this->phonetextbox = (gcnew System::Windows::Forms::TextBox());
			this->nametextbox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->MothDel = (gcnew System::Windows::Forms::TextBox());
			this->YearDel = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->NumDel = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ResDel = (gcnew System::Windows::Forms::TextBox());
			this->buttondone = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->DayDel = (gcnew System::Windows::Forms::TextBox());
			this->TableDel = (gcnew System::Windows::Forms::TextBox());
			this->PhoneDel = (gcnew System::Windows::Forms::TextBox());
			this->NameDel = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CusGirdView))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1430, 738);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->finalbox);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->cupponbox);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->ViewRes);
			this->tabPage1->Controls->Add(this->MothBox);
			this->tabPage1->Controls->Add(this->YearBox);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->CusnumBox);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->ResidBox);
			this->tabPage1->Controls->Add(this->donebutton);
			this->tabPage1->Controls->Add(this->clearbutton);
			this->tabPage1->Controls->Add(this->listbutton);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->CusGirdView);
			this->tabPage1->Controls->Add(this->DayBox);
			this->tabPage1->Controls->Add(this->idtextbox);
			this->tabPage1->Controls->Add(this->phonetextbox);
			this->tabPage1->Controls->Add(this->nametextbox);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 37);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage1->Size = System::Drawing::Size(1422, 697);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Booking The Table ";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &CustomerForm::tabPage1_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(374, 431);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(142, 36);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Final Payment";
			// 
			// finalbox
			// 
			this->finalbox->Location = System::Drawing::Point(380, 472);
			this->finalbox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->finalbox->Multiline = true;
			this->finalbox->Name = L"finalbox";
			this->finalbox->Size = System::Drawing::Size(252, 62);
			this->finalbox->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(79, 456);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(67, 28);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Cuppon";
			// 
			// cupponbox
			// 
			this->cupponbox->FormattingEnabled = true;
			this->cupponbox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"KHAITRUONG", L"THANHLAP", L"KINIEM", L"TETDENXUANVE",
					L"MUAHEVUINHON"
			});
			this->cupponbox->Location = System::Drawing::Point(84, 487);
			this->cupponbox->Name = L"cupponbox";
			this->cupponbox->Size = System::Drawing::Size(246, 36);
			this->cupponbox->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Agency FB", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(205, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(389, 72);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Booking The Table";
			// 
			// ViewRes
			// 
			this->ViewRes->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewRes->Location = System::Drawing::Point(662, 159);
			this->ViewRes->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->ViewRes->Name = L"ViewRes";
			this->ViewRes->Size = System::Drawing::Size(127, 59);
			this->ViewRes->TabIndex = 18;
			this->ViewRes->Text = L"View All";
			this->ViewRes->UseVisualStyleBackColor = true;
			this->ViewRes->Click += gcnew System::EventHandler(this, &CustomerForm::ViewRes_Click);
			// 
			// MothBox
			// 
			this->MothBox->Location = System::Drawing::Point(156, 377);
			this->MothBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->MothBox->Multiline = true;
			this->MothBox->Name = L"MothBox";
			this->MothBox->Size = System::Drawing::Size(68, 33);
			this->MothBox->TabIndex = 17;
			this->MothBox->TextChanged += gcnew System::EventHandler(this, &CustomerForm::textBox2_TextChanged);
			// 
			// YearBox
			// 
			this->YearBox->Location = System::Drawing::Point(226, 377);
			this->YearBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->YearBox->Multiline = true;
			this->YearBox->Name = L"YearBox";
			this->YearBox->Size = System::Drawing::Size(104, 33);
			this->YearBox->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(380, 237);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(169, 28);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Number of Customer";
			// 
			// CusnumBox
			// 
			this->CusnumBox->Location = System::Drawing::Point(380, 270);
			this->CusnumBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->CusnumBox->Multiline = true;
			this->CusnumBox->Name = L"CusnumBox";
			this->CusnumBox->Size = System::Drawing::Size(258, 33);
			this->CusnumBox->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(380, 138);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 28);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Restaurant ID";
			// 
			// ResidBox
			// 
			this->ResidBox->Location = System::Drawing::Point(380, 171);
			this->ResidBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->ResidBox->Multiline = true;
			this->ResidBox->Name = L"ResidBox";
			this->ResidBox->Size = System::Drawing::Size(258, 33);
			this->ResidBox->TabIndex = 12;
			this->ResidBox->TextChanged += gcnew System::EventHandler(this, &CustomerForm::ResidBox_TextChanged);
			// 
			// donebutton
			// 
			this->donebutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->donebutton->Location = System::Drawing::Point(434, 571);
			this->donebutton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->donebutton->Name = L"donebutton";
			this->donebutton->Size = System::Drawing::Size(225, 57);
			this->donebutton->TabIndex = 11;
			this->donebutton->Text = L"Done ";
			this->donebutton->UseVisualStyleBackColor = true;
			this->donebutton->Click += gcnew System::EventHandler(this, &CustomerForm::donebutton_Click);
			// 
			// clearbutton
			// 
			this->clearbutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearbutton->Location = System::Drawing::Point(140, 571);
			this->clearbutton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->clearbutton->Name = L"clearbutton";
			this->clearbutton->Size = System::Drawing::Size(225, 57);
			this->clearbutton->TabIndex = 10;
			this->clearbutton->Text = L"Clear ";
			this->clearbutton->UseVisualStyleBackColor = true;
			this->clearbutton->Click += gcnew System::EventHandler(this, &CustomerForm::clearbutton_Click);
			// 
			// listbutton
			// 
			this->listbutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listbutton->Location = System::Drawing::Point(662, 365);
			this->listbutton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->listbutton->Name = L"listbutton";
			this->listbutton->Size = System::Drawing::Size(127, 59);
			this->listbutton->TabIndex = 9;
			this->listbutton->Text = L"View avalible";
			this->listbutton->UseVisualStyleBackColor = true;
			this->listbutton->Click += gcnew System::EventHandler(this, &CustomerForm::listbutton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(79, 344);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 28);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Booking Date ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(375, 344);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 28);
			this->label3->TabIndex = 7;
			this->label3->Text = L"ID Table ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(79, 237);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 28);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Phone Number ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(79, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 28);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Name ";
			// 
			// CusGirdView
			// 
			this->CusGirdView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CusGirdView->Location = System::Drawing::Point(875, 30);
			this->CusGirdView->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->CusGirdView->Name = L"CusGirdView";
			this->CusGirdView->RowHeadersWidth = 51;
			this->CusGirdView->RowTemplate->Height = 24;
			this->CusGirdView->Size = System::Drawing::Size(508, 624);
			this->CusGirdView->TabIndex = 4;
			this->CusGirdView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::CusGirdView_CellContentClick);
			// 
			// DayBox
			// 
			this->DayBox->Location = System::Drawing::Point(84, 377);
			this->DayBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->DayBox->Multiline = true;
			this->DayBox->Name = L"DayBox";
			this->DayBox->Size = System::Drawing::Size(69, 33);
			this->DayBox->TabIndex = 3;
			// 
			// idtextbox
			// 
			this->idtextbox->Location = System::Drawing::Point(380, 377);
			this->idtextbox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->idtextbox->Multiline = true;
			this->idtextbox->Name = L"idtextbox";
			this->idtextbox->Size = System::Drawing::Size(258, 33);
			this->idtextbox->TabIndex = 2;
			// 
			// phonetextbox
			// 
			this->phonetextbox->Location = System::Drawing::Point(82, 270);
			this->phonetextbox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->phonetextbox->Multiline = true;
			this->phonetextbox->Name = L"phonetextbox";
			this->phonetextbox->Size = System::Drawing::Size(248, 33);
			this->phonetextbox->TabIndex = 1;
			// 
			// nametextbox
			// 
			this->nametextbox->Location = System::Drawing::Point(82, 171);
			this->nametextbox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->nametextbox->Multiline = true;
			this->nametextbox->Name = L"nametextbox";
			this->nametextbox->Size = System::Drawing::Size(248, 33);
			this->nametextbox->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->MothDel);
			this->tabPage2->Controls->Add(this->YearDel);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->NumDel);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->ResDel);
			this->tabPage2->Controls->Add(this->buttondone);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->DayDel);
			this->tabPage2->Controls->Add(this->TableDel);
			this->tabPage2->Controls->Add(this->PhoneDel);
			this->tabPage2->Controls->Add(this->NameDel);
			this->tabPage2->Location = System::Drawing::Point(4, 37);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->tabPage2->Size = System::Drawing::Size(1422, 697);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Cancel The Table ";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Agency FB", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(507, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(367, 72);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Cancel The Table";
			// 
			// MothDel
			// 
			this->MothDel->Location = System::Drawing::Point(423, 448);
			this->MothDel->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->MothDel->Multiline = true;
			this->MothDel->Name = L"MothDel";
			this->MothDel->Size = System::Drawing::Size(76, 38);
			this->MothDel->TabIndex = 33;
			// 
			// YearDel
			// 
			this->YearDel->Location = System::Drawing::Point(505, 448);
			this->YearDel->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->YearDel->Multiline = true;
			this->YearDel->Name = L"YearDel";
			this->YearDel->Size = System::Drawing::Size(144, 38);
			this->YearDel->TabIndex = 32;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(730, 275);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(169, 28);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Number of Customer";
			// 
			// NumDel
			// 
			this->NumDel->Location = System::Drawing::Point(735, 323);
			this->NumDel->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->NumDel->Multiline = true;
			this->NumDel->Name = L"NumDel";
			this->NumDel->Size = System::Drawing::Size(304, 38);
			this->NumDel->TabIndex = 30;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(730, 160);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 28);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Restaurant ID";
			// 
			// ResDel
			// 
			this->ResDel->Location = System::Drawing::Point(735, 202);
			this->ResDel->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->ResDel->Multiline = true;
			this->ResDel->Name = L"ResDel";
			this->ResDel->Size = System::Drawing::Size(304, 38);
			this->ResDel->TabIndex = 28;
			// 
			// buttondone
			// 
			this->buttondone->Location = System::Drawing::Point(735, 530);
			this->buttondone->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->buttondone->Name = L"buttondone";
			this->buttondone->Size = System::Drawing::Size(304, 84);
			this->buttondone->TabIndex = 27;
			this->buttondone->Text = L"Done ";
			this->buttondone->UseVisualStyleBackColor = true;
			this->buttondone->Click += gcnew System::EventHandler(this, &CustomerForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(345, 530);
			this->button2->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(304, 84);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Clear ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CustomerForm::button2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(340, 404);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(115, 28);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Booking Date ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(730, 404);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 28);
			this->label12->TabIndex = 24;
			this->label12->Text = L"ID Table ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(342, 275);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(127, 28);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Phone Number ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(342, 169);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(59, 28);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Name ";
			// 
			// DayDel
			// 
			this->DayDel->Location = System::Drawing::Point(345, 448);
			this->DayDel->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->DayDel->Multiline = true;
			this->DayDel->Name = L"DayDel";
			this->DayDel->Size = System::Drawing::Size(72, 38);
			this->DayDel->TabIndex = 21;
			// 
			// TableDel
			// 
			this->TableDel->Location = System::Drawing::Point(735, 448);
			this->TableDel->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->TableDel->Multiline = true;
			this->TableDel->Name = L"TableDel";
			this->TableDel->Size = System::Drawing::Size(304, 38);
			this->TableDel->TabIndex = 20;
			// 
			// PhoneDel
			// 
			this->PhoneDel->Location = System::Drawing::Point(345, 323);
			this->PhoneDel->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->PhoneDel->Multiline = true;
			this->PhoneDel->Name = L"PhoneDel";
			this->PhoneDel->Size = System::Drawing::Size(304, 38);
			this->PhoneDel->TabIndex = 19;
			// 
			// NameDel
			// 
			this->NameDel->Location = System::Drawing::Point(345, 202);
			this->NameDel->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->NameDel->Multiline = true;
			this->NameDel->Name = L"NameDel";
			this->NameDel->Size = System::Drawing::Size(304, 38);
			this->NameDel->TabIndex = 18;
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1430, 734);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Agency FB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CusGirdView))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}



private: System::Void donebutton_Click(System::Object^ sender, System::EventArgs^ e) 
{

	string cusname = toStandardString(nametextbox->Text);
	string phonenumber = toStandardString(phonetextbox->Text);
	string Resid = toStandardString(ResidBox->Text);
	string Tableid = toStandardString(idtextbox->Text);
	int cusnum = stoi(toStandardString(CusnumBox->Text));
	int dayT = stoi(toStandardString(DayBox->Text));
	int mothT = stoi(toStandardString(MothBox->Text));
	int yearT = stoi(toStandardString(YearBox->Text));

	if (isValidDate(dayT, mothT, yearT) == false)
	{
		MessageBox::Show("Date not Valid");
		return;
	}

	StamentSetTable(Chain, History, TotalMoney, Resid,cusname, phonenumber, Tableid, cusnum, dayT, mothT, yearT);
	ResidBox->Clear();
	idtextbox->Clear();
	CusnumBox->Clear();
	DayBox->Clear();
	MothBox->Clear();
	YearBox->Clear();
	Addcuppon(cuppon);
	int* val = cuppon.get(toStandardString(cupponbox->Text));
	int a = cusnum * moneyperone - *val;
	string ab = to_string(a);
	finalbox->Text = gcnew String (ab.c_str());
	ToArrayHistory(History, HistoryArr);
	writeHistoryToCSV(fname2, HistoryArr);

}
private: System::Void ResidBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttondone_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	string cusname = toStandardString(NameDel->Text);
	string phonenumber = toStandardString(PhoneDel->Text);
	string Resid = toStandardString(ResDel->Text);
	string Tableid = toStandardString(TableDel->Text);
	int cusnum = stoi(toStandardString(NumDel->Text));
	int dayT = stoi(toStandardString(DayDel->Text));
	int mothT = stoi(toStandardString(MothDel->Text));
	int yearT = stoi(toStandardString(YearDel->Text));

	if (isValidDate(dayT, mothT, yearT) == false)
	{
		MessageBox::Show("Date not Valid");
		return;
	}

	StamentDeleteTable(Chain, History, TotalMoney, Resid, phonenumber, cusname, Tableid, cusnum, dayT, mothT, yearT);

	ResDel->Clear();
	TableDel->Clear();
	NumDel->Clear();
	DayDel->Clear();
	MothDel->Clear();
	YearDel->Clear();
	ToArrayHistory(History, HistoryArr);
	writeHistoryToCSV(fname2, HistoryArr);
}

private: System::Void ViewRes_Click(System::Object^ sender, System::EventArgs^ e) 
{
	CusGirdView->ClearSelection();

	CusGirdView->Columns->Add("id", "ID");
	CusGirdView->Columns->Add("type", "Type");
	CusGirdView->Columns->Add("Capacity", "Capacity");
	CusGirdView->Columns->Add("Quantity", "Quantity");

	CusGirdView->Columns[0]->Name = "id";
	CusGirdView->Columns[1]->Name = "type";
	CusGirdView->Columns[2]->Name = "Capacity";
	CusGirdView->Columns[3]->Name = "Quantity";

	ToArray(Chain, ChainArr);

	for (int i = 0; i <= 30; i++)
	{
		CusGirdView->Rows->Add();
		CusGirdView->Rows[i]->Cells[0]->Value = gcnew String(ChainArr[i].id.c_str());
		CusGirdView->Rows[i]->Cells[1]->Value = gcnew String(ChainArr[i].type.c_str());
		CusGirdView->Rows[i]->Cells[2]->Value = ChainArr[i].Capacity;
		CusGirdView->Rows[i]->Cells[3]->Value = ChainArr[i].staff;
	}

}
private: System::Void listbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Table A[21];
	for (int i = 1; i <= 20; i++)
	{
		A[i].id = Chain.findNodeByID(toStandardString(ResidBox->Text))->data.Tablearr[i].id;
		A[i].statement = Chain.findNodeByID(toStandardString(ResidBox->Text))->data.Tablearr[i].statement;
	}
	CusGirdView->ClearSelection();

	CusGirdView->Columns->Add("id", "ID");
	CusGirdView->Columns->Add("statement", "statement");

	for (int i = 0; i <= 20; i++)
	{
		CusGirdView->Rows->Add();
		CusGirdView->Rows[i]->Cells[0]->Value = gcnew String(A[i].id.c_str());
		if (A[i].statement == true)
		{
			CusGirdView->Rows[i]->Cells[1]->Value = gcnew String("Booked");
		}
		else if (A[i].statement == false)
		{
			CusGirdView->Rows[i]->Cells[1]->Value = gcnew String("Free");
		}
		
	}

}
private: System::Void CusGirdView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{

}
private: System::Void clearbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	nametextbox->Clear();
	phonetextbox->Clear();
	DayBox->Clear();
	MothBox->Clear();
	YearBox->Clear();
	ResidBox->Clear();
	CusnumBox->Clear();
	idtextbox->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	NameDel->Clear();
	PhoneDel->Clear();
	ResDel->Clear();
	TableDel->Clear();
	NumDel->Clear();
	DayDel->Clear();
	MothDel->Clear();
	YearDel->Clear();
}
};
}
