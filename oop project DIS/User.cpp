#include "pch.h"
#include "User.h"

using namespace System::Windows::Forms;

User::User(String^ n, String^ e, DateTime d, String^ id, String^ pwdHash)
    : Digitalidentity(n, e, d, id, pwdHash) {
}

void User::DisplayInfo()
{
    MessageBox::Show("User: " + Name + ", Email: " + Email);
}

String^ User::GetRole()
{
    return "User";
}