#include <cstring>
#include "UnregisteredCustomer.h"

UnregisteredCustomer::UnregisteredCustomer()
{
  customerId = 0;
  strcpy_s(customerName, " ");
  strcpy_s(customerEmail, " ");
  strcpy_s(customerDOB, " ");
  strcpy_s(customerAddress, " ");
  customerTel = 0;
  strcpy_s(username, "");
  strcpy_s(password, "");
}

UnregisteredCustomer::UnregisteredCustomer(int cid, const char cname[], const char cmail[], const char cdob[], const char caddress[], int ctel, const char uname[], const char pword[])
{
  customerId = cid;
  strcpy_s(customerName, cname);
  strcpy_s(customerEmail, cmail);
  strcpy_s(customerDOB, cdob);
  strcpy_s(customerAddress, caddress);
  customerTel = ctel;
  strcpy_s(username,uname);
  strcpy_s(password,pword);
}

void UnregisteredCustomer::regisration()
{
  
}

void UnregisteredCustomer::cancelRegistration()
{
  
}

UnregisteredCustomer:: ~UnregisteredCustomer()
{
  
}