#include "RegisteredCustomer.h"
#include <cstring>

RegisteredCustomer::RegisteredCustomer()
{
  strcpy_s(username, " ");
  strcpy_s(password, " ");
}

RegisteredCustomer::RegisteredCustomer(const char uname[25], const char cpwd[8])
{
  strcpy_s(username, uname);
  strcpy_s(password, cpwd);
}

void RegisteredCustomer::login()
{
  
}
void RegisteredCustomer::passwordvalidation()
{
  
}

void RegisteredCustomer::logout()
{
  
}

RegisteredCustomer::~RegisteredCustomer()
{
  
}