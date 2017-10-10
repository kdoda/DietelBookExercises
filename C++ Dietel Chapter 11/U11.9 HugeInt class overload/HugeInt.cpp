#include "HugeInt.h"


ostream& operator<<(ostream& output,const HugeInt & num)  //nuk i perket klasave mos shkruj HugeInt::
{
    int i;
    for(i=0;(num.integer[i]==0)&& i<HugeInt::digits;i++) //kshu e akseson digist sepse eshte static ||||gjejm indexin kur fillon nr ne kete menyr
    {}
    if(i==HugeInt::digits)  //nqs ka shku nfund do te thot te gjitha 0
        output<<0;
    else
    {
        for(;i<HugeInt::digits;i++) //fillojm aty ku e la indexi
            output<<num.integer[i];
    }
    return output;
}


HugeInt::HugeInt(int value)
:integer(digits,0) //krijon vektor me 30 element dhe e mbush me 0
{

    for(int i=digits-1;value!=0 &&i>=0;i--) //i vendosim ne fund
    {
        integer[i]=value%10;
        value/=10;
    }
}

HugeInt::HugeInt(const string & value)
:integer(digits,0)
{

    for(int i=digits-value.size(),k=0;i<digits;i++,k++)
    {
        if(isdigit(value[k]))
        integer[i]=value[k]-'0';  // -'0' shume e rendesishme konverton nga char ne numer nga'4'->4 per shifrat nga 0 -9

         else i--;  //sepse vazhdojme ta rrisim i kur ne fakt spo i vejm vler
    }
}



HugeInt& HugeInt::operator=(const HugeInt &other) //mund edhe mos ta besh e ben vet compiler
{
    for(int i=0;i<digits;i++)
       integer[i]=other.integer[i];
}



HugeInt HugeInt::operator+( const HugeInt & other) const
{
  HugeInt temp;
  short carry=0;  //carry e perdorim per te mbajtur 1 ne mend te mbledhja

  for(int i=digits-1;i>=0;i--)
  {
      temp.integer[i]=integer[i]+other.integer[i]+carry;
      if(temp.integer[i]>9)
      {
        temp.integer[i]%=10;
        carry=1;
      }else
      {
        carry=0;
      }

  }

  return temp;

}

HugeInt HugeInt::operator+( const string & nr) const
{
    return *this + HugeInt(nr);
}

HugeInt HugeInt::operator+( int x) const
{

 return *this + HugeInt(x);  //e merr integer e kthen ne objekt dhe ja mbledh objektit qe e thrret dhe e kthen super!!

}



HugeInt HugeInt::operator*( const HugeInt & other) const
{

    HugeInt obj;

  int k,carry;  //carry e perdorim per te mbajtur mbetjen ne mend
  //k e perdorim per te filluar nga nje poz me i vogel


  for(int i=digits-1;i>=0;i--)
  {

    HugeInt temp;
     carry=0;

     for(int j=digits-1,k=i;k>=0;j--,k--)   //deri sa k tjet me e madhe se 0 kujdes
     {
      temp.integer[k]=(integer[j]*other.integer[i])+carry;
      if(temp.integer[k]>9)
      {
        carry=temp.integer[k]/10;
        temp.integer[k]%=10;
      }else carry=0;

    }
     obj=obj+temp;
  }

  return obj;
}



HugeInt HugeInt::operator*( const string & x) const
{
    return *this*HugeInt(x);
}



HugeInt HugeInt::operator*( int x) const
{
    return *this*HugeInt(x);
}


bool HugeInt::operator==( const HugeInt & other) const
{
    for(int i=digits-1;i>=0;i--)
        if(integer[i]!=other.integer[i])
        return false;

    return true;
}

bool HugeInt::operator==( const string & x) const
{
    return(*this==HugeInt(x));
}

bool HugeInt::operator==( int x) const
{
    return(*this==HugeInt(x));
}















