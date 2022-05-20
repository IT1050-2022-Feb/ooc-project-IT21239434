#include "Offer.h"
#include<iostream>
using namespace std;
#include<cstring>

Offer::Offer()
{
	strcpy_s(offerId, "");
	strcpy_s(offerdescription, "");
}

Offer::Offer(const char Oid[], const char Odesc[])
{
	strcpy_s(offerId, Oid);
	strcpy_s(offerdescription, Odesc);
}

void Offer::setofferif(const char Oid[])
{
}

void Offer::setofferdescription(const char Odesc[])
{
}

void Offer::addoffer()
{
}

void Offer::addpayment()
{
}

void Offer::updateoffer()
{
}

void Offer::deleteoffer()
{
}

void Offer::displayoffer()
{
}

Offer::~Offer()
{
}
