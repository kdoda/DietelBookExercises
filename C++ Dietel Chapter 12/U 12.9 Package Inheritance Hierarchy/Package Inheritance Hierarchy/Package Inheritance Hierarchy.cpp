// Package Inheritance Hierarchy.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Package p1("Klevin Doda", "St.Zef Jubani", "Tirana", "Albania", "1001",
		"Angel Cordova", "St.JFK", "New York", "United States", "1324", 35, 1.3);

	cout << "Pako1 ka keto te dhena:" << endl
		<< "Emri derguesit : " << p1.getSenderName()
		<< "\nAdresa derguesit : " << p1.getSenderAddress()
		<< "\nQyteti i derguesit : " << p1.getSenderCity()
		<< "\nShteti i derguesit : " << p1.getSenderState()
		<< "\nZip Code i derguesit : " << p1.getSenderZip()
		<< "\nPesha e pakos : " << p1.getWeight()
		<< "\nKosto per kg : " << p1.getCost()
		<< "\nKosto totale e transportimit te pakos : " << p1.calculateTotalCost();

	cout << endl<<endl;

	TwoDayPackage p2("Gjovalin Fusha", "St.Muhamed Gjollesha", "Lezhe", "Albania", "1001",
		"Brande Carrilo", "St.Stanta FE", "California", "United States", "5265", 35 ,1.3 ,5); //kosto flatflee ehste 5
	
	cout << "Pako2(e cila dergohet per 2 dite) ka keto te dhena:" << endl
		<< "Emri derguesit : " << p2.getSenderName()
		<< "\nAdresa derguesit : " << p2.getSenderAddress()
		<< "\nQyteti i derguesit : " << p2.getSenderCity()
		<< "\nShteti i derguesit : " << p2.getSenderState()
		<< "\nZip Code i derguesit : " << p2.getSenderZip()
		<< "\nPesha e pakos : " << p2.getWeight()
		<< "\nKosto per kg : " << p2.getCost()
		<< "\nFlatFlee(kosto e sherbimit 2ditor) : " <<p2.getFlatFlee()
		<< "\nKosto totale e transportimit te pakos bashke me flaflee : " << p2.calculateTotalCost();
	
	cout << endl << endl;

	OvernightPackage p3("Henri Xhafaj", "St.Pjeter Budi", "Gjirokaster", "Albania", "1000",
		"Emiliana Pali", "St.Komuna Parisit", "Tirana", "Albania", "1001", 35, 1.3, 1); //kosto feePerKg 1

	cout << "Pako3(e cila dergohet brenda nates) ka keto te dhena:" << endl
		<< "Emri derguesit : " << p3.getSenderName()
		<< "\nAdresa derguesit : " << p3.getSenderAddress()
		<< "\nQyteti i derguesit : " << p3.getSenderCity()
		<< "\nShteti i derguesit : " << p3.getSenderState()
		<< "\nZip Code i derguesit : " << p3.getSenderZip()
		<< "\nPesha e pakos : " << p3.getWeight()
		<< "\nKosto per kg : " << p3.getCost()
		<< "\nFeePerKg(kosto e sherbimit overnight) : " << p3.getFeePerKg()
		<< "\nKosto totale e transportimit te pakos bashke me feePerKg : " << p3.calculateTotalCost();

	cout << endl << endl;

}
