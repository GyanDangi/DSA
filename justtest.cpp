#include <iostream>
#include <math.h>
using namespace std;

int main(){
    // Decimal to binary:

    // int n;
    // cout<< "Enter the number:";
    // cin>>n;
    //     int ans=0;
    //     int i=0;
    // while(n!=0){

    //     int digit=n&1;
    //     if(digit==1){
    //         ans=digit*pow(10,i)+ ans;    
    //     }
    //     n=n>>1;
    //     i++;
    // }
    // cout<<ans;

    // Binary to Decimal
    int bin;
    cout<<"enter the binary number:";
    cin>>bin;
    int i=0; 
    int ans=0;
    while(bin!=0){
        int digit=bin%10;
        if(digit==1){
        ans= ans+pow(2,i);
        }
        bin=bin/10;
        i++;
    }
    cout<<ans;

    return 0;
}