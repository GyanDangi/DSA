#include <iostream>
using namespace std;

// 0-> Prime number
// 1-> Not Prime Number
int isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%2==0){
            return 0;

        }
    }
    return 1;
}

int main(){

    int n;
    cout<<"enter the number:";
    cin>>n;

    if(isPrime(n)){
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"Not prime number"<<endl;
    }



 return 0;
}