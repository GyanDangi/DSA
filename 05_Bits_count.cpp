#include <iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the bits:";
cin>>n;
// int count=0;
// while(n!=0){
//     if(n&1){
//         count++;
//     }
//     n=n>>1;
// }
// cout<< count;


cout<<(n&1)<<endl;
if((n&1)==0){
    cout<<"even"<<endl;
}
else{
    cout<<"odd"<<endl;
}


    return 0;
}
