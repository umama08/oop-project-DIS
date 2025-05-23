#include "pch.h"
#include "Admin.h"
using namespace System::Windows::Forms;

Admin::Admin(String^ n, String^ e, DateTime d, String^ id, String^ pwdHash)
    : Digitalidentity(n, e, d, id, pwdHash) {
}

void Admin::DisplayInfo()
{
    MessageBox::Show("Admin: " + Name + ", Email: " + Email);
}

String^ Admin::GetRole()
{
    return "Admin";
}