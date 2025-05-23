#pragma once
#include "Digitalidentity.h"



public ref class User : public Digitalidentity
{
public:
    User(String^ n, String^ e, DateTime d, String^ id, String^ pwdHash);
    virtual void DisplayInfo() override;
    virtual String^ GetRole() override;
};