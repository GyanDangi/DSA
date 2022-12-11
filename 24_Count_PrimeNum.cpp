#include <iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){

    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int countPrime(int n){

    int count=0;
    for (int i = 2; i < n; i++)
    {
      if(isPrime(i)){
        count++;
        cout<<i<<endl;
      }
    }
    return count;
    
}

int main(){

    int n;
    cout<<"enter the number ";
    cin>>n;
    int ans=countPrime(n);
    cout<<"The total prime number present are:"<<ans;

    return 0;
}