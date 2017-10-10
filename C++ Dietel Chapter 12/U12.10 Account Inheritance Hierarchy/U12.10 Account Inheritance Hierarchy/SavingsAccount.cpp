#include "stdafx.h"
#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(double d,double inter)
	:Account(d)
{
	setInteresRate(inter);
}

void SavingsAccount::setInteresRate(double inter)
{
	interesRate = (inter >= 0 && inter<=100 )? inter : 0; 
}

double SavingsAccount::getInteresRate() const
{
	return interesRate;
}

double SavingsAccount::calculateInteres() const
{
	return interesRate / 100 * getBalance();
}

