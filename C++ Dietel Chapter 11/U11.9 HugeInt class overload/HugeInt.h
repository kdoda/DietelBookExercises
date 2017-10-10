#ifndef HUGEINT_H
#define HUGEINT_H
#include<string>
#include<vector>
#include<iostream>
using namespace std;

class HugeInt
{

  friend ostream& operator<<(ostream&,const HugeInt & );  //eshte jasht si perket klasave por eshte friend

    public:

        static const int digits=30;
        HugeInt(int=0);
        HugeInt(const string &);
        HugeInt& operator=(const HugeInt &); //assignment operator
        HugeInt operator+( const HugeInt & ) const; // addition operator; HugeInt + HugeInt
        HugeInt operator+( const string & ) const; // addition operator; HugeInt + string that represent a huge integer
        HugeInt operator+( int ) const; //addition operator; HugeInt + int
        HugeInt operator*( const HugeInt & ) const; //  HugeInt * HugeInt
        HugeInt operator*( const string & ) const; //  HugeInt * string that represent a huge integer
        HugeInt operator*( int ) const; // HugeInt * int
        bool operator==( const HugeInt & ) const; //  HugeInt == HugeInt
        bool operator==( const string & ) const; //HugeInt == string that represent a huge integer
        bool operator==( int ) const; // HugeInt == int

    private:
        vector<short> integer;
};

#endif // HUGEINT_H
