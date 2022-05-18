#include "Booking.h"
#include"RegisteredUser.h"
#include"Taxi.h"
#include"Offer.h"
#include<iostream>
using namespace std;
#include<cstring>

//constructors
Booking::Booking()
{
	strcpy(Bookingid, "");
	strcpy(StartPlace, "");
	strcpy(EndPlace, "");
	strcpy(Date, "");
	strcpy(time, "");
}

Booking::Booking(const char Bid[], const char Bstart[], const char Bend[], const char Bdate[], const char Btime[])
{
	strcpy(Bookingid, Bid);
	strcpy(StartPlace, Bstart);
	strcpy(EndPlace, Bend);
	strcpy(Date, Bdate);
	strcpy(time, Btime);
	Registered->addBooking();
}
//setters
void Booking::setbookingid()
{
}

void Booking::setStartplace()
{
}

void Booking::setEndplace()
{
}

void Booking::setDate()
{
}

void Booking::setTime()
{
}

void Booking::Addtaxi()
{
}

void Booking::addbookingdetails()
{

}

void Booking::cancelbookingdetails()
{
}

void Booking::displaybookingdetails()
{
}
//destructor
Booking::~Booking()
{
}
