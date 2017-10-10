#pragma once
#include "Card.h"
#include <vector>
#include <string>
using namespace std;




vector< string > Card::faces;  //kujdes duhet kjo per variablat statice por pa static para
vector< string > Card::suits;

                  //funksion static por se shkruajme ktu

Card::Card(int f=0,int s=0)
:face(f),
suit(s)
{
    faces.push_back("As");
    faces.push_back("Two");
    faces.push_back("Three");
    faces.push_back("Four");
    faces.push_back("Five");
    faces.push_back("Six");
    faces.push_back("Seven");
    faces.push_back("Eight");
    faces.push_back("Nine");
    faces.push_back("Ten");
    faces.push_back("Jack");
    faces.push_back("Queen");
    faces.push_back("King");

    suits.push_back("clubs"); //mac
    suits.push_back("diamonds");
    suits.push_back("hearts");
    suits.push_back("spades"); //karro


}


string Card::getFace(int i){  //mgjths eshte funksion statik ktu nuk e shkruajme

return faces[i];
}

string Card::toString(){  //duhet te kthej stringun face of suit

string temp=faces[face] +"  of  "+suits[suit];

return temp;

}


int Card::getFaceInt()
{
    return face;
}

int Card::getSuitInt()
{
    return suit;
}



void Card::setFaceInt(int f){
face=f;
}


void Card::setSuitInt(int s){
suit=s;
}
