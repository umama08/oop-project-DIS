
#pragma once
#include "Admin.h"
#include "User.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class IdentityManager
{
private:
    List<Digitalidentity^>^ identities;

public:
    IdentityManager();
    void AddIdentity(Digitalidentity^ id);
    List<Digitalidentity^>^ GetAll();
    Digitalidentity^ FindById(String^ id);
    void DeleteById(String^ id);
    // Add Update and Search as needed


    // File operations
    void SaveToFile(String^ filename);
    void LoadFromFile(String^ filename);
};