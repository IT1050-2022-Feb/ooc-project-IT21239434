#include "RegisteredUser.h"
#include"UnregisteredUser.h"
#include<iostream>
using namespace std;
#include<cstring>

RegisteredUser::RegisteredUser()
{
	strcpy_s(username, "");
	strcpy_s(password, "");
}

RegisteredUser::RegisteredUser(const char Uname[], const char Upw[], int cid, const char cname[], const char caddress[], const char cmail[], int ctel)
{
	strcpy_s(username, Uname);
	strcpy_s(password, Upw);
}

//setters
void RegisteredUser::setUsername()
{
}

void RegisteredUser::setpassword()
{
}

//methods
void RegisteredUser::login()
{
}

void RegisteredUser::checkPassword()
{
}

void RegisteredUser::passwordvalidation()
{
}

void RegisteredUser::displayRegUser()
{
}

void RegisteredUser::logout()
{
}

//destructor
RegisteredUser::~RegisteredUser()
{
}