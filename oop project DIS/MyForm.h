#pragma once

#include "IdentityManager.h"

namespace oop_project_DIS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		IdentityManager^ manager;
		System::ComponentModel::Container^ components;

		// Declare UI controls referenced in event handlers (add actual types as needed)
		TextBox^ txtName;
		TextBox^ txtEmail;
		DateTimePicker^ dateTimePickerDOB;
		TextBox^ txtId;
		TextBox^ txtPwd;

	public:
		MyForm(void)
		{
			InitializeComponent();
			manager = gcnew IdentityManager();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 351);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
