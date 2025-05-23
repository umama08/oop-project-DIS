#pragma once

using namespace System;

public ref class Person abstract
{
protected:
    String^ name;
    String^ email;
    DateTime dob;

public:
    Person(String^ n, String^ e, DateTime d);
    virtual void DisplayInfo() abstract;
    property String^ Name { String^ get(); void set(String^); }
    property String^ Email { String^ get(); void set(String^); }
    property DateTime DOB { DateTime get(); void set(DateTime); }
};

