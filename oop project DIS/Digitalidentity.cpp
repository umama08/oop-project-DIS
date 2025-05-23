#include "pch.h"
#include "Digitalidentity.h"

Digitalidentity::Digitalidentity(String^ n, String^ e, DateTime d, String^ id, String^ pwdHash)
    : Person(n, e, d), identityId(id), passwordHash(pwdHash) {
}

String^ Digitalidentity::IdentityId::get() { return identityId; }
String^ Digitalidentity::PasswordHash::get() { return passwordHash; }
void Digitalidentity::PasswordHash::set(String^ val) { passwordHash = val; }
