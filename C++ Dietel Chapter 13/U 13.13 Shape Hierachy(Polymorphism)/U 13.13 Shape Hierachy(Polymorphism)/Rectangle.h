#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "iostream";
#include "TwoDimensionalShape.h"
class Rectangle : public TwoDimensionalShape
{
public:
	Rectangle(double BM, double BV)
		:brinjaMadhe(BM), brinjaVogel(BV)
	{}
	virtual void print() const
	{
		std::cout << "Rectangle";
	}
	virtual double getArea() const //overide funk ktu
	{
		return brinjaMadhe*brinjaVogel;
	}
private:
	double brinjaMadhe;
	double brinjaVogel;
};

#endif // !RECTANGLE_H
