#pragma once
#ifndef OvernightPackage_H
#define OvernightPackage_H
#include "Package.h"
class OvernightPackage :public Package
{

public:
	OvernightPackage(const string &, const string &, const string &, const string &, const string &,
		const string &, const string &, const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0); //si te base class + feePerKg
	void setFeePerKg(double);
	double getFeePerKg()const;
	double calculateTotalCost() const; //redifine i funksionit te base class
	

private:
	double feePerKg; //taks shtes per cdo kilogram nqs e do pakon brenda nates
};

#endif