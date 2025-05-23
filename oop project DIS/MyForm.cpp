#include "pch.h"
#include "MyForm.h"
#include "User.h"

using namespace oop_project_DIS;
using namespace System;
using namespace System::Windows::Forms;

// MyForm_Load event handler
System::Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    // Initialization code if needed
}

// btnAdd_Click event handler
System::Void MyForm::btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    // Ensure all controls are not null before use
    if (txtName && txtEmail && dateTimePickerDOB && txtId && txtPwd && manager)
    {
        User^ u = gcnew User(
            txtName->Text,
            txtEmail->Text,
            dateTimePickerDOB->Value,
            txtId->Text,
            txtPwd->Text
        );
        manager->AddIdentity(u);
        MessageBox::Show("User added!");
        // Refresh DataGridView or other UI updates here if needed
    }
    else
    {
        MessageBox::Show("One or more input fields are missing.");
    }
}
    