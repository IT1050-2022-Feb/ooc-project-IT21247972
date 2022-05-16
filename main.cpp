#include <iostream>
#include "Booking.h"
#include "RegisteredCustomer.h"
#include "UnregisteredCustomer.h"
#include "Movie.h"
#include "Payment.h"
#include "Theater.h"
#include "StaffMember"

int main()
{
  //Creating objects
  RegisteredCustomer*registeredCustomer = new RegisteredCustomer();

  
  UnregisteredCustomer*unregisteredCustomer = new UnregisteredCustomer();
  
  Movie*movie = new Movie();
  
  Booking*booking = new Booking();
  
  Payment*payment = new Payment();
  
  Theater*theater = new Theater();
  
  StaffMember*staffmember = new StaffMember();

  //Function calling
  registeredCustomer->login();
  registeredCustomer->logout();
  registeredCustomer->passwordValidation();
  
  unregisteredCustomer->regisration();
  unregisteredCustomer->cancelRegistration();
  
  staffmember->AddStaffmember();
  staffmember->UpdateStaffMember();
  staffmember->DeleteStaffMember();
  staffmember->Displaydetails();
  
  movie->addMoive();
  movie->removeMovie();
  movie->UpdateMovie();
  movie->CheckAvailability();
  movie->MovieDetails();
  
  theater->UpdateTheaterDetails();
  theater->RemoveTheaterDetails();
  theater->DisplayTheaterDetails();
  
  booking->searchBooking();
  booking->selectBooking();
  booking->addBooking();
  booking->updateBooking();
  booking->deleteBooking();
  
  payment->confirmDetails();
  payment->viewDetails();
  payment->statusDisplay();  
  
  
  
  //Deleting dynamic objects
  delete registeredCustomer;
  delete unregisteredCustomer;
  delete staffmember;
  delete movie;
  delete theater;
  delete booking;
  delete payment;
  

  return 0;
}