#pragma once
#ifndef Kuboid_H
#define Kuboid_H
#include "iostream";
#include "ThreeDimensionalShape.h"

class Kuboid : public ThreeDimensionalShape
{
public:
	Kuboid(double B1, double B2, double H3)
		:a(B1), b(B2), h(H3)
	{}
	virtual void print() const
	{
		std::cout << "Kuboid";
	}
	virtual double getArea() const //overide funk ktu
	{
		
		return (2 * (a*b) + 2 * (a*h) + 2 * (b*h)); //2 sip e bazes +2 sip anesore brinja madhe+2 sip anesore brinha vogel

	}
	virtual double getVolume() const
	{
		return (a*b*h);
	}
private:
	double a; //brinjet e bazes
	double b; //brinjet e bazes
	double h; //lartesia
};

#endif // !RECTANGLE_H