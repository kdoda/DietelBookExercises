#include <iostream>
#include <iomanip>


using namespace std;


class Complex{
public:
 Complex(int re=0,int im=0){
 realPart=re;
imaginaryPart=im;
 }

 void setValue(int re,int im){
 realPart=re;
imaginaryPart=im;
 }

 int getReal(){
 return realPart;
 }


 int getImaginary(){
 return imaginaryPart;
 }

 void add(int re1,int im1,int re2,int im2)
 {
     realPart=re1+re2;
     imaginaryPart=im1+im2;
 }

  void subtract(int re1,int im1,int re2,int im2)
 {
     realPart=re1-re2;
     imaginaryPart=im1-im2;
 }

 void printComplex()
 {
     cout<<realPart<<"   "<<imaginaryPart<<"*i";
 }

private:
    double realPart;
    double imaginaryPart;

};


int main(){

Complex c1;

cout<<c1.getReal()<<"   "<<c1.getImaginary()<<endl;

c1.setValue(2,3);
c1.printComplex();

c1.add(2,2,4,5);
cout<<endl;
c1.printComplex();
}


















