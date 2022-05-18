#include "Payment.h"
#include<iostream>
using namespace std;
#include<cstring>

Payment::Payment()   //implimentation of the constructors
{
	Payid = 0;
	strcpy_s(Paytype, "");
	Amount = 0.0;
}
       //implimentation of the overloading constructors
Payment::Payment(int Pid, const char CPaytype[], double Pamount)
{
	Payid = Pid;    // assign values
	strcpy_s(Paytype, CPaytype);
	Amount = Pamount;
}

    //implimentation of the methods
void Payment::setpayid(int Pid)
{
}

void Payment::setPaytype(const char CPtype[])
{
}

void Payment::setAmount(double Pamount)
{
}

void Payment::checkpayment()
{
}

void Payment::confirmpayment()
{
}
