#include"UnregisteredUser.h"
#include"RegisteredUser.h"
#include"Booking.h"
#include"Taxi.h"
#include"Offer.h"
#include"Payment.h"
#include<iostream>
using namespace std;

int main()
{
	//object creation
	UnregisteredUser Ureg1;
	RegisteredUser reg1;
	Booking book1;
	Taxi* t1 = new Taxi;
	Offer* o1 = new Offer;
	Payment* p1 ;

	//methods implementation
	Ureg1.displayUnreUser();

	reg1.registration();
	reg1.login();

	book1.addbookingdetails();
	book1.cancelbookingdetails();

	t1->addtaxiInformation();
	t1->displaytaxi();

	o1->addoffer();
	o1->displayoffer();
	o1->addpayment();

	p1->checkpayment();
	p1->displaypayment();

	  //delete objects
	  delete Unreg1;
	  delete reg1;
	  delete book1;
	  delete t1;
	  delete o1;
	  delete p1;
};
