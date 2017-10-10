#include "stdafx.h"
#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(double d, double inter)
	:Account(d)
{
	setFeeTrans(inter);
}


void CheckingAccount::setFeeTrans(double inter)
{
	feeTrans= (inter >= 0 && inter <= 100) ? inter : 0;
}

double CheckingAccount::getFeeTrans() const
{
	return feeTrans;
}

void CheckingAccount::credit(double d)
{
	Account::credit(d);
	setBalance(getBalance() - getFeeTrans()); //balances i zbret fee dhe i ben set,mund ta besh dhe FeeTrans direkt 
}


bool CheckingAccount::debit(double d)
{
	if (Account::debit(d)) //pasi ke terhequr dhe nqs vlera ka qen e sakt ,qe ka kthyer true
	{
		setBalance(getBalance() - getFeeTrans()); //nqs eshte shtuar i heqim fee
		return true;
	}
	else return false;
}