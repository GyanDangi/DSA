#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of the n:";
cin>>n;
int a=0;
int b=1;
cout<<a<<" ";
cout<<b<<" ";

for(int i=1; i<=n; i++){
    int nextNum=a+b;
    cout<<nextNum<<" ";
    a=b;
    b=nextNum;
}

// bool isprime=1;
// for(int i=2; i<n; i++){
//     if(n%i==0){
//         // cout<<n<<" is not prime"<<endl;
//         isprime=0;
//         break;
//     }
//     // else{
//     //     cout<<n<<" is prime numbers"<<endl;
//     //     break;
//     // }
// }
// if(isprime==0){
//     cout<<"Not prime"<<endl;
// }
// else{
//     cout<<" prime number";
// }

// for(int i=1; i<=n; i++){

//         cout<<" HEllo bro";
//         cout<<" aur dost"<<endl;
//         continue;
//         cout<<"reply kr..";
// }

// for(int i=0; i<=n; i--){
//     cout<<i<<endl;
//     // break;
//     i++;
// }

// for(int i=0; i<=n; i++){

//     for(int j=i; j<=n; j++){
//         cout<<j<<" ";
//     }
//     // cout<<endl;
// }
// for(int i=0; i<=n; i++){

//     for(int j=i; j<=n; j++){
//         if(i+j==12){
//         // cout<<j<<" ";
//         break;
//         }
//          cout<<i<<" "<<j<<endl;
//     }
   
//     // cout<<endl;
// }

// cout<<n%2<<endl;
// cout<<n/2<<endl;
// cout<<n/2;

// for(int i=n; i>0; i--){
//      int rem=n/2;
// }


    return 0;
}
