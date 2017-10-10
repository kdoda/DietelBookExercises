#include <iostream>
#include <vector>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class TicTacToe{
public:
    TicTacToe()
    :nr(0)
    {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        v[i][j]=0;
    }

void setV(int i,int j){

    if(nr==6)
        nr=0;

   if(isValid(i,j))
{

    if(nr%2==0 && isFree(i,j))
     {v[i][j]=1;
      nr++;}

     else if(nr%2==1 && isFree(i,j))
     {v[i][j]=2;
      nr++;}
}



   isWon();

   return;

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

    cout<<endl<<"loja der ne keto momente eshte e tille:"<<endl;

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

void isWon(){

   for(int i=0;i<3;i++){
        bool x=true;
        for(int j=1;j<3;j++)
            {
                if(v[i][j]!=v[i][j-1])
                x=false;
            }
        if(x && v[i][0]==1)
            cout<<endl<<"Player 1 is the winner";
        else if(x && v[i][0]==2)
            cout<<endl<<"Player 2 is the winner";
   }

}

private:
    int nr;
    int v[3][3];
};

int main(){

    TicTacToe t;

int rr,sh;

    for(int i=0;i<6;i++)
    {
         t.print();
        cout<<endl<<"Player "<<i%2+1<<",jep pozicionin qe do zgjdhesh:  ";
        cin>>rr>>sh;

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
       else {
            t.setV(rr,sh);

       }
       system("cls");

    }




}
