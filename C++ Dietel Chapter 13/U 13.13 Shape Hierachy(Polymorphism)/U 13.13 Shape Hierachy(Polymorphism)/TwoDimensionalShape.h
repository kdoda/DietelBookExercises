#pragma once
class TwoDimensionalShape
{
public:
	virtual  double getArea() const = 0; //sintaksa per pure virtual,qe do te thot qe cdo derived class duhet ti bej override ketij funk
	virtual void print() const=0;          //dhe ky funk nuk implementohet ne kete klas qe quhet abstact class
};                                       

