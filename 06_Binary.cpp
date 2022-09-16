#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

// Number to binary:
int main(){
    int n;
    cout<< " enter the number:";
    cin>>n;

    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int bit= n & 1;
    //     ans=(bit*pow(10,i))+ans;
    //     n = n>>1;
    //     i++;
    // }
    // cout<<"answer is:"<<ans<<endl;


// // Binary to Decimal:
int i=0;
int ans=0;
while(n!=0){

   int digit=n%10;

   if(digit==1){
    ans= ans+pow(2,i);
   }
    n=n/10;
    i++;
}
cout<<ans;


    return 0;
}