#include "stdafx.h"
#include "OvernightPackage.h"


OvernightPackage::OvernightPackage(const string & SName, const string & SAddress, const string & SCity, const string & SState, const string &SZip,
	const string &RName, const string &RAddress, const string &RCity, const string &RState, const string &RZip, double w, double c, double feeKg)
	:Package(SName, SAddress, SCity, SState, SZip, RName, RAddress, RCity, RState, RZip, w, c) //thrritet ne menyre explicite constructor i base class
{
	setFeePerKg(feeKg);
}


void OvernightPackage::setFeePerKg(double fee)
{
	feePerKg = fee > 0 ? fee : 0;
}

double OvernightPackage::getFeePerKg()const
{
	return feePerKg;
}

double OvernightPackage::calculateTotalCost() const
{
	return getFeePerKg() * getWeight() + Package::calculateTotalCost() ; //marrim total cost nga baseclass dhe i shtojme fee per cdo kg
}
