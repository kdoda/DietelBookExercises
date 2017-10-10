#include "stdafx.h"
#include "Package.h"


Package::Package(const string & SName, const string & SAddress, const string & SCity, const string & SState, const string &SZip,
	const string &RName, const string &RAddress, const string &RCity, const string &RState, const string &RZip, double w, double c)
	:SenderName(SName), SenderAddress(SAddress), SenderCity(SCity), SenderState(SState), SenderZip(SZip), ReceiverName(RName),
	ReceiverAddress(RAddress), ReceiverCity(RCity),ReceiverState(RState), ReceiverZip(RZip)
{
	setWeight(w);
	setCost(c);
}

void Package::setWeight(double w) //vendos peshen nqs eshte pozitive ne te kundert vendos 0
{
	weight = w > 0 ? w : 0.0;
}

double Package::getWeight() const
{
	return weight;
}

void Package::setCost(double c)
{
	cost = c > 0 ? c : 0.0;
}

double Package::getCost() const
{
	return cost;
}

double Package::calculateTotalCost()const
{
	return weight*cost;
}

void Package::setSenderName(const string & n)
{
	SenderName = n;
}

string Package::getSenderName() const
{
	return SenderName;
}

void Package::setSenderAddress(const string &a)
{
	SenderAddress = a;
}
string Package::getSenderAddress() const
{
	return SenderAddress;
}
void Package::setSenderCity(const string &c)
{
	SenderCity = c;
}
string Package::getSenderCity() const
{
	return SenderCity;
}
void Package::setSenderState(const string & s)
{
	SenderState = s;
}
string Package::getSenderState() const
{
	return SenderState;
}
void Package::setSenderZip(const string & z)
{
	SenderZip = z;
}
string Package::getSenderZip() const
{
	return SenderZip;
}