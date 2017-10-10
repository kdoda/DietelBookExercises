#pragma once
#ifndef Package_H
#define  Package_H
#include <string>

using namespace std;
class Package
{
public:
	Package(const string &, const string &, const string &, const string &, const string &, 
		const string &, const string &, const string &, const string &, const string &, double =0.0, double=0.0);  //constructor
	void setWeight(double);
	double getWeight() const;
	void setCost(double);
	double getCost() const;
	double calculateTotalCost()const; //kosto e pakos ,qe eshte sa kg eshte her koston per kg
	void setSenderName(const string &);
	string getSenderName() const;
	void setSenderAddress(const string &);
	string getSenderAddress() const;
	void setSenderCity(const string &);
	string getSenderCity() const;
	void setSenderState(const string &);
	string getSenderState() const;
	void setSenderZip(const string &);
	string getSenderZip() const;


private:
	string SenderName;
	string SenderAddress;
	string SenderCity;
	string SenderState;
	string SenderZip;
	string ReceiverName;
	string ReceiverAddress;
	string ReceiverCity;
	string ReceiverState;
	string ReceiverZip;
	double weight; //pesha e pakos ne kg
	double cost;   //kosto per kg
};


#endif 


