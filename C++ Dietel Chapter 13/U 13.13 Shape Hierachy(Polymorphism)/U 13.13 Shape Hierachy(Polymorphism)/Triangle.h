#pragma once
#ifndef Triangle_H
#define Triangle_H
#include <cmath>
#include "iostream";
#include "TwoDimensionalShape.h"
class Triangle : public TwoDimensionalShape
{
public:
	Triangle(double B1, double B2,double B3)
		:a(B1), b(B2), c(B3)
	{}
	virtual void print() const
	{
		std::cout << "Triangle";
	}
	virtual double getArea() const //overide funk ktu
	{
		double s = (a + b + c) / 2;

		return sqrt(s*(s - a)*(s - b)*(s - c)); //formula e heronit
	}
private:
	double a; //brinjet e trekendeshit
	double b;
	double c;
};

#endif // !RECTANGLE_H