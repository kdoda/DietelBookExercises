#include <iostream>
#include <vector>
#include <iomanip>
#include <stdlib.h>  //permban system cls qe fshin ekranin
#include <cstdlib>
using namespace std;

class TicTacToe{

    private:
    int nr;
    int v[3][3];

public:
    TicTacToe()
    :nr(0)
    {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        v[i][j]=0;
    }

void setV(int i,int j){

     //kur ka vl zero eshte player 1
if(isValid(i,j)) {  //nqs luajne 2 veta ky eshte kodi



    if(nr==0 && isFree(i,j))
     {v[i][j]=1;
      nr=1;}

     else if(nr==1 && isFree(i,j))
     {v[i][j]=2;
      nr=0;}

}

   return;

}


void setV1(int i,int j){
    if(isValid(i,j)&& isFree(i,j))   //nqs luan vetem 1 person ky eshte kodi
         v[i][j]=1;

}


void luajPC(){
    while(1){
    int i=rand()%3;
    int j=rand()%3;

    if(isValid(i,j)&& isFree(i,j))
         {v[i][j]=2;
         return;}
    }


}


bool isValid(int i,int j){
    if(i<3&&j<3)
        return true;
    else return false;
}

bool isFree(int i,int j){

    if(v[i][j]==0)
        return true;
    else return false;

}

void print(){

    cout<<endl<<endl<<endl<<endl<<"loja der ne keto momente eshte e tille:"<<endl;

for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            {
                if(v[i][j]==0)
                   cout<<setw(4)<<"_";
                else if(v[i][j]==1)
                   cout<<setw(4)<<"X";
                else if(v[i][j]==2)
                    cout<<setw(4)<<"O";


            }
        cout<<endl;
        }
}

int isWon(){
    bool x=true;
    for(int i=0;i<3;i++){

        for(int j=i+1;j<3;j++)    //kontrollojme cdo rresht
            if(v[i][j]!=v[i][j-1])
        {x=false;
          break;}

          if(x==true && v[i][0]==1)
            return 1;                  //kthe 1 per fites player 1 ose 2 per fitues player 2
            else if(x==true && v[i][0]==2)
                return 2;
          }

        x=true;

     for(int j=0;j<3;j++){    //kontrollojme shtyllat
        for(int i=j+1;i<3;i++)
            if(v[i][j]!=v[i-1][j])
        {
            x=false;
            break;
        }

        if(x==true && v[0][j]==1)
            return 1;                  //kthe 1 per fites player 1 ose 2 per fitues player 2
        else if(x==true && v[0][j]==2)
                return 2;


     }
    int i=0;
     if(v[i][i]==v[i+1][i+1]&& v[i][i]==v[i+2][i+2])
     {
         if(v[i][i]==1)
            return 1;
         else if(v[i][i]==2)
            return 2;
     }

  if(v[2][0]==v[1][1]&& v[1][1]==v[0][2])
     {
         if(v[2][0]==1)
            return 1;
         else if(v[2][0]==2)
            return 2;
     }

return 0;


}


};

int main(){

    TicTacToe t;

int rr,sh,veta;

cout<<"Si do luani 1 person apo 2:";
cin>>veta;

if(veta==2){

    for(int i=0;i<9;i++)
    {

        t.print();
        cout<<endl<<"Player "<<i%2+1<<",jep pozicionin qe do zgjdhesh:  ";
        cin>>rr>>sh;
       system("cls");
      if(!t.isValid(rr,sh))
      {
          cout<<"Pozicioni nuk eshte i vlefshem";
          i--;
      }
      else if(!t.isFree(rr,sh))
       {
           cout<<"Pozicioni nuk eshte i lire!";
           i--;
       }
       else t.setV(rr,sh);

       if(t.isWon()==1){
        cout<<"player 1 fitoi";
        t.print();
        break;
       }
       else if(t.isWon()==2)
        {
        cout<<"player 2 fitoi";
       t.print();
        break;
       }
       else if(t.isWon()==0)
        {
        cout<<"loja eshte barazim ";
       }
    }
}


else if (veta==1){
    for(int i=0;i<9;i++){
            t.print();
            if(i%2==0)
            {
        cout<<endl<<"Player 1,jep pozicionin qe do zgjdhesh:  ";
        cin>>rr>>sh;
      system("cls");
        if(!t.isValid(rr,sh))
      {
          cout<<"Pozicioni nuk eshte i vlefshem";
          i--;
      }
      else if(!t.isFree(rr,sh))
       {
           cout<<"Pozicioni nuk eshte i lire!";
           i--;
       }
       else t.setV1(rr,sh);
            }

        else {
                t.luajPC();
        system("cls");
        }

         if(t.isWon()==1){
        cout<<"player 1 fitoi";
        t.print();
        break;
       }
       else if(t.isWon()==2)
        {
        cout<<"computer fitoi";
       t.print();
        break;
       }
       else if(t.isWon()==0)
        {
        cout<<"loja eshte barazim ";
       }



    }
}




}
