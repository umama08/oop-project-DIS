#pragma once
#include "Digitalidentity.h"


public ref class Admin : public Digitalidentity
{
public:
    Admin(String^ n, String^ e, DateTime d, String^ id, String^ pwdHash);
    virtual void DisplayInfo() override;
    virtual String^ GetRole() override;
};
