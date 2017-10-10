#include <iostream>
#include <iomanip>
#include <cstdlib>
//nominator - numeruesi'''denominator-emeruesi
// gcd-greatest common devisor(euklid)
//rastet se si mnd te jene pikat jane tre si me poshte keshtu e kam menduar
// a1b1   a2b2   -----   a1b1 a2b2 ---   a1b1 a3b3
// a4b4   a3b3   -----   a3b3 a4b4 ---   a2b2 a4b4
using namespace std;

class Rectangle{
public:

Rectangle(){        ///  mund ta besh ose jo
            a1=0;
            a2=0;
            a3=0;
            a4=0;
            b1=0;
            b2=0;
            b3=0;
            b4=0;
            length=0;
            width=0;
}

void setCoordinates(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4) {

    if(!(x1>0 && y1>0 && x2>0 && y2>0 && x3>0 && y3>0 && x4>0 && y4>0))
        {
            cout<<"Te pakten njera nga pikat nuk ndodhet  ne kuadrantin e pare.";
            return;
            }

    if(!(x1<20 && y1<20 && x2<20 && y2<20 && x3<20 && y3<20 && x4<20 && y4<20))
       {
           cout<<"Te pakten njera nga pikat nuk eshte <20.";
           return;

       }

    if(!((x1==x2&&y1==y3 &&x3==x4&&y4==y2&& y1!=y2 && x1!=x3)||(x1==x3&&y1==y2 &&x2==x4&&y4==y3&& y1!=y3 && x1!=x2)||(x1==x4&&y1==y2 &&x2==x3&&y4==y3&& y1!=y4 && x1!=x2)))
        {
            cout<<"Kordinatat nuk formojne drejtkendesh";
            return;
            }
            cout<<"eshte drejtkendesh:\n";
            a1=x1;
            a2=x2;
            a3=x3;
            a4=x4;
            b1=y1;
            b2=y2;
            b3=y3;
            b4=y4;

}

int lengthRectangle(){
    int l,w;
    if(a2==a3)
      l=abs(a3-a4);
    else if(a4==a2)
        l=abs(a4-a3);
     else if(a3==a4)
     l=abs(a4-a2);

       if(b3==b4)
      w=abs(b3-b2);
    else if(b4==b2)
        w=abs(b3-b4);

     if(l>w)
        length=l;
     else length=w;

     return length;

}

int widthRectangle(){
    int l,w;
    if(a2==a3)
      l=abs(a3-a4);
    else if(a4==a2)
        l=abs(a4-a3);
     else if(a3==a4)
     l=abs(a4-a2);

       if(b3==b4)
      w=abs(b3-b2);
    else if(b4==b2)
        w=abs(b3-b4);

     if(l>w)
        width=w;
     else width=l;

     return width;
}

int perimeterRectangle(int l,int w){

return 2*(l+w);

}

int perimeterRectangle(){

return 2*(length+width);

}

int areaRectangle(int l,int w){

return l*w;
}

int areaRectangle(){

return length*width;
}

bool squareRectangle(){

    if(length==width)
        return true;
    else return false;

}


private:
   int a1,a2,a3,a4,b1,b2,b3,b4;
   int length;
   int width;
};



int main(){


Rectangle r;
r.setCoordinates(1,1,1,10,2,1,2,10);

cout<<endl<<r.lengthRectangle();
cout<<endl<<r.widthRectangle();
cout<<endl<<r.perimeterRectangle();
cout<<endl<<r.areaRectangle();
cout<<endl<<r.squareRectangle();
}
