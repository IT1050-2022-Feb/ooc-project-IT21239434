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
void Booking::setbookingid(const char Bid[])
{
}

void Booking::setStartplace(const char Bstart[])
{
}

void Booking::setEndplace(const char Bend[])
{
}

void Booking::setDate(const char Bdate[])
{
}

void Booking::setTime(const char Btime[])
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
