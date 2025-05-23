#include "pch.h"
#include "Person.h"

Person::Person(String^ n, String^ e, DateTime d) : name(n), email(e), dob(d) {}

String^ Person::Name::get() { return name; }
void Person::Name::set(String^ val) { name = val; }

String^ Person::Email::get() { return email; }
void Person::Email::set(String^ val) { email = val; }

DateTime Person::DOB::get() { return dob; }
void Person::DOB::set(DateTime val) { dob = val; }