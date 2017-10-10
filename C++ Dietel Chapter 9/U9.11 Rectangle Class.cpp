#include <iostream>
#include <iomanip>
//nominator - numeruesi'''denominator-emeruesi
// gcd-greatest common devisor(euklid)
using namespace std;

class Rectangle{
public:

Rectangle(float l=1,float w=1){
    length=l;
    width=w;
    }

 void setLength(float l){
     if(l>0 &&l<20)
        length=l;
     else cout<<"vlera e length:"<<l<<" nuk eshte ndermjet 0 dhe 20\n";

 }

  void setWidth(float w){
     if(w>0 &&w<20)
        width=w;
     else cout<<"vlera e width:"<<w<<" nuk eshte ndermjet 0 dhe 20\n";

 }


float getLength(){
return length;
}

float getWidth(){
return width;
}

float perimeterRectangle(float l,float w){

return 2*(l+w);

}

float perimeterRectangle(){

return 2*(length+width);

}

float areaRectangle(float l,float w){

return l*w;
}

float areaRectangle(){

return length*width;
}


private:
    float length;
    float width;
};



int main(){

Rectangle r;

r.setLength(11);
cout<<r.getLength();

r.setWidth(12.245);
cout<<endl<<r.getWidth();

cout<<endl<<r.perimeterRectangle(5.51,5.51);


cout<<endl<<r.perimeterRectangle();
cout<<endl<<r.areaRectangle();
cout<<endl<<r.areaRectangle(2.4,4.67);


}
