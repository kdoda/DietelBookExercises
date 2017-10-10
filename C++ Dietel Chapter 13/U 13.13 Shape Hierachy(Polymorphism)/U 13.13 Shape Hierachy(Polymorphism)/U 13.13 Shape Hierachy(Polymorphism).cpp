// U 13.13 Shape Hierachy(Polymorphism).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TwoDimensionalShape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Kuboid.h"
#include "Sphere.h"
#include "iostream"
#include <vector>


void virtualViaPointer(const TwoDimensionalShape* const);
void virtualViaReference(const TwoDimensionalShape&);

using namespace std;
int main()
{
	Rectangle d(4, 5);
	cout << "Siperfaqja e drejtkendeshit eshte:" <<d.getArea()<<endl;
	Triangle t(6, 8, 10);
	cout << "Siperfaqja e trekendeshit eshte:"<< t.getArea() << endl;
	Kuboid k(2, 4, 6);
	cout << "Siperfaqja e kuboidit eshte:" << k.getArea() << endl << "Ndersa Vellimi eshte:" << k.getVolume() << endl;
	Sphere s(3);
	cout << "Siperfaqja e sferes eshte:" << s.getArea() << endl << "Ndersa Vellimi eshte:" << s.getVolume() << endl;

	vector<TwoDimensionalShape *> v; //vector me pointera te base class 
	v.push_back(&d); //i japim adresen e drejtkendeshit
	v.push_back(&t); //i japim adresen e trekendeshit


	cout << endl << endl;

	for (int i = 0; i < v.size(); i++)
		virtualViaPointer(v[i]); //i japim el qe ka adresat 
	
	cout << endl << endl;

	for (int i = 0; i < v.size(); i++)
		virtualViaReference(*v[i]); //shiko dereferencen, sepse duhet ti japesh objektin 

}
//merr pointer per te objekti
void virtualViaPointer(const TwoDimensionalShape* const basePtr)  //varet ke i jep nga main
{                                                                 //quhet dynamic bidning sepse programi se di se ke do printoj,por kur ehste running e kupto ,sepse varet ke i jep
	cout << "Siperfaqja e  ";
	basePtr->print();  //printon vetem emrin e figures
	cout << "  eshte:" << basePtr->getArea() << endl;
}
//merr referencen e objektit
void virtualViaReference(const TwoDimensionalShape & baseRef)
{
	cout << "Siperfaqja e  ";
	baseRef.print();  //printon vetem emrin e figures ,me . sepse nuk eshte pointer por referenc
	cout << "  eshte:" << baseRef.getArea() << endl;
}