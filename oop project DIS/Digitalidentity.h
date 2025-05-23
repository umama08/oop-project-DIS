#pragma once
#include "Person.h"

public ref class Digitalidentity abstract : public Person
{
protected:
    String^ identityId;
    String^ passwordHash;

public:
    Digitalidentity(String^ n, String^ e, DateTime d, String^ id, String^ pwdHash);
    virtual String^ GetRole() abstract;
    property String^ IdentityId { String^ get(); }
    property String^ PasswordHash { String^ get(); void set(String^); }
};