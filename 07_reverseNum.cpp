#include <iostream>
using namespace std;


int main(){

    // cout<<(2**32)<<endl;
    int a='-';
    cout<<a<<endl;
    cout<<(4&1)<<endl;
    int n;
    cout<<"enter the numbers:";
    cin>>n;
    int ans=0;
    while(n!=0){
        int digit= n%10;

        if((ans<INT32_MIN/10)||(ans>INT32_MAX/10)){
            return 0;
        }
        ans=(ans*10)+digit;

        n=n/10;
    }
    
    cout<<ans;
}