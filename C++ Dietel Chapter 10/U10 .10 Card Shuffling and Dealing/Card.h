#ifndef CARD_H
#define CARD_H
#include <vector>
#include <string>
using namespace std;


//face cards quhen king, queen, dhe jack
//suit card  clubs (♣), diamonds (♦), hearts (♥) and spades (♠)

class Card
{

public:

    Card(int ,int);
    static string getFace(int ); //statike sepse kthen nje variabel statike
    string toString(); //kthen karten si string dmth face dhe suit
    int getFaceInt();
    int getSuitInt();
    void setFaceInt(int);
    void setSuitInt(int);




    private:
        int face;  //mbajne si indexe vlerat e kartave
        int suit;
        static vector< string > faces;
        static vector< string > suits;

};

#endif // CARD_H
