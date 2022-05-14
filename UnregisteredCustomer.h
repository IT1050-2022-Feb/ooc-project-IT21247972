#include "Movie.h"
#define SIZE 2

class UnregisteredCustomer
{
private:
  //Class releationship
  Movie*movie[SIZE];

protected:
  int customerId;
  char customerName[30];
  char customerEmail[50];
  char customerDOB[10];
  char customerAddress[100];
  int customerTel;
  char username[10];
  char password[10];


public:

  UnregisteredCustomer();

  UnregisteredCustomer(int cid, const char cname[], const char cmail[], const char cdob[], const char caddress[], int ctel,const char uname[], const char pword[]);

  void regisration();

  void cancelRegistration();

  ~UnregisteredCustomer();

};
