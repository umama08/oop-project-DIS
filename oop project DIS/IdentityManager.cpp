#include "pch.h"
#include "IdentityManager.h"
using namespace System::IO;

// ... existing methods ...

void IdentityManager::SaveToFile(String^ filename)
{
    StreamWriter^ sw = gcnew StreamWriter(filename);

    for each (Digitalidentity ^ id in identities)
    {
        // Save: type,name,email,dob,id,password
        // Use type info so you know which class to restore
        String^ type = id->GetRole(); // "Admin" or "User"
        String^ dobStr = id->DOB.ToString("yyyy-MM-dd");
        sw->WriteLine("{0},{1},{2},{3},{4},{5}",
            type,
            id->Name->Replace(",", " "), // remove commas to avoid CSV issues
            id->Email->Replace(",", " "),
            dobStr,
            id->IdentityId->Replace(",", " "),
            id->PasswordHash->Replace(",", " "));
    }
    sw->Close();
}

void IdentityManager::LoadFromFile(String^ filename)
{
    identities->Clear();

    if (!File::Exists(filename)) return;

    StreamReader^ sr = gcnew StreamReader(filename);
    String^ line;
    while ((line = sr->ReadLine()) != nullptr)
    {
        array<String^>^ parts = line->Split(',');
        if (parts->Length != 6) continue;

        String^ type = parts[0];
        String^ name = parts[1];
        String^ email = parts[2];
        DateTime dob = DateTime::Parse(parts[3]);
        String^ id = parts[4];
        String^ pwd = parts[5];

        if (type == "Admin")
            identities->Add(gcnew Admin(name, email, dob, id, pwd));
        else if (type == "User")
            identities->Add(gcnew User(name, email, dob, id, pwd));
        // else if (type == "Guest") ... etc.
    }
    sr->Close();
}
      
