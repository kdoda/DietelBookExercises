#include "stdafx.h"
#include "TwoDayPackage.h"


TwoDayPackage::TwoDayPackage(const string & SName, const string & SAddress, const string & SCity, const string & SState, const string &SZip,
	const string &RName, const string &RAddress, const string &RCity, const string &RState, const string &RZip, double w, double c, double f)
	:Package(SName, SAddress, SCity, SState, SZip, RName, RAddress, RCity, RState, RZip,w,c) //thrritet ne menyre explicite constructor i base class
{
	setFlatFlee(f); //dhe flat fleeve bejme set ne constructor
}


void TwoDayPackage::setFlatFlee(double f)
{
	flatFlee = f > 0 ? f : 0.0;
}

double TwoDayPackage::getFlatFlee() const
{
	return flatFlee;
}

double TwoDayPackage::calculateTotalCost() const
{
	return getFlatFlee() + Package::calculateTotalCost(); //therrrasim calculate function te base class me kete sintakse qe mote bejme rekursivitet te pafundem	
} //dhe e mbledhim me taksen flaflee