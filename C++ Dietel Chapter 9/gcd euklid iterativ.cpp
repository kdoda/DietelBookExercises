#include <iostream>
#include <iomanip>


using namespace std;




    int gcd(int m ,int n){  //m>=n

        if(n>m)
          gcd(n,m);  //sepse duhet m>=n

        while(n!=0){
            int rem=m%n; //reminder
            m=n;
            n=rem;
        }
        return m;
    }


    int main(){

    cout<<gcd(15,20);

    }
