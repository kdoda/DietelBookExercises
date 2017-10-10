//ka interes qe te heq nga karta para sa her qe ti kryen nje transaction
#pragma once
#include "Account.h"
class CheckingAccount :public Account
{
public:
	CheckingAccount(double=0.0,double =0.0); //e para balance,e dyta eshte fee
	void setFeeTrans(double);
	double getFeeTrans() const;
	void credit(double); //redifine qe te zbresim dhe interesin
	bool debit(double); //redifine debit qe te zbresim interesin

private:
	double feeTrans; //fee sa her shton ose terheq
};

