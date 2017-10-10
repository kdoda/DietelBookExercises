#include "stdafx.h"
#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(double d)
{
	setBalance(d);
}

void Account::setBalance(double d)
{
	if (d >= 0.0)
		balance = d;
	else
	{
		cout <<endl<< "Ju dhate nje vlere jo te pranueshme negative,balance reset to 0";
		balance = 0;
	}
}

double Account::getBalance() const
{
	return balance;
}

void Account::credit(double d)
{
	balance += d;
}

bool Account::debit(double d)
{
	if (d > balance)
	{
		cout << "Debit amount exceeded account balance.";
		return false;
	}
	else
	{
		balance -= d;
		return true;
	}
}