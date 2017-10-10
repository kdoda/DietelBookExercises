#include <iostream>
#include <string>
#include "Complex.h"
#include "Complex.cpp"
using namespace std;

int main()
{
    Complex a(1.2,3.8);
    Complex b(3,4);
    Complex d(1,2);
    Complex e(1,2);

    cout<<(d==e)<<endl;
    cout<<(d!=e)<<endl;
    cout<<(d==b)<<endl;
    cout<<(d!=b)<<endl;

    Complex c;
    c=a+b;
   // b.print();
    cout<<endl;
    c.print();
    c=a-b;
    cout<<endl;
    c.print();
    c=b*d;
    cout<<endl;
    c.print();
    cout<<endl;
    string x="Klevi";

    x=x-'l';
    cout<<x;
}
