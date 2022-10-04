#include <iostream>
using namespace std;

int main(){

//   01
// int n;
// cout<<"Enter the number:";
// cin>>n;
// int i=1;
// while(i<=n){
//     cout<<i<<" ";
//     i=i+1;
// }

// sum of nautral numbers
// int sum=0;

// int s=1;
// while(s<=n){
//    sum=sum+s;
    
//     s=s+1;
// }
// cout<<sum<<" ";

// sum of the even numbers

int num;
cout<<"Enter the number:";
cin>>num;
int sum=0;
int i=1;
while(i<=num){
    sum=sum+2*i;
    i=i+1;
}
cout<<sum<<endl;

    return 0;
}