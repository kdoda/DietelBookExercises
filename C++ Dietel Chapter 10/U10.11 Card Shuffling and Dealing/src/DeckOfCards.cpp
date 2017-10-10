#include "DeckOfCards.h"
#include "Card.h"
#include "Card.cpp"
#include <iostream>
#include <cstdlib>  //mban rand();
using namespace std;

DeckOfCards::DeckOfCards()
:currentCard(0)
{
    for(int i=0;i<4;i++)
        for(int j=0;j<13;j++)
    {
        Card temp(j,i);  //krijojm cdo munci karte te mundshme psh 1 clubs 2 clubs ... mete nje objekti temp
        deck.push_back(temp);

    }

}


void DeckOfCards::printDeck(){

for(int i=0;i<52;i++)
    cout<<endl<<deck[i].toString();

}


void DeckOfCards::shuffle(){ //po e bej kshu sepse sdi te bej operator overloading per = qe ta kisha ber me objekt direkt
                             //i kam ber sqap vlerave te objekteve
for(int i=0;i<52;i++)
{
    int j=rand()%52;
/*
    int f=deck[i].getFaceInt();
    int s=deck[i].getSuitInt();

    deck[i].setFaceInt(deck[j].getFaceInt());
    deck[i].setSuitInt(deck[j].getSuitInt());

    deck[j].setFaceInt(f);
    deck[j].setSuitInt(s);  */

    swap(deck[i],deck[j]);


}

}

void DeckOfCards::swap(Card &a,Card &b){

    int f=a.getFaceInt();
    int s=a.getSuitInt();

    a.setFaceInt(b.getFaceInt());
    a.setSuitInt(b.getSuitInt());

    b.setFaceInt(f);
    b.setSuitInt(s);

}


Card DeckOfCards::dealCard(){  //kthen karten ku ndodhet e ruaj

currentCard++;                //e inkrementoj qe te kthej karten pasardhese heren tj
if(currentCard<52)
return deck[currentCard-1];  //qe te kthejm karten ku jemi
else return deck[0];         // kthe po karten e par gjithmon nqs perddorusi vazhdon jep karta,, qe te rreg duht ti bej reset Deck qe current card tmarri vl 0
}


bool DeckOfCards::moreCards(){
if(currentCard<52)
    return true;
else return false;
}

void DeckOfCards::resetDeck(){
currentCard=0;
shuffle();
}

