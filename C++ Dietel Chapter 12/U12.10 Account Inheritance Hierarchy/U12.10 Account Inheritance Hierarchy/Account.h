#pragma once
#ifndef Account_H
#define Account_H

class Account
{
public:
	Account(double = 0.0);
	void setBalance(double); //vetem nqs eshte pozitive
	double getBalance() const;
	void credit(double); //shton para ne banke
	bool debit(double); //heq para nga banka per sa koh vlera eshte me e vogel se balance

private:
	double balance;//vlera e parave ne karte
};


#endif // 


