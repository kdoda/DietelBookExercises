#pragma once
#ifndef Sphere_H
#define Sphere_H
#include "iostream";
#include "ThreeDimensionalShape.h"

class Sphere : public ThreeDimensionalShape
{
public:
	Sphere(double rreze)
		:r(rreze)
	{}
	virtual void print() const
	{
		std::cout << "Sphere";
	}
	virtual double getArea() const //overide funk ktu
	{

		return (4*3.14*r*r); //2 sip e bazes +2 sip anesore brinja madhe+2 sip anesore brinha vogel

	}
	virtual double getVolume() const
	{
		return (r*r*r);
	}
private:
	double r; //rrezja e sferes
};

#endif // !RECTANGLE_H