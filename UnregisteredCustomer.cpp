#include <cstring>
#include "UnregisteredCustomer.h"

using namespace std;

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
  customerNic=0;
}

UnregisteredCustomer::UnregisteredCustomer(int cid, const char cname[], const char cmail[], const char cdob[], const char caddress[], int ctel, const char uname[], const char pword[], int nic)
{
  customerId = cid;
  strcpy_s(customerName, cname);
  strcpy_s(customerEmail, cmail);
  strcpy_s(customerDOB, cdob);
  strcpy_s(customerAddress, caddress);
  customerTel = ctel;
  strcpy_s(username,uname);
  strcpy_s(password,pword);
  customerNic=nic;

  
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