#include <iostream>
#include<math.h>
using namespace std;

int isPrime(int n){

    for (int i = 2; i < n; i++)
    {
       if (n%i==0)
       {
       return 0;
       }
       
    }
    return 1;
    
}

int main(){

    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    // int ans=isPrime(n);
    // cout<<ans;
  if (isPrime(n))
  {
    cout<<"Prime number";
  }
  else{
    cout<<"not prime number"<<endl;
  }
  
    


    return 0;
}