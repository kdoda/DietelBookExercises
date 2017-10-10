//kjo klas mban dhe nje variabel per interesin qe te shtohet kur ke para ne llogari

#pragma once
#include "Account.h"
class SavingsAccount : public Account
{
public:
	SavingsAccount(double = 0.0,double=0.0);
	void setInteresRate(double); // e fut ne perqindje nga 0-100
	double getInteresRate() const;
	double calculateInteres()const; //llogarit interesin ne baze te balance

private:
	double interesRate; 
};

