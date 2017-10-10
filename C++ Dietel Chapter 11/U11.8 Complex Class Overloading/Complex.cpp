#include "Complex.h"
#include<iostream>

using namespace std;

Complex::Complex(double r,double i)
:real(r),
imaginary(i)
{}

Complex::~Complex()
{}


Complex Complex::operator+(const Complex & other) const //sepse sduam ta ndryshojme kto classa qe kemi 
{
    double re=real+other.real;
    double im=imaginary+other.imaginary;
    return Complex(re,im);
}
/*   prova
Complex& Complex::operator+(Complex & other) const
{
    other.real=real+other.real;
    other.imaginary=imaginary+other.imaginary;
    return other;
}
*/

Complex Complex::operator-(const Complex & other) const
{
    Complex temp;
    temp.real=real-other.real;
    temp.imaginary=imaginary-other.imaginary;
    return temp;
}

void Complex::print() const
{
    cout<<"Nr imagjinar eshte :"<<real<<" + ("<<imaginary<<")*i";
}

Complex Complex::operator*(const Complex & other) const
{
    //si ndodh shumezimi (a+bi)*(c+di)=a*c+ a*di +b*ci -bd=(ac-bd) +(ad+bc)i
    double re=(real*other.real)-(imaginary*other.imaginary);
    double im=(real*other.imaginary)+(imaginary*other.real);
    return Complex(re,im);

}

bool Complex::operator==(const Complex & other) const
{
 if(real!=other.real || imaginary!=other.imaginary)
        return false;
else return true;
}


bool Complex::operator!=(const Complex & other) const
{
 if(real!=other.real || imaginary!=other.imaginary)
        return true;
else return false;
}





