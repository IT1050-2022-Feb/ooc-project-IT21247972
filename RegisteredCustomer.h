#include "UnregisteredCustomer.h"
#include "Booking.h"
#include "Movie.h"
#define SIZE 2

class RegisteredCustomer: public UnregisteredCustomer
{
private:
  //Class Relationship
  Moive * Movie[SIZE];
  Booking *booking;

public:

  RegisteredCustomer();

  RegisteredCustomer(const char uname[25], const char cpwd[8]);

  void login();

  void passwordvalidation();

  void logout();

  ~RegisteredCustomer();
};