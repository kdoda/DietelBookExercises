#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include "Card.h"
#include <vector>
#include <string>
using namespace std;

class DeckOfCards
{
    public:
        DeckOfCards();
        void printDeck();
        void shuffle();
        Card dealCard();  //kthen current card object from the deck
        bool moreCards(); //nqs ka akoma cards ne deck
        void resetDeck(); //kthejm deck nga fillim

    private:
        void swap(Card &,Card &);
        vector< Card > deck;
        int currentCard; //represent the next card to deal
};

#endif // DECKOFCARDS_H
