#include <iostream>
#include <iomanip>
//nominator - numeruesi'''denominator-emeruesi
// gcd-greatest common devisor(euklid)
using namespace std;

class Rational{
public:

    Rational(int num=1,int den=1){
        setRational(num,den);   //thrrasim funk qw i ruan numeruesin dhe emeruesin ne formen e thjeshtar
    }

    void setRational(int num,int den){
        int devider=gcd(num,den);   //gjejm pjestuesin me te madh te perbashket dhe gjejm vlrat e theses ne formen e thjeshtuar
        nominator=num/devider;
        denominator=den/devider;
    }

    int getNominator(){
    return nominator;
    }

    int getDenominator(){
    return denominator;
    }

    void printRational(){

    cout<<nominator<<"/"<<denominator;
    }

    void addRational(int num1,int den1,int num2,int den2){

    int em;   //gjejme emeruesin me te vogel te perbashket

    if(den1>=den2 && den1%den2==0)
        em=den1;
    else if (den2>den1 && den2%den1==0)
        em=den2;
    else em=den1*den2;  //gjetem emeruesin

    int numeruesi=num1*(em/den1) + num2*(em/den2);

    setRational(numeruesi,em); //ruan thyesen ne formen e thjestuar
}


  void subRational(int num1,int den1,int num2,int den2){

    int em;   //gjejme emeruesin me te vogel te perbashket

    if(den1>=den2 && den1%den2==0)
        em=den1;
    else if (den2>den1 && den2%den1==0)
        em=den2;
    else em=den1*den2;  //gjetem emeruesin

    int numeruesi=num1*(em/den1) - num2*(em/den2);

    setRational(numeruesi,em); //ruan thyesen ne formen e thjestuar
}

  void multiRational(int num1,int den1,int num2,int den2){

  setRational(num1*num2,den1*den2);

  }

  void divRational(int num1,int den1,int num2,int den2){

  setRational(num1*den2,den1*num2);

  }


 void printRatFloat(){
   cout<<(float)nominator/denominator;
 }



private:
    int nominator;
    int denominator;
    int gcd(int m ,int n){  ///m>=n

        if(n>m)
          gcd(n,m);  ///sepse duhet m>=n

        while(n!=0){
            int rem=m%n; ///reminder
            m=n;
            n=rem;
        }
        return m;
    }

};






int main(){

Rational t;

t.setRational(1500,300);

t.printRational();

cout<<endl;

t.addRational(1,5,1,7);
t.printRational();

cout<<endl;
t.addRational(2,3,3,6);
t.printRational();

cout<<endl;
t.addRational(1,4,2,8);
t.printRational();


cout<<endl;
t.subRational(1,4,2,8);
t.printRational();

cout<<endl;
t.multiRational(1,2,2,3);
t.printRational();

cout<<endl;
t.divRational(1,2,2,3);
t.printRational();

cout<<endl;
t.printRatFloat();

cout<<endl;
t.setRational(3,10);
t.printRatFloat();
}






