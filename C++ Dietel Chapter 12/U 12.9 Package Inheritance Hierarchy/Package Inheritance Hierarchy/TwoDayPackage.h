#pragma once
#ifndef TwoDayPackage_H
#define TwoDayPackage_H
#include "Package.h"

class TwoDayPackage :public Package //Pako qe dergohet brenda dy ditesh
{
public:
	TwoDayPackage(const string &, const string &, const string &, const string &, const string &,  //te gjitha argumentat qe merr jane si te klases Package ,plus te fundit qe ehste flaflee
		const string &, const string &, const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0);
	
	void setFlatFlee(double); //mund ta marresh dhe const me referenc
	double getFlatFlee() const;
	double calculateTotalCost() const; //i bejme redifine funksionit ne classen tone te derivuar

private: 
double flatFlee; //eshte kosto shtes qe duhet te paguash per kete sherbim ,qe te vi brenda dy ditesh dmth

};

#endif