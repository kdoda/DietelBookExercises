// U12.10 Account Inheritance Hierarchy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Account.h"
#include "SavingsAccount.h"
#include <iostream>
#include "CheckingAccount.h"
using namespace std;
int main()
{
	Account p1(56.4);
   
	cout << "Klienti p1 disponon : " << p1.getBalance() << "$";

	double x;
	cout << endl << "Jep shumen qe kerkoni te terhiqni: ";
	cin >> x;
	p1.debit(x);

	cout << endl<< "Klienti p1 disponon : " << p1.getBalance() << "$";

	cout << endl << "Jep shumen qe doni  te shtoni: ";
	cin >> x;
	p1.credit(x);

	cout << endl << "Klienti p1 disponon : " << p1.getBalance() << "$";


	SavingsAccount p2(143.23, 5); //5% interes

	cout << endl<<"Klienti p2(savings account) disponon : " << p2.getBalance() << "$";

	
	cout << endl << "Jep shumen qe kerkoni te terhiqni: ";
	cin >> x;
	p2.debit(x);

	cout << endl << "Klienti p2(savings account) disponon : " << p2.getBalance() << "$";

	cout << endl << "Jep shumen qe doni  te shtoni: ";
	cin >> x;
	p2.credit(x);

	cout << endl << "Klienti p2(savings account) disponon : " << p2.getBalance() << "$";

	cout << endl << "Interesi qe klienti p2(savings account) perfiton eshte : " << p2.calculateInteres();

	CheckingAccount p3(250, 1); //1$ per transaksion
	cout << endl << "Jep shumen qe kerkoni te terhiqni: ";
	cin >> x;
	p3.debit(x);

	cout << endl << "Klienti p3(CheckingAccount) disponon : " << p3.getBalance() << "$";

	cout << endl << "Jep shumen qe doni  te shtoni: ";
	cin >> x;
	p3.credit(x);

	cout << endl << "Klienti p3(CheckingAccount) disponon : " << p3.getBalance() << "$";


	cout << endl << endl;
}

