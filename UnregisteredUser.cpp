#include "UnregisteredUser.h"
#include<iostream>
using namespace std;
#include<cstring>

UnregisteredUser::UnregisteredUser()
{
	custId = 0;
	strcpy_s(custName, "");
	strcpy_s(custAddress, "");
	strcpy_s(custEmail, "");
	custTelphone = 0;
}
UnregisteredUser::UnregisteredUser(int cid, const char cname[], const char caddress[], const char cmail[], int ctel)
{
	custId = cid;
	strcpy_s(custName, cname);
	strcpy_s(custAddress, caddress);
	strcpy_s(custEmail, cmail);
	custTelphone = ctel;
}

//setters
void UnregisteredUser::setcustId(int cid)
{
}

void UnregisteredUser::setcustName(const char cname[])
{
}

void UnregisteredUser::setcustAddress(const char caddress[])
{
}

void UnregisteredUser::setcustEmail(const char cmail[])
{
}

void UnregisteredUser::setcustTelphone(int ctel)
{
}

//methods
void UnregisteredUser::registration()
{
}

void UnregisteredUser::cancelregistration()
{
}

void UnregisteredUser::displayUnreUser()
{
}

//destructor
UnregisteredUser::~UnregisteredUser()
{
}