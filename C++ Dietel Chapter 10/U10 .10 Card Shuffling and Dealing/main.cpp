#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "DeckOfCards.h"
#include "Card.cpp"
#include "DeckOfCards.cpp"
using namespace std;

int main()
{
    Card c(1,1);
cout<<c.getFace(1);
cout<<endl<<c.toString();
cout<<endl;
cout<<endl;


DeckOfCards d;
d.printDeck();
cout<<endl;
cout<<endl;
d.shuffle();
d.printDeck();
cout<<endl;
cout<<endl;
d.shuffle();
d.printDeck();
cout<<endl;
cout<<endl;

cout<<d.dealCard().toString();
cout<<endl<<d.dealCard().toString();
cout<<endl<<d.dealCard().toString();
cout<<endl<<d.dealCard().toString();
cout<<endl<<d.moreCards();
d.resetDeck();
cout<<endl;
cout<<endl;
d.printDeck();


}
