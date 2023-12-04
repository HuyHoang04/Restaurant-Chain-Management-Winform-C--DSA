#pragma once
#include "CustomerForm.h"
#include "ManagerForm.h"
namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ CustomerButton;
	private: System::Windows::Forms::Button^ Managerbutton;
	private: System::Windows::Forms::Label^ label1;
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
			this->CustomerButton = (gcnew System::Windows::Forms::Button());
			this->Managerbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CustomerButton
			// 
			this->CustomerButton->Font = (gcnew System::Drawing::Font(L"Agency FB", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerButton->Location = System::Drawing::Point(254, 258);
			this->CustomerButton->Name = L"CustomerButton";
			this->CustomerButton->Size = System::Drawing::Size(209, 166);
			this->CustomerButton->TabIndex = 0;
			this->CustomerButton->Text = L"Customer";
			this->CustomerButton->UseVisualStyleBackColor = true;
			this->CustomerButton->Click += gcnew System::EventHandler(this, &MenuForm::button1_Click);
			// 
			// Managerbutton
			// 
			this->Managerbutton->Font = (gcnew System::Drawing::Font(L"Agency FB", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Managerbutton->Location = System::Drawing::Point(584, 258);
			this->Managerbutton->Name = L"Managerbutton";
			this->Managerbutton->Size = System::Drawing::Size(214, 161);
			this->Managerbutton->TabIndex = 1;
			this->Managerbutton->Text = L"Manager";
			this->Managerbutton->UseVisualStyleBackColor = true;
			this->Managerbutton->Click += gcnew System::EventHandler(this, &MenuForm::Managerbutton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(325, 126);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(399, 72);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Choose Your Role ";
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1043, 561);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Managerbutton);
			this->Controls->Add(this->CustomerButton);
			this->Name = L"MenuForm";
			this->Text = L"MenuForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CustomerForm^ form = gcnew CustomerForm;
		form->Show();
	}

	private: System::Void Managerbutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ManagerForm^ form = gcnew ManagerForm;
		form->Show();
	}

	};
}
